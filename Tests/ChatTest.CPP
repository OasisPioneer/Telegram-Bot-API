#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"

int main()
{
    std::cout << "ChatTest started" << std::endl;

    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    const char* ChatIDEnvironment =
        std::getenv("TELEGRAM_CHAT_ID");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_BOT_TOKEN is not set"
            << std::endl;

        return 1;
    }

    if (ChatIDEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_CHAT_ID is not set"
            << std::endl;

        return 1;
    }

    const std::string BotToken =
        BotTokenEnvironment;

    const long long ChatID =
        std::stoll(
            ChatIDEnvironment
        );

    try
    {
        TelegramBotAPI::TelegramClient Client(
            BotToken
        );

        TelegramBotAPI::Type::Chat Chat =
            Client.GetChat(
                ChatID
            );

        std::cout
            << "ID: "
            << Chat.ID
            << std::endl;

        std::cout
            << "Type: "
            << Chat.Type
            << std::endl;

        if (Chat.Title.has_value())
        {
            std::cout
                << "Title: "
                << Chat.Title.value()
                << std::endl;
        }

        if (Chat.Username.has_value())
        {
            std::cout
                << "Username: "
                << Chat.Username.value()
                << std::endl;
        }

        if (Chat.FirstName.has_value())
        {
            std::cout
                << "FirstName: "
                << Chat.FirstName.value()
                << std::endl;
        }

        if (Chat.LastName.has_value())
        {
            std::cout
                << "LastName: "
                << Chat.LastName.value()
                << std::endl;
        }
    }
    catch (const TelegramBotAPI::TelegramAPIException& Exception)
    {
        std::cerr
            << "Telegram API error ["
            << Exception.GetErrorCode()
            << "]: "
            << Exception.GetDescription()
            << std::endl;

        return 1;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "Error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout
        << "ChatTest finished"
        << std::endl;

    return 0;
}