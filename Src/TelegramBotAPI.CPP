#include "TelegramBotAPI/TelegramBotAPI.HPP"

#include <utility>

#include "TelegramBotAPI/Methods/answerCallbackQuery.HPP"
#include "TelegramBotAPI/Methods/getUpdates.HPP"
#include "TelegramBotAPI/Methods/sendMessage.HPP"
#include "TelegramBotAPI/Methods/sendPhoto.HPP"

namespace TelegramBotAPI {
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

    void TelegramBotAPI::OnMessage(MessageHandler Handler) {
        MessageHandlerFunction = std::move(Handler);
    }

    void TelegramBotAPI::OnCallbackQuery(CallbackQueryHandler Handler) {
        CallbackQueryHandlerFunction = std::move(Handler);
    }

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

        return SendPhotoMethod.Send(Parameters);
    }

    void TelegramBotAPI::Run() {
        Running.store(true);

        try {
            Methods::getUpdates GetUpdates(Client);

            while (Running.load()) {
                Methods::getUpdates::Parameters Parameters;

                Parameters.Offset  = Offset;
                Parameters.Limit   = 100;
                Parameters.Timeout = 30;

                std::vector<Type::Update> Updates = GetUpdates.Get(Parameters);

                ProcessUpdates(Updates);
            }
        } catch (...) {
            Running.store(false);

            throw;
        }

        Running.store(false);
    }

    void TelegramBotAPI::Stop() { Running.store(false); }

    void
    TelegramBotAPI::ProcessUpdates(const std::vector<Type::Update> &Updates) {
        for (const Type::Update &Update : Updates) {
            if (!Running.load()) {
                break;
            }

            ProcessUpdate(Update);

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