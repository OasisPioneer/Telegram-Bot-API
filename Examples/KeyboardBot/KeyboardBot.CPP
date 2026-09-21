#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TelegramBotAPI/Methods/sendMessage.HPP"

#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <variant>
#include <utility>

namespace {

::TelegramBotAPI::Type::InlineKeyboardMarkup MakeMainInlineKeyboard() {
    ::TelegramBotAPI::Type::InlineKeyboardButton Hello;
    Hello.Text = "Hello";
    Hello.CallbackData = "hello";

    ::TelegramBotAPI::Type::InlineKeyboardButton Status;
    Status.Text = "Status";
    Status.CallbackData = "status";

    ::TelegramBotAPI::Type::InlineKeyboardButton GitHub;
    GitHub.Text = "GitHub";
    GitHub.URL = "https://github.com/OasisPioneer/Telegram-Bot-API";

    ::TelegramBotAPI::Type::InlineKeyboardMarkup Keyboard;
    Keyboard.InlineKeyboard = {
        {Hello, Status},
        {GitHub}
    };

    return Keyboard;
}

::TelegramBotAPI::Type::ReplyKeyboardMarkup MakeReplyKeyboard() {
    ::TelegramBotAPI::Type::KeyboardButton Hello;
    Hello.Text = "你好";

    ::TelegramBotAPI::Type::KeyboardButton Status;
    Status.Text = "状态";

    ::TelegramBotAPI::Type::KeyboardButton InlineMenu;
    InlineMenu.Text = "Inline Menu";

    ::TelegramBotAPI::Type::KeyboardButton Hide;
    Hide.Text = "隐藏键盘";

    ::TelegramBotAPI::Type::ReplyKeyboardMarkup Keyboard;
    Keyboard.Keyboard = {
        {Hello, Status},
        {InlineMenu, Hide}
    };

    Keyboard.ResizeKeyboard = true;
    Keyboard.IsPersistent = true;

    return Keyboard;
}

::TelegramBotAPI::Type::ReplyKeyboardRemove MakeKeyboardRemove() {
    ::TelegramBotAPI::Type::ReplyKeyboardRemove Remove;
    Remove.RemoveKeyboard = true;
    Remove.Selective = false;
    return Remove;
}

template <typename ReplyMarkup>
void SendMessageWithReplyMarkup(
    ::TelegramBotAPI::TelegramBotAPI &Bot,
    long long ChatID,
    const std::string &Text,
    ReplyMarkup Markup
) {
    ::TelegramBotAPI::Methods::sendMessageParameters Parameters(
        ChatID,
        Text
    );

    Parameters.ReplyMarkup = std::variant<
        ::TelegramBotAPI::Type::InlineKeyboardMarkup,
        ::TelegramBotAPI::Type::ReplyKeyboardMarkup,
        ::TelegramBotAPI::Type::ReplyKeyboardRemove,
        ::TelegramBotAPI::Type::ForceReply
    >{std::move(Markup)};

    Bot.API().SendMessage(Parameters);
}

void SendInlineMenu(::TelegramBotAPI::TelegramBotAPI &Bot, long long ChatID) {
    SendMessageWithReplyMarkup(
        Bot,
        ChatID,
        "请选择一个操作：",
        MakeMainInlineKeyboard()
    );
}

} // namespace

int main() {
    const char *Token = std::getenv("TELEGRAM_BOT_TOKEN");

    if (Token == nullptr || std::string(Token).empty()) {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set.\n";
        return 1;
    }

    try {
        ::TelegramBotAPI::TelegramBotAPI Bot(Token);

        Bot.OnMessage([&Bot](const ::TelegramBotAPI::Type::Message &Message) {
            if (!Message.Text.has_value()) {
                return;
            }

            const std::string &Text = Message.Text.value();
            const long long ChatID = Message.Chat.ID;

            if (Text == "/start") {
                SendMessageWithReplyMarkup(
                    Bot,
                    ChatID,
                    "KeyboardBot 已启动。请选择一个操作：",
                    MakeMainInlineKeyboard()
                );
                return;
            }

            if (Text == "/keyboard") {
                SendMessageWithReplyMarkup(
                    Bot,
                    ChatID,
                    "这是 Reply Keyboard：",
                    MakeReplyKeyboard()
                );
                return;
            }

            if (Text == "你好") {
                Bot.API().SendMessage(ChatID, "你好！");
                return;
            }

            if (Text == "状态") {
                Bot.API().SendMessage(ChatID, "KeyboardBot 正在运行。");
                return;
            }

            if (Text == "Inline Menu") {
                SendInlineMenu(Bot, ChatID);
                return;
            }

            if (Text == "隐藏键盘") {
                SendMessageWithReplyMarkup(
                    Bot,
                    ChatID,
                    "Reply Keyboard 已隐藏。",
                    MakeKeyboardRemove()
                );
                return;
            }
        });

        Bot.OnCallbackQuery([&Bot](const ::TelegramBotAPI::Type::CallbackQuery &Query) {
            // Telegram clients should receive an answer to the callback.
            Bot.API().AnswerCallbackQuery(Query.ID);

            if (!Query.Data.has_value()) {
                return;
            }

            if (!Query.Message.has_value()) {
                return;
            }

            const auto &MessageVariant = Query.Message.value();

            if (!std::holds_alternative<std::shared_ptr<::TelegramBotAPI::Type::Message>>(
                    MessageVariant)) {
                return;
            }

            const auto &Message =
                std::get<std::shared_ptr<::TelegramBotAPI::Type::Message>>(MessageVariant);

            if (!Message) {
                return;
            }

            const long long ChatID = Message->Chat.ID;
            const std::string &Data = Query.Data.value();

            if (Data == "hello") {
                Bot.API().SendMessage(ChatID, "Hello from an Inline Keyboard!");
                return;
            }

            if (Data == "status") {
                Bot.API().SendMessage(ChatID, "KeyboardBot is running.");
                return;
            }
        });

        std::cout << "KeyboardBot is running...\n";
        Bot.Run();

    } catch (const std::exception &Exception) {
        std::cerr << "KeyboardBot error: "
                  << Exception.what()
                  << '\n';
        return 1;
    }

    return 0;
}
