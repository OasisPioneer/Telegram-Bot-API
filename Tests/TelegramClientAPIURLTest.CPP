#include <cassert>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"

int main()
{
    const std::string BotToken =
        "123456:TEST";

    TelegramBotAPI::TelegramClient DefaultClient(
        BotToken
    );

    TelegramBotAPI::TelegramClient HTTPSClient(
        BotToken,
        "https://api.telegram.org"
    );

    TelegramBotAPI::TelegramClient CustomHTTPSClient(
        BotToken,
        "https://example.com:8443"
    );

    TelegramBotAPI::TelegramClient HTTPClient(
        BotToken,
        "http://127.0.0.1:8081"
    );

    std::cout
        << "TelegramClientAPIURLTest passed"
        << std::endl;

    return 0;
}