#include <cassert>
#include <stdexcept>

#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"

class StopTelegramBotAPITestException
    : public std::exception {
};

class TelegramBotAPIUpdateDispatchTestHTTPClient
    : public TelegramBotAPI::Network::IHTTPClient {
    public:
        unsigned int RequestCount{0};

        TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
            const TelegramBotAPI::Network::HTTPRequest &Request
        ) override {
            ++RequestCount;

            if (RequestCount == 1) {
                TelegramBotAPI::Network::HTTPResponse Response;

                Response.StatusCode = 200;
                Response.Reason = "OK";
                Response.ReasonPhrase = "OK";

                Response.Body =
                    R"({
                        "ok": true,
                        "result": [
                            {
                                "update_id": 2001,
                                "callback_query": {
                                    "id": "callback-123",
                                    "from": {
                                        "id": 123456789,
                                        "first_name": "Test"
                                    },
                                    "chat_instance": "chat-instance-123",
                                    "data": "test"
                                }
                            }
                        ]
                    })";

                return Response;
            }

            throw StopTelegramBotAPITestException();
        }
};

int main() {
    TelegramBotAPIUpdateDispatchTestHTTPClient HTTPClient;

    TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    bool MessageHandlerCalled = false;

    Bot.OnMessage(
        [&](const TelegramBotAPI::Type::Message &) {
            MessageHandlerCalled = true;
        }
    );

    try {
        Bot.Run();
    } catch (const StopTelegramBotAPITestException &) {
    }

    assert(HTTPClient.RequestCount == 2);

    assert(!MessageHandlerCalled);

    return 0;
}