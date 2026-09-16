#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"

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

        TelegramBotAPI::Methods::getMe GetMe(
            Client
        );

        TelegramBotAPI::Type::User User =
            GetMe.GetMe();

        if (User.ID == 0)
        {
            std::cerr
                << "GetMeTest failed: invalid user ID"
                << std::endl;

            return 1;
        }

        if (User.FirstName.empty())
        {
            std::cerr
                << "GetMeTest failed: empty first name"
                << std::endl;

            return 1;
        }

        std::cout
            << "GetMeTest passed"
            << std::endl;

        std::cout
            << "UserID: "
            << User.ID
            << std::endl;

        std::cout
            << "FirstName: "
            << User.FirstName
            << std::endl;

        if (User.UserName.has_value())
        {
            std::cout
                << "Username: "
                << User.UserName.value()
                << std::endl;
        }

        return 0;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "GetMeTest failed: "
            << Exception.what()
            << std::endl;

        return 1;
    }
}