#include <cassert>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TestHTTPClient.HPP"

int main() {
    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode = 200;
        HTTPClient.Response.Reason = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";

        HTTPClient.Response.Body =
            R"({
                "result": {}
            })";

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
                Exception.GetDescription() ==
                "Telegram API response is missing field: ok"
            );
        }

        assert(ExceptionThrown);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode = 200;
        HTTPClient.Response.Reason = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";

        HTTPClient.Response.Body =
            R"({
                "ok": "true",
                "result": {}
            })";

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
                Exception.GetDescription() ==
                "Telegram API field 'ok' is not a boolean"
            );
        }

        assert(ExceptionThrown);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode = 200;
        HTTPClient.Response.Reason = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";

        HTTPClient.Response.Body =
            R"({
                "ok": true
            })";

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
                Exception.GetDescription() ==
                "Telegram API response is missing field: result"
            );
        }

        assert(ExceptionThrown);
    }

    return 0;
}