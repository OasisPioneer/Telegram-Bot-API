#include <cassert>
#include <iostream>
#include <optional>
#include <string>

#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"

class MockHTTPClient final
    : public TelegramBotAPI::Network::IHTTPClient
{
public:
    TelegramBotAPI::Network::HTTPResponse Response{};

    TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
        const TelegramBotAPI::Network::HTTPRequest &
    ) override {
        return Response;
    }
};

static TelegramBotAPI::Type::User CallGetMe(
    MockHTTPClient &HTTPClient
) {
    using namespace TelegramBotAPI;
    using namespace TelegramBotAPI::Methods;

    TelegramClient Client(
        "123456:TEST_TOKEN",
        "https://api.telegram.org",
        HTTPClient
    );

    getMe Method(Client);

    return Method.GetMe({});
}

static void TestTelegramError() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Body = R"json(
{
    "ok": false,
    "error_code": 400,
    "description": "Bad Request: test error"
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 400);
        assert(Exception.GetDescription() == "Bad Request: test error");
        assert(!Exception.GetParameters().has_value());
    }
}

static void TestTelegramErrorWithRetryAfter() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 429;
    HTTPClient.Response.Body = R"json(
{
    "ok": false,
    "error_code": 429,
    "description": "Too Many Requests",
    "parameters": {
        "retry_after": 5
    }
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 429);
        assert(Exception.GetDescription() == "Too Many Requests");
        assert(Exception.GetParameters().has_value());

        const auto &Parameters = Exception.GetParameters().value();

        assert(Parameters.RetryAfter.has_value());
        assert(Parameters.RetryAfter.value() == 5);
        assert(!Parameters.MigrateToChatID.has_value());
    }
}

static void TestTelegramErrorWithMigration() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 400;
    HTTPClient.Response.Body = R"json(
{
    "ok": false,
    "error_code": 400,
    "description": "Bad Request: chat migrated",
    "parameters": {
        "migrate_to_chat_id": -1001234567890
    }
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 400);
        assert(Exception.GetDescription() == "Bad Request: chat migrated");
        assert(Exception.GetParameters().has_value());

        const auto &Parameters = Exception.GetParameters().value();

        assert(!Parameters.RetryAfter.has_value());
        assert(Parameters.MigrateToChatID.has_value());
        assert(
            Parameters.MigrateToChatID.value() == -1001234567890LL
        );
    }
}

static void TestHTTPError() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 500;
    HTTPClient.Response.Body = "not json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 500);
        assert(
            Exception.GetDescription() ==
            "Telegram API returned HTTP status 500"
        );
    }
}

static void TestMissingOk() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Body = R"json(
{
    "result": {}
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 0);
        assert(
            Exception.GetDescription() ==
            "Telegram API response is missing field: ok"
        );
    }
}

static void TestInvalidOkType() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Body = R"json(
{
    "ok": "true"
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(
            Exception.GetDescription() ==
            "Telegram API field 'ok' is not a boolean"
        );
    }
}

static void TestMissingResult() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Body = R"json(
{
    "ok": true
}
)json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(
            Exception.GetDescription() ==
            "Telegram API response is missing field: result"
        );
    }
}

static void TestInvalidJSON() {
    MockHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Body = "not json";

    try {
        (void)CallGetMe(HTTPClient);
        assert(false);
    } catch (const TelegramBotAPI::TelegramAPIException &Exception) {
        assert(Exception.GetErrorCode() == 0);
    }
}

int main() {
    TestTelegramError();
    TestTelegramErrorWithRetryAfter();
    TestTelegramErrorWithMigration();
    TestHTTPError();
    TestMissingOk();
    TestInvalidOkType();
    TestMissingResult();
    TestInvalidJSON();

    std::cout << "TelegramClient error test: PASS\n";

    return 0;
}
