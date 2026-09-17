#include <cassert>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TestHTTPClient.HPP"

class StopTelegramBotAPICallbackQueryTestException
    : public std::exception {
};

class TelegramBotAPICallbackQueryTestHTTPClient
    : public TelegramBotAPI::Network::IHTTPClient {
    public:
        unsigned int RequestCount{0};

        TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
            const TelegramBotAPI::Network::HTTPRequest &
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
                                "update_id": 3001,
                                "callback_query": {
                                    "id": "callback-123",
                                    "from": {
                                        "id": 123456789,
                                        "first_name": "Test"
                                    },
                                    "chat_instance": "chat-instance-123",
                                    "data": "button-data"
                                }
                            }
                        ]
                    })";

                return Response;
            }

            throw StopTelegramBotAPICallbackQueryTestException();
        }
};

int main() {
    TelegramBotAPICallbackQueryTestHTTPClient HTTPClient;

    TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    bool CallbackQueryHandlerCalled = false;

    std::string CallbackQueryID;
    std::string CallbackQueryData;

    Bot.OnCallbackQuery(
        [&](const TelegramBotAPI::Type::CallbackQuery &CallbackQuery) {
            CallbackQueryHandlerCalled = true;

            CallbackQueryID = CallbackQuery.ID;

            if (CallbackQuery.Data.has_value()) {
                CallbackQueryData = CallbackQuery.Data.value();
            }
        }
    );

    try {
        Bot.Run();
    } catch (
        const StopTelegramBotAPICallbackQueryTestException &
    ) {
    }

    assert(HTTPClient.RequestCount == 2);

    assert(CallbackQueryHandlerCalled);

    assert(CallbackQueryID == "callback-123");

    assert(CallbackQueryData == "button-data");

    return 0;
}