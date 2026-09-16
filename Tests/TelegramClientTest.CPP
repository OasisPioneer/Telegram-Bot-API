#include <cstdlib>
#include <iostream>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Network/HTTPException.HPP"

int main()
{
    std::cout << "TelegramClientTest started"
              << std::endl;

    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_BOT_TOKEN is not set"
            << std::endl;

        return 1;
    }

    try
    {
        TelegramBotAPI::TelegramClient Client(
            BotTokenEnvironment
        );

        TelegramBotAPI::Type::User User =
            Client.GetMe();

        std::cout
            << "ID: "
            << User.ID
            << std::endl;

        std::cout
            << "FirstName: "
            << User.FirstName
            << std::endl;

        if (User.LastName.has_value())
        {
            std::cout
                << "LastName: "
                << User.LastName.value()
                << std::endl;
        }
        else
        {
            std::cout
                << "LastName: <null>"
                << std::endl;
        }

        if (User.UserName.has_value())
        {
            std::cout
                << "UserName: "
                << User.UserName.value()
                << std::endl;
        }
        else
        {
            std::cout
                << "UserName: <null>"
                << std::endl;
        }
    }
    catch (const TelegramBotAPI::TelegramAPIException& Exception)
    {
        std::cerr
            << "Telegram API error"
            << std::endl;

        std::cerr
            << "ErrorCode: "
            << Exception.GetErrorCode()
            << std::endl;

        std::cerr
            << "Description: "
            << Exception.GetDescription()
            << std::endl;

        return 1;
    }
    catch (const TelegramBotAPI::Network::HTTPException& Exception)
    {
        std::cerr
            << "HTTP error"
            << std::endl;

        std::cerr
            << "ErrorType: "
            << static_cast<int>(
                Exception.GetErrorType()
            )
            << std::endl;

        std::cerr
            << "Description: "
            << Exception.what()
            << std::endl;

        return 1;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "Unexpected error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout << "TelegramClientTest finished"
              << std::endl;

    return 0;
}