#include <cassert>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ResponseParameters.HPP"
#include "TestHTTPClient.HPP"

int main() {
    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode   = 200;
        HTTPClient.Response.Reason       = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";
        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 429,
                "description": "Too Many Requests",
                "parameters": {
                    "retry_after": 5
                }
            })";

        TelegramBotAPI::TelegramClient Client("123456:TEST_TOKEN", HTTPClient);

        TelegramBotAPI::Methods::getMe GetMe(Client);

        bool ExceptionThrown = false;

        try {
            TelegramBotAPI::Methods::getMe::Parameters Parameters;

            GetMe.Get(Parameters);
        } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
            ExceptionThrown = true;

            assert(Exception.GetErrorCode() == 429);

            assert(Exception.GetDescription() == "Too Many Requests");

            assert(Exception.GetParameters().has_value());

            const TelegramBotAPI::Type::ResponseParameters &Parameters =
                Exception.GetParameters().value();

            assert(Parameters.RetryAfter.has_value());

            assert(Parameters.RetryAfter.value() == 5);

            assert(!Parameters.MigrateToChatID.has_value());
        }

        assert(ExceptionThrown);

        assert(HTTPClient.RequestCount == 1);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode   = 200;
        HTTPClient.Response.Reason       = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";
        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 400,
                "description": "Bad Request",
                "parameters": {
                    "migrate_to_chat_id": -1001234567890
                }
            })";

        TelegramBotAPI::TelegramClient Client("123456:TEST_TOKEN", HTTPClient);

        TelegramBotAPI::Methods::getMe GetMe(Client);

        bool ExceptionThrown = false;

        try {
            TelegramBotAPI::Methods::getMe::Parameters Parameters;

            GetMe.Get(Parameters);
        } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
            ExceptionThrown = true;

            assert(Exception.GetErrorCode() == 400);

            assert(Exception.GetDescription() == "Bad Request");

            assert(Exception.GetParameters().has_value());

            const TelegramBotAPI::Type::ResponseParameters &Parameters =
                Exception.GetParameters().value();

            assert(!Parameters.RetryAfter.has_value());

            assert(Parameters.MigrateToChatID.has_value());

            assert(Parameters.MigrateToChatID.value() == -1001234567890LL);
        }

        assert(ExceptionThrown);

        assert(HTTPClient.RequestCount == 1);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode   = 200;
        HTTPClient.Response.Reason       = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";
        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 400,
                "description": "Bad Request",
                "parameters": {
                    "retry_after": 10,
                    "migrate_to_chat_id": -1009876543210
                }
            })";

        TelegramBotAPI::TelegramClient Client("123456:TEST_TOKEN", HTTPClient);

        TelegramBotAPI::Methods::getMe GetMe(Client);

        bool ExceptionThrown = false;

        try {
            TelegramBotAPI::Methods::getMe::Parameters Parameters;

            GetMe.Get(Parameters);
        } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
            ExceptionThrown = true;

            assert(Exception.GetErrorCode() == 400);

            assert(Exception.GetDescription() == "Bad Request");

            assert(Exception.GetParameters().has_value());

            const TelegramBotAPI::Type::ResponseParameters &Parameters =
                Exception.GetParameters().value();

            assert(Parameters.RetryAfter.has_value());

            assert(Parameters.RetryAfter.value() == 10);

            assert(Parameters.MigrateToChatID.has_value());

            assert(Parameters.MigrateToChatID.value() == -1009876543210LL);
        }

        assert(ExceptionThrown);

        assert(HTTPClient.RequestCount == 1);
    }

    {
        TestHTTPClient HTTPClient;

        HTTPClient.Response.StatusCode   = 200;
        HTTPClient.Response.Reason       = "OK";
        HTTPClient.Response.ReasonPhrase = "OK";
        HTTPClient.Response.Body =
            R"({
                "ok": false,
                "error_code": 400,
                "description": "Bad Request"
            })";

        TelegramBotAPI::TelegramClient Client("123456:TEST_TOKEN", HTTPClient);

        TelegramBotAPI::Methods::getMe GetMe(Client);

        bool ExceptionThrown = false;

        try {
            TelegramBotAPI::Methods::getMe::Parameters Parameters;

            GetMe.Get(Parameters);
        } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
            ExceptionThrown = true;

            assert(Exception.GetErrorCode() == 400);

            assert(Exception.GetDescription() == "Bad Request");

            assert(!Exception.GetParameters().has_value());
        }

        assert(ExceptionThrown);

        assert(HTTPClient.RequestCount == 1);
    }

    return 0;
}