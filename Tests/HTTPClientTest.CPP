#include <iostream>

#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPException.HPP"

int main()
{
    std::cout << "HTTPClientTest started\n";

    TelegramBotAPI::Network::HTTPRequest Request;

    Request.Method = "GET";
    Request.Target = "/";
    Request.Host = "api.telegram.org";

    TelegramBotAPI::Network::HTTPClient Client;

    try
    {
        const TelegramBotAPI::Network::HTTPResponse Response =
            Client.PerformHTTPS(Request);

        std::cout
            << "Status Code: "
            << Response.StatusCode
            << '\n';

        std::cout
            << "Reason: "
            << Response.ReasonPhrase
            << '\n';

        std::cout
            << "Body:\n"
            << Response.Body
            << '\n';
    }
    catch (
    const TelegramBotAPI::Network::HTTPException& Exception)
    {
        std::cerr
            << "HTTPException: "
            << Exception.what()
            << '\n';

        std::cerr
            << "Error Type: "
            << static_cast<int>(
                Exception.GetErrorType()
            )
            << '\n';

        return 1;
    }

    std::cout << "HTTPClientTest finished\n";

    return 0;
}