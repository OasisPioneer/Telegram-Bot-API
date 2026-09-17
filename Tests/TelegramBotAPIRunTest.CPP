#include <cassert>
#include <string>

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
            "result": [
                {
                    "update_id": 1001,
                    "message": {
                        "message_id": 2001,
                        "date": 1750000000,
                        "chat": {
                            "id": 987654321,
                            "type": "private"
                        },
                        "text": "Hello Bot"
                    }
                }
            ]
        })";

    TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    bool HandlerCalled = false;

    long long ReceivedMessageID = 0;
    long long ReceivedChatID = 0;
    std::string ReceivedText;

    Bot.OnMessage(
        [&](const TelegramBotAPI::Type::Message &Message) {
            HandlerCalled = true;

            ReceivedMessageID = Message.MessageID;
            ReceivedChatID = Message.Chat.ID;

            assert(Message.Text.has_value());

            ReceivedText = Message.Text.value();

            Bot.Stop();
        }
    );

    Bot.Run();

    assert(HandlerCalled);

    assert(ReceivedMessageID == 2001);
    assert(ReceivedChatID == 987654321);

    assert(
        ReceivedText ==
        "Hello Bot"
    );

    assert(HTTPClient.RequestCount == 1);

    assert(
        HTTPClient.LastRequest.Target ==
        "/bot123456:TEST_TOKEN/getUpdates"
    );

    assert(HTTPClient.LastRequest.Method == "POST");

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("offset":0)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("limit":100)"
        ) != std::string::npos
    );

    assert(
        HTTPClient.LastRequest.Body.find(
            R"("timeout":30)"
        ) != std::string::npos
    );

    return 0;
}