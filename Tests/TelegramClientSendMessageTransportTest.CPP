#include <cassert>
#include <string>

#include "TelegramBotAPI/Methods/sendMessage.HPP"
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
            "result": {
                "message_id": 123,
                "date": 1750000000,
                "chat": {
                    "id": 987654321,
                    "type": "private"
                },
                "text": "Hello Telegram"
            }
        })";

    TelegramBotAPI::TelegramClient Client(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    TelegramBotAPI::Methods::sendMessage SendMessage(Client);

    TelegramBotAPI::Type::Message Message =
        SendMessage.SendMessage(
            987654321,
            "Hello Telegram"
        );

    assert(HTTPClient.RequestCount == 1);

    assert(HTTPClient.LastRequest.Scheme == "https");
    assert(HTTPClient.LastRequest.Host == "api.telegram.org");
    assert(HTTPClient.LastRequest.Port == "443");

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/sendMessage"
    );

    assert(HTTPClient.LastRequest.Method == "POST");

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("chat_id":987654321)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("text":"Hello Telegram")"
        ) != std::string::npos
    );

    assert(Message.MessageID == 123);

    assert(Message.Date == 1750000000);

    assert(Message.Chat.ID == 987654321);

    assert(Message.Text.has_value());
    assert(Message.Text.value() == "Hello Telegram");

    return 0;
}