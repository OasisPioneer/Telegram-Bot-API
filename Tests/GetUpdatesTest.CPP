#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "TelegramBotAPI/TelegramClient.HPP"

int main()
{
    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set\n";
        return 1;
    }

    const std::string BotToken(BotTokenEnvironment);

    try
    {
        TelegramBotAPI::TelegramClient Client(BotToken);

        std::vector<TelegramBotAPI::Type::Update> Updates =
            Client.GetUpdates(
                std::nullopt,
                10,
                0
            );

        std::cout << "Received updates: "
                  << Updates.size()
                  << '\n';

        if (!Updates.empty())
        {
            for (const TelegramBotAPI::Type::Update& Update :
                 Updates)
            {
                std::cout << "UpdateID: "
                          << Update.UpdateID
                          << '\n';

                if (Update.Message.has_value())
                {
                    const TelegramBotAPI::Type::Message& Message =
                        Update.Message.value();

                    std::cout << "MessageID: "
                              << Message.MessageID
                              << '\n';

                    std::cout << "ChatID: "
                              << Message.Chat.ID
                              << '\n';

                    if (Message.Text.has_value())
                    {
                        std::cout << "Text: "
                                  << Message.Text.value()
                                  << '\n';
                    }
                }
            }
        }

        if (!Updates.empty())
        {
            const long long NextOffset =
                Updates.back().UpdateID + 1;

            std::vector<TelegramBotAPI::Type::Update> ConfirmedUpdates =
                Client.GetUpdates(
                    NextOffset,
                    10,
                    0
                );

            std::cout << "Updates after confirmation: "
                      << ConfirmedUpdates.size()
                      << '\n';
        }

        std::cout << "GetUpdatesTest passed\n";

        return 0;
    }
    catch (const TelegramBotAPI::TelegramAPIException& Exception)
    {
        std::cerr << "Telegram API error: "
                  << Exception.what()
                  << '\n';

        return 1;
    }
    catch (const std::exception& Exception)
    {
        std::cerr << "Test error: "
                  << Exception.what()
                  << '\n';

        return 1;
    }
}