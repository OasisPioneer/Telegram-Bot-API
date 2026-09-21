#include <cassert>
#include <iostream>
#include <stdexcept>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramBotAPI.HPP"

class MockHTTPClient final
    : public TelegramBotAPI::Network::IHTTPClient
{
public:
    int RequestCount{0};
    TelegramBotAPI::Network::HTTPRequest LastRequest{};

    TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
        const TelegramBotAPI::Network::HTTPRequest &Request
    ) override {
        LastRequest = Request;
        ++RequestCount;

        TelegramBotAPI::Network::HTTPResponse Response;
        Response.StatusCode = 200;
        Response.Reason = "OK";
        Response.ReasonPhrase = "OK";

        const long long UpdateID =
            RequestCount == 1 ? 100 : 101;

        Response.Body =
            "{\"ok\":true,\"result\":[{\"update_id\":"
            + std::to_string(UpdateID)
            + ",\"message\":{\"message_id\":1,\"date\":1,"
              "\"chat\":{\"id\":123,\"type\":\"private\"}}}]}";

        return Response;
    }
};

int main() {
    using namespace TelegramBotAPI;

    MockHTTPClient HTTPClient;
    ::TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        "https://api.telegram.org",
        HTTPClient
    );

    int MessageCount = 0;

    Bot.OnMessage([&](const Type::Message &) {
        ++MessageCount;

        if (MessageCount == 1) {
            throw std::runtime_error("simulated handler failure");
        }

        Bot.Stop();
    });

    Bot.Run();

    assert(MessageCount == 2);
    assert(HTTPClient.RequestCount == 2);

    const boost::json::value RequestBody =
        boost::json::parse(HTTPClient.LastRequest.Body);
    const auto &Object = RequestBody.as_object();

    assert(Object.at("offset").as_int64() == 101);
    assert(Object.at("limit").as_int64() == 100);
    assert(Object.at("timeout").as_int64() == 30);

    std::cout << "update handler exception isolation: PASS\n";
    std::cout << "update offset advancement: PASS\n";

    return 0;
}
