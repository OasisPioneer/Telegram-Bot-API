#include <cassert>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TestHTTPClient.HPP"

int main() {
    TestHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Reason = "OK";
    HTTPClient.Response.ReasonPhrase = "OK";

    HTTPClient.Response.Body =
        R"({"ok":true,"result":{"id":123456789,"is_bot":true,"first_name":"TestBot","username":"TestBot"}})";

    TelegramBotAPI::TelegramClient Client(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    TelegramBotAPI::Methods::getMe GetMe(Client);

    TelegramBotAPI::Methods::getMe::Parameters Parameters;

    TelegramBotAPI::Type::User User =
        GetMe.Get(Parameters);

    assert(HTTPClient.RequestCount == 1);

    assert(HTTPClient.LastRequest.Scheme == "https");
    assert(HTTPClient.LastRequest.Host == "api.telegram.org");
    assert(HTTPClient.LastRequest.Port == "443");

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/getMe"
    );

    assert(HTTPClient.LastRequest.Method == "GET");

    assert(HTTPClient.LastRequest.Body.empty());

    assert(User.ID == 123456789);
    assert(User.FirstName == "TestBot");

    assert(!User.LastName.has_value());

    assert(User.UserName.has_value());
    assert(User.UserName.value() == "TestBot");

    return 0;
}