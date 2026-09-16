#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "TelegramBotAPI/Methods/getUpdates.HPP"

int main()
{
    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_BOT_TOKEN is not set"
            << std::endl;

        return 1;
    }

    const std::string BotToken =
        BotTokenEnvironment;

    try
    {
        TelegramBotAPI::TelegramClient Client(
            BotToken
        );

        TelegramBotAPI::Methods::getUpdates GetUpdates(
            Client
        );

        std::vector<TelegramBotAPI::Type::Update> Updates =
            GetUpdates.GetUpdates(
                std::nullopt,
                100,
                0
            );

        std::cout
            << "GetUpdatesTest passed"
            << std::endl;

        std::cout
            << "UpdateCount: "
            << Updates.size()
            << std::endl;

        for (
            const TelegramBotAPI::Type::Update& Update :
            Updates
        )
        {
            std::cout
                << "UpdateID: "
                << Update.UpdateID
                << std::endl;

            if (Update.Message.has_value())
            {
                std::cout
                    << "Update contains Message"
                    << std::endl;
            }

            if (Update.InlineQuery.has_value())
            {
                std::cout
                    << "Update contains InlineQuery"
                    << std::endl;
            }

            if (Update.ChosenInlineResult.has_value())
            {
                std::cout
                    << "Update contains ChosenInlineResult"
                    << std::endl;
            }

            if (Update.CallbackQuery.has_value())
            {
                std::cout
                    << "Update contains CallbackQuery"
                    << std::endl;
            }
        }

        return 0;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "GetUpdatesTest failed: "
            << Exception.what()
            << std::endl;

        return 1;
    }
}