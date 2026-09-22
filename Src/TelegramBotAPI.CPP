#include "TelegramBotAPI/TelegramBotAPI.HPP"

#include <utility>

#include "TelegramBotAPI/Methods/answerCallbackQuery.HPP"
#include "TelegramBotAPI/Methods/getUpdates.HPP"
#include "TelegramBotAPI/Methods/sendMessage.HPP"
#include "TelegramBotAPI/Methods/sendPhoto.HPP"

namespace TelegramBotAPI {
// Constructor implementations / 构造函数实现
    TelegramBotAPI::TelegramBotAPI(const std::string &BotToken)
        : Client(BotToken) {}

    TelegramBotAPI::TelegramBotAPI(const std::string &BotToken,
                                   const std::string &APIURL)
        : Client(BotToken, APIURL) {}

    TelegramBotAPI::TelegramBotAPI(const std::string    &BotToken,
                                   Network::IHTTPClient &HTTPClient)
        : Client(BotToken, HTTPClient) {}

    TelegramBotAPI::TelegramBotAPI(const std::string    &BotToken,
                                   const std::string    &APIURL,
                                   Network::IHTTPClient &HTTPClient)
        : Client(BotToken, APIURL, HTTPClient) {}

    TelegramClient &TelegramBotAPI::API() noexcept {
        return Client;
    }

    const TelegramClient &TelegramBotAPI::API() const noexcept {
        return Client;
    }

// Handler registration / 处理器注册
    void TelegramBotAPI::OnMessage(MessageHandler Handler) {
        MessageHandlerFunction = std::move(Handler);
    }

    void TelegramBotAPI::OnCallbackQuery(CallbackQueryHandler Handler) {
        CallbackQueryHandlerFunction = std::move(Handler);
    }

// Convenience methods / 便捷方法
    bool
    TelegramBotAPI::AnswerCallbackQuery(const std::string &CallbackQueryID) {
        Methods::answerCallbackQuery AnswerCallbackQueryMethod(Client);

        return AnswerCallbackQueryMethod.AnswerCallbackQuery(CallbackQueryID);
    }

    Type::Message TelegramBotAPI::SendMessage(long long          ChatID,
                                              const std::string &Text) {
        Methods::sendMessage SendMessageMethod(Client);

        return SendMessageMethod.SendMessage(ChatID, Text);
    }

    Type::Message TelegramBotAPI::SendPhoto(long long              ChatID,
                                            const Type::InputFile &Photo) {
        return SendPhoto(ChatID, Photo, "");
    }

    Type::Message TelegramBotAPI::SendPhoto(long long              ChatID,
                                            const Type::InputFile &Photo,
                                            const std::string     &Caption) {

        return SendPhoto(ChatID, Photo, Caption, "");
    }

    Type::Message TelegramBotAPI::SendPhoto(long long              ChatID,
                                            const Type::InputFile &Photo,
                                            const std::string     &Caption,
                                            const std::string     &ParseMode) {

        Methods::sendPhoto             SendPhotoMethod(Client);
        Methods::sendPhoto::Parameters Parameters(ChatID, Photo);

        Parameters.Caption = Caption;

        if (!ParseMode.empty()) {
            Parameters.ParseMode = ParseMode;
        }

        return SendPhotoMethod.SendPhoto(Parameters);
    }

    Type::Message TelegramBotAPI::SendPhoto(
        long long ChatID, const Type::InputFile &Photo,
        const std::string                      &Caption,
        const std::vector<Type::MessageEntity> &CaptionEntities) {

        Methods::sendPhoto SendPhotoMethod(Client);

        Methods::sendPhoto::Parameters Parameters(ChatID, Photo);

        Parameters.Caption         = Caption;
        Parameters.CaptionEntities = CaptionEntities;

        return SendPhotoMethod.SendPhoto(Parameters);
    }

// Long-polling runtime / 长轮询运行时
    void TelegramBotAPI::Run() {
        Running.store(true);

        try {
            Methods::getUpdates GetUpdates(Client);

            while (Running.load()) {
                Methods::getUpdates::Parameters Parameters;

                Parameters.Offset  = Offset;
                Parameters.Limit   = 100;
                Parameters.Timeout = 30;

                std::vector<Type::Update> Updates = GetUpdates.GetUpdates(Parameters);

                ProcessUpdates(Updates);
            }
        } catch (...) {
            Running.store(false);

            throw;
        }

        Running.store(false);
    }

    void TelegramBotAPI::Stop() { Running.store(false); }

// Update processing / 更新处理
    void
    TelegramBotAPI::ProcessUpdates(const std::vector<Type::Update> &Updates) {
        for (const Type::Update &Update : Updates) {
            if (!Running.load()) {
                break;
            }

            try {
                ProcessUpdate(Update);
            } catch (...) {
                // Individual update handler failures must not terminate
                // the long-polling loop. The update is still acknowledged
                // by advancing the offset below.
                // 单个更新处理器的失败不得终止长轮询循环。
                // 通过推进下面的偏移量，更新仍然会被确认。
            }

            Offset = Update.UpdateID + 1;
        }
    }

    void TelegramBotAPI::ProcessUpdate(const Type::Update &Update) {
        if (Update.Message.has_value() && MessageHandlerFunction) {
            MessageHandlerFunction(Update.Message.value());
        }

        if (Update.CallbackQuery.has_value() && CallbackQueryHandlerFunction) {
            CallbackQueryHandlerFunction(Update.CallbackQuery.value());
        }
    }
} // namespace TelegramBotAPI