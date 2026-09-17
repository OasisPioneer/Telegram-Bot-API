#include <cassert>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TestHTTPClient.HPP"

int main() {
    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode = 400;
        HTTPClient.Response.Reason = "Bad Request";
        HTTPClient.Response.ReasonPhrase = "Bad Request";

        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 400,
                "description": "Bad Request"
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
                "Telegram API returned HTTP status 400"
            );

            assert(
                std::string(Exception.what()) ==
                "Telegram API returned HTTP status 400"
            );
        }

        assert(ExceptionThrown);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode = 500;
        HTTPClient.Response.Reason = "Internal Server Error";
        HTTPClient.Response.ReasonPhrase = "Internal Server Error";

        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 500,
                "description": "Internal Server Error"
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

            assert(Exception.GetErrorCode() == 500);

            assert(
                Exception.GetDescription() ==
                "Telegram API returned HTTP status 500"
            );
        }

        assert(ExceptionThrown);
    }

    return 0;
}