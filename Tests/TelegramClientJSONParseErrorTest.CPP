#include <cassert>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TestHTTPClient.HPP"

int main() {
    TestHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Reason = "OK";
    HTTPClient.Response.ReasonPhrase = "OK";

    HTTPClient.Response.Body =
        R"({"ok":true,"result":{)";

    TelegramBotAPI::TelegramClient Client(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    TelegramBotAPI::Methods::getMe GetMe(Client);

    bool ExceptionThrown = false;

    try {
        TelegramBotAPI::Methods::getMe::Parameters Parameters;

        GetMe.Get(Parameters);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        ExceptionThrown = true;

        assert(Exception.GetErrorCode() == 0);

        assert(
            Exception.GetDescription().find(
                "Failed to parse Telegram API JSON:"
            ) == 0
        );

        assert(
            std::string(Exception.what()).find(
                "Failed to parse Telegram API JSON:"
            ) == 0
        );
    }

    assert(ExceptionThrown);
    assert(HTTPClient.RequestCount == 1);

    return 0;
}