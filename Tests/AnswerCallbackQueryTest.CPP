#include <cassert>

#include "TelegramBotAPI/Methods/answerCallbackQuery.HPP"
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
            "result": true
        })";

    TelegramBotAPI::TelegramClient Client(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    TelegramBotAPI::Methods::answerCallbackQuery
        AnswerCallbackQueryMethod(Client);

    TelegramBotAPI::Methods::answerCallbackQuery::Parameters
        Parameters;

    Parameters.CallbackQueryID = "callback-123";
    Parameters.Text = "Done";
    Parameters.ShowAlert = true;
    Parameters.URL = "https://example.com";
    Parameters.CacheTime = 60;

    const bool Result =
        AnswerCallbackQueryMethod.Answer(Parameters);

    assert(Result);

    assert(HTTPClient.RequestCount == 1);

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/answerCallbackQuery"
    );

    assert(HTTPClient.LastRequest.Method == "POST");

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("callback_query_id":"callback-123")"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("text":"Done")"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("show_alert":true)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("url":"https://example.com")"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("cache_time":60)"
        ) != std::string::npos
    );

    return 0;
}