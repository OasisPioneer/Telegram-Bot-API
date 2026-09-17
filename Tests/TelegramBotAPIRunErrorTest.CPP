#include <cassert>

#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TestHTTPClient.HPP"

int main() {
    TestHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode   = 500;
    HTTPClient.Response.Reason       = "Internal Server Error";
    HTTPClient.Response.ReasonPhrase = "Internal Server Error";
    HTTPClient.Response.Body =
        R"({
            "ok": false,
            "error_code": 500,
            "description": "Internal Server Error"
        })";

    TelegramBotAPI::TelegramBotAPI Bot("123456:TEST_TOKEN", HTTPClient);

    bool ExceptionThrown = false;

    try {
        Bot.Run();
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        ExceptionThrown = true;

        assert(Exception.GetErrorCode() == 500);

        assert(Exception.GetDescription() ==
               "Telegram API returned HTTP status 500");
    }

    assert(ExceptionThrown);

    assert(HTTPClient.RequestCount == 1);

    return 0;
}