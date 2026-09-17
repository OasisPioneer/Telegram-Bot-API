#include <cassert>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"
#include "TelegramBotAPIOffsetTestHTTPClient.HPP"

int main() {
    TelegramBotAPIOffsetTestHTTPClient HTTPClient;

    TelegramBotAPI::TelegramBotAPI Bot(
        "123456:TEST_TOKEN",
        HTTPClient
    );

    unsigned int HandlerCount = 0;

    long long FirstUpdateID = 0;
    long long SecondUpdateID = 0;

    Bot.OnMessage(
        [&](const TelegramBotAPI::Type::Message &Message) {
            ++HandlerCount;

            assert(Message.Text.has_value());

            if (HandlerCount == 1) {
                FirstUpdateID = 1001;

                assert(
                    Message.Text.value() == "First"
                );
            } else if (HandlerCount == 2) {
                SecondUpdateID = 1002;

                assert(
                    Message.Text.value() == "Second"
                );

                Bot.Stop();
            }
        }
    );

    Bot.Run();

    assert(HandlerCount == 2);

    assert(FirstUpdateID == 1001);
    assert(SecondUpdateID == 1002);

    assert(HTTPClient.RequestCount == 2);

    return 0;
}