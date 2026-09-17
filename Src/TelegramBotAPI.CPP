#include "TelegramBotAPI/TelegramBotAPI.HPP"

#include "TelegramBotAPI/Methods/getUpdates.HPP"

namespace TelegramBotAPI {
    TelegramBotAPI::TelegramBotAPI(const std::string &BotToken)
        : Client(BotToken) {}

    TelegramBotAPI::TelegramBotAPI(const std::string &BotToken,
                                   const std::string &APIURL)
        : Client(BotToken, APIURL) {}

    void TelegramBotAPI::Run() {
        Running.store(true);

        Methods::getUpdates GetUpdates(Client);

        while (Running.load()) {
            Methods::getUpdates::Parameters Parameters;

            Parameters.Offset  = Offset;
            Parameters.Limit   = 100;
            Parameters.Timeout = 30;

            std::vector<Type::Update> Updates = GetUpdates.Get(Parameters);

            for (const Type::Update &Update : Updates) {
                if (!Running.load()) {
                    break;
                }

                ProcessUpdate(Update);

                Offset = Update.UpdateID + 1;
            }
        }
    }

    void TelegramBotAPI::Stop() { Running.store(false); }

    void TelegramBotAPI::ProcessUpdate(const Type::Update &Update) {}
} // namespace TelegramBotAPI