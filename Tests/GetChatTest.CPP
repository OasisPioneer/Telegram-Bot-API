#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/Methods/getChat.HPP"

int main()
{
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

    const std::string ChatIDString =
        ChatIDEnvironment;

    try
    {
        const long long ChatID =
            std::stoll(ChatIDString);

        TelegramBotAPI::TelegramClient Client(
            BotToken
        );

        TelegramBotAPI::Methods::getChat GetChat(
            Client
        );

        TelegramBotAPI::Type::Chat Chat =
            GetChat.GetChat(
                ChatID
            );

        if (Chat.ID != ChatID)
        {
            std::cerr
                << "GetChatTest failed: Chat ID mismatch"
                << std::endl;

            return 1;
        }

        if (Chat.Type.empty())
        {
            std::cerr
                << "GetChatTest failed: empty chat type"
                << std::endl;

            return 1;
        }

        std::cout
            << "GetChatTest passed"
            << std::endl;

        std::cout
            << "ChatID: "
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

        if (Chat.UserName.has_value())
        {
            std::cout
                << "Username: "
                << Chat.UserName.value()
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

        return 0;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "GetChatTest failed: "
            << Exception.what()
            << std::endl;

        return 1;
    }
}