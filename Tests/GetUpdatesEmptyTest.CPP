#include <cassert>

#include "TelegramBotAPI/Methods/getUpdates.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TestHTTPClient.HPP"

int main() {
    TestHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Reason = "OK";
    HTTPClient.Response.ReasonPhrase = "OK";

    HTTPClient.Response.Body =
        R"({
            "ok": true,
            "result": []
        })";

    TelegramBotAPI::TelegramClient Client(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    TelegramBotAPI::Methods::getUpdates GetUpdates(Client);

    TelegramBotAPI::Methods::getUpdates::Parameters Parameters;

    Parameters.Offset = 1002;
    Parameters.Limit = 100;
    Parameters.Timeout = 30;

    std::vector<TelegramBotAPI::Type::Update> Updates =
        GetUpdates.Get(Parameters);

    assert(HTTPClient.RequestCount == 1);

    assert(Updates.empty());

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/getUpdates"
    );

    assert(HTTPClient.LastRequest.Method == "POST");

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("offset":1002)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("limit":100)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("timeout":30)"
        ) != std::string::npos
    );

    return 0;
}