#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"

int main()
{
    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    const char* ChatIDEnvironment =
        std::getenv("TELEGRAM_CHAT_ID");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set\n";
        return 1;
    }

    if (ChatIDEnvironment == nullptr)
    {
        std::cerr << "TELEGRAM_CHAT_ID is not set\n";
        return 1;
    }

    const std::string BotToken(BotTokenEnvironment);
    const long long ChatID = std::stoll(ChatIDEnvironment);

    try
    {
        TelegramBotAPI::TelegramClient Client(BotToken);

        TelegramBotAPI::Type::Message Message =
            Client.SendMessage(
                ChatID,
                "TelegramBotAPI SendMessageTest"
            );

        if (Message.MessageID <= 0)
        {
            std::cerr << "Invalid MessageID\n";
            return 1;
        }

        if (Message.Chat.ID != ChatID)
        {
            std::cerr << "Unexpected ChatID\n";
            return 1;
        }

        if (!Message.Text.has_value())
        {
            std::cerr << "Message text is missing\n";
            return 1;
        }

        if (Message.Text.value() !=
            "TelegramBotAPI SendMessageTest")
        {
            std::cerr << "Unexpected message text\n";
            return 1;
        }

        std::cout << "SendMessageTest passed\n";
        std::cout << "MessageID: "
                  << Message.MessageID
                  << '\n';

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