#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TelegramBotAPI/Methods/copyMessage.HPP"

#include <cstddef>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <unordered_map>

namespace {

struct RelayConfiguration {
    std::string BotToken;
    long long AdminChatID;
};

class MessageRelay {
public:
    explicit MessageRelay(RelayConfiguration ConfigurationValue)
        : Configuration(std::move(ConfigurationValue)) {}

    void HandleMessage(
        TelegramBotAPI::TelegramBotAPI &Bot,
        const TelegramBotAPI::Type::Message &Message) {
        try {
            if (Message.Chat.ID == Configuration.AdminChatID) {
                HandleAdminMessage(Bot, Message);
                return;
            }

            if (Message.Chat.Type != "private") {
                return;
            }

            HandleUserMessage(Bot, Message);
        } catch (const std::exception &Exception) {
            std::cerr << "Message handling error: " << Exception.what() << '\n';

            try {
                const long long TargetChatID =
                    Message.Chat.ID == Configuration.AdminChatID
                        ? Configuration.AdminChatID
                        : Message.Chat.ID;

                Bot.API().SendMessage(
                    TargetChatID,
                    "消息处理失败，请稍后重试。"
                );
            } catch (const std::exception &NotificationException) {
                std::cerr
                    << "Failed to send error notification: "
                    << NotificationException.what()
                    << '\n';
            }
        }
    }

private:
    static constexpr std::size_t MaxReplyMappings = 10000;

    RelayConfiguration Configuration;
    std::unordered_map<long long, long long> AdminMessageToUser;
    std::deque<long long> MappingOrder;

    static bool StartsWith(
        const std::string &Text,
        const std::string_view Prefix) {
        return Text.size() >= Prefix.size() &&
               Text.compare(0, Prefix.size(), Prefix) == 0;
    }

    static std::string BuildUserDisplayName(
        const TelegramBotAPI::Type::User &User) {
        std::string Name = User.FirstName;

        if (User.LastName.has_value() && !User.LastName->empty()) {
            Name += " ";
            Name += User.LastName.value();
        }

        return Name;
    }

    static std::string BuildUserHeader(
        const TelegramBotAPI::Type::Message &Message) {
        std::ostringstream Output;

        Output << "📨 用户消息\n";
        Output << "Chat ID: " << Message.Chat.ID << '\n';

        if (Message.From.has_value()) {
            const TelegramBotAPI::Type::User &User = Message.From.value();

            Output << "用户: " << BuildUserDisplayName(User) << '\n';
            Output << "User ID: " << User.ID << '\n';

            if (User.UserName.has_value() && !User.UserName->empty()) {
                Output << "Username: @" << User.UserName.value() << '\n';
            }
        }

        Output << "Message ID: " << Message.MessageID << '\n';
        Output << "请直接回复下面的消息，将内容发送给该用户。";

        return Output.str();
    }

    void RememberMapping(
        const long long AdminMessageID,
        const long long UserChatID) {
        const auto Existing = AdminMessageToUser.find(AdminMessageID);

        if (Existing == AdminMessageToUser.end()) {
            MappingOrder.push_back(AdminMessageID);
        }

        AdminMessageToUser[AdminMessageID] = UserChatID;

        while (MappingOrder.size() > MaxReplyMappings) {
            const long long OldestMessageID = MappingOrder.front();
            MappingOrder.pop_front();
            AdminMessageToUser.erase(OldestMessageID);
        }
    }

    static bool TryParseReplyCommand(
        const std::string &Text,
        long long &UserChatID,
        std::string &ReplyText) {
        if (!StartsWith(Text, "/reply")) {
            return false;
        }

        const std::size_t Separator = Text.find_first_of(" \t", 6);
        if (Separator == std::string::npos) {
            return false;
        }

        try {
            UserChatID = std::stoll(Text.substr(6, Separator - 6));
        } catch (const std::exception &) {
            return false;
        }

        const std::size_t TextStart = Text.find_first_not_of(" \t", Separator);
        if (TextStart == std::string::npos) {
            ReplyText.clear();
            return true;
        }

        ReplyText = Text.substr(TextStart);
        return true;
    }

    void HandleUserMessage(
        TelegramBotAPI::TelegramBotAPI &Bot,
        const TelegramBotAPI::Type::Message &Message) {
        const long long UserChatID = Message.Chat.ID;

        const std::string Header = BuildUserHeader(Message);
        Bot.API().SendMessage(Configuration.AdminChatID, Header);

        try {
            const TelegramBotAPI::Type::MessageId AdminMessageID =
                Bot.API().CopyMessage(
                    Configuration.AdminChatID,
                    UserChatID,
                    Message.MessageID
                );

            RememberMapping(AdminMessageID.MessageID, UserChatID);
        } catch (const std::exception &Exception) {
            std::cerr
                << "Failed to relay user message "
                << Message.MessageID
                << ": "
                << Exception.what()
                << '\n';

            Bot.API().SendMessage(
                UserChatID,
                "该消息暂时无法转发给管理员。可能是受保护内容或 Telegram 当前不允许复制的消息类型。"
            );
        }
    }

