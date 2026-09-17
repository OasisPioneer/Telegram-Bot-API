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
                "ok": false,
                "error_code": 400,
                "description": "Bad Request: chat not found"
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

            assert(Exception.GetErrorCode() == 400);

            assert(
                Exception.GetDescription() ==
                "Bad Request: chat not found"
            );

            assert(
                std::string(Exception.what()) ==
                "Bad Request: chat not found"
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
                "ok": false,
                "error_code": 400
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

            assert(Exception.GetErrorCode() == 400);

            assert(
                Exception.GetDescription() ==
                "Telegram API request failed"
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
                "ok": false,
                "description": "Something went wrong"
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
                "Something went wrong"
            );
        }

        assert(ExceptionThrown);
    }

    return 0;
}