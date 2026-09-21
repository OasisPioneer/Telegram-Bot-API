#include <cassert>
#include <iostream>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"

class MockHTTPClient final
    : public TelegramBotAPI::Network::IHTTPClient
{
public:
    TelegramBotAPI::Network::HTTPRequest LastRequest{};
    int RequestCount{0};

    TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
        const TelegramBotAPI::Network::HTTPRequest &Request
    ) override {
        LastRequest = Request;
        ++RequestCount;

        TelegramBotAPI::Network::HTTPResponse Response;
        Response.StatusCode = 200;
        Response.Reason = "OK";
        Response.ReasonPhrase = "OK";
        Response.Body = R"json(
{
    "ok": true,
    "result": {
        "id": 123456789,
        "is_bot": true,
        "first_name": "TestBot",
        "username": "test_bot"
    }
}
)json";

        return Response;
    }
};

int main() {
    using namespace TelegramBotAPI;
    using namespace TelegramBotAPI::Methods;

    MockHTTPClient HTTPClient;

    TelegramClient Client(
        "123456:TEST_TOKEN",
        "https://api.telegram.org",
        HTTPClient
    );

    getMe Method(Client);

    getMe::Parameters Parameters;

    const Type::User User = Method.GetMe(Parameters);

    assert(HTTPClient.RequestCount == 1);

    const auto &Request = HTTPClient.LastRequest;

    assert(Request.Scheme == "https");
    assert(Request.Host == "api.telegram.org");
    assert(Request.Port == "443");
    assert(Request.Target == "/bot123456:TEST_TOKEN/getMe");
    assert(Request.Method == "GET");
    assert(Request.Body.empty());

    assert(User.ID == 123456789);
    assert(User.IsBot);
    assert(User.FirstName == "TestBot");
    assert(User.UserName.has_value());
    assert(User.UserName.value() == "test_bot");

    std::cout << "getMe runtime test: PASS\n";

    return 0;
}