    void HandleAdminMessage(
        TelegramBotAPI::TelegramBotAPI &Bot,
        const TelegramBotAPI::Type::Message &Message) {
        if (!Message.Text.has_value()) {
            HandleAdminReply(Bot, Message);
            return;
        }

        const std::string &Text = Message.Text.value();

        if (Text == "/start" || Text == "/help") {
            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "双向客服机器人已运行。\n\n"
                "回复用户消息：直接使用 Telegram 的“回复”功能回复用户消息。\n"
                "直接发送：/reply <UserChatID> <消息内容>\n"
                "例如：/reply 123456789 你好"
            );
            return;
        }

        if (Text == "/id") {
            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "Admin Chat ID: " +
                std::to_string(Configuration.AdminChatID)
            );
            return;
        }

        if (StartsWith(Text, "/reply")) {
            long long UserChatID = 0;
            std::string ReplyText;

            if (!TryParseReplyCommand(Text, UserChatID, ReplyText) ||
                ReplyText.empty()) {
                Bot.API().SendMessage(
                    Configuration.AdminChatID,
                    "格式错误：/reply <UserChatID> <消息内容>"
                );
                return;
            }

            Bot.API().SendMessage(UserChatID, ReplyText);
            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "已发送给用户 " + std::to_string(UserChatID)
            );
            return;
        }

        HandleAdminReply(Bot, Message);
    }

    void HandleAdminReply(
        TelegramBotAPI::TelegramBotAPI &Bot,
        const TelegramBotAPI::Type::Message &Message) {
        if (!Message.ReplyToMessage) {
            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "请回复一条用户消息，再发送给该用户；或者使用 /reply <UserChatID> <消息内容>。"
            );
            return;
        }

        const long long AdminMessageID = Message.ReplyToMessage->MessageID;
        const auto Mapping = AdminMessageToUser.find(AdminMessageID);

        if (Mapping == AdminMessageToUser.end()) {
            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "找不到这条用户消息对应的会话。机器人重启后，内存中的回复映射会丢失；请使用 /reply <UserChatID> <消息内容>。"
            );
            return;
        }

        const long long UserChatID = Mapping->second;

        try {
            Bot.API().CopyMessage(
                UserChatID,
                Configuration.AdminChatID,
                Message.MessageID
            );
        } catch (const std::exception &Exception) {
            std::cerr
                << "Failed to send admin message to user "
                << UserChatID
                << ": "
                << Exception.what()
                << '\n';

            Bot.API().SendMessage(
                Configuration.AdminChatID,
                "发送失败：" + std::string(Exception.what())
            );
        }
    }
};

RelayConfiguration LoadConfiguration() {
    const char *BotTokenEnvironment = std::getenv("TELEGRAM_BOT_TOKEN");
    const char *AdminChatIDEnvironment =
        std::getenv("TELEGRAM_ADMIN_CHAT_ID");

    if (BotTokenEnvironment == nullptr ||
        std::string(BotTokenEnvironment).empty()) {
        throw std::runtime_error("TELEGRAM_BOT_TOKEN is not set");
    }

    if (AdminChatIDEnvironment == nullptr ||
        std::string(AdminChatIDEnvironment).empty()) {
        throw std::runtime_error("TELEGRAM_ADMIN_CHAT_ID is not set");
    }

    RelayConfiguration Configuration;
    Configuration.BotToken = BotTokenEnvironment;
    Configuration.AdminChatID = std::stoll(AdminChatIDEnvironment);

    return Configuration;
}

} // namespace

int main() {
    try {
        RelayConfiguration Configuration = LoadConfiguration();
        TelegramBotAPI::TelegramBotAPI Bot(Configuration.BotToken);
        MessageRelay Relay(Configuration);

        Bot.OnMessage([&Bot, &Relay](
            const TelegramBotAPI::Type::Message &Message) {
            Relay.HandleMessage(Bot, Message);
        });

        std::cout << "RelayBot is running...\n";
        std::cout << "Admin Chat ID: "
                  << Configuration.AdminChatID
                  << '\n';

        Bot.Run();
    } catch (const std::exception &Exception) {
        std::cerr << "RelayBot error: " << Exception.what() << '\n';
        return 1;
    }

    return 0;
}
