#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPException.HPP"

int main()
{
    std::cout
        << "HTTPPostTest started"
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
        TelegramBotAPI::Network::HTTPClient Client;

        TelegramBotAPI::Network::HTTPRequest Request;

        Request.Method = "POST";

        Request.Target =
            "/bot" +
            std::string(BotTokenEnvironment) +
            "/getMe";

        Request.Host =
            "api.telegram.org";

        Request.Headers.push_back(
            TelegramBotAPI::Network::HTTPHeader{
                "Content-Type",
                "application/json"
            }
        );

        Request.Headers.push_back(
            TelegramBotAPI::Network::HTTPHeader{
                "Accept",
                "application/json"
            }
        );

        Request.Body = "{}";

        TelegramBotAPI::Network::HTTPResponse Response =
            Client.PerformHTTPS(Request);

        std::cout
            << "Status Code: "
            << Response.StatusCode
            << std::endl;

        std::cout
            << "Reason: "
            << Response.ReasonPhrase
            << std::endl;

        std::cout
            << "Body:"
            << std::endl;

        std::cout
            << Response.Body
            << std::endl;
    }
    catch (
        const TelegramBotAPI::Network::HTTPException&
        Exception
    )
    {
        std::cerr
            << "HTTP error: "
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

    std::cout
        << "HTTPPostTest finished"
        << std::endl;

    return 0;
}