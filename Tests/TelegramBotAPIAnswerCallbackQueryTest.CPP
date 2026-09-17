#include <cassert>

#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TestHTTPClient.HPP"

int main() {
    TestHTTPClient HTTPClient;

    HTTPClient.Response.StatusCode = 200;
    HTTPClient.Response.Reason = "OK";
    HTTPClient.Response.ReasonPhrase = "OK";

    HTTPClient.Response.Body =
        R"({
            "ok": true,
            "result": true
        })";

    TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    const bool Result =
        Bot.AnswerCallbackQuery(
            "callback-123"
        );

    assert(Result);

    assert(HTTPClient.RequestCount == 1);

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/answerCallbackQuery"
    );

    assert(
        HTTPClient.LastRequest.Method ==
        "POST"
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("callback_query_id":"callback-123")"
        ) != std::string::npos
    );

    return 0;
}