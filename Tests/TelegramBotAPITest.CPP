#include <cassert>
#include <cstdlib>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"

int main() {
    const char *BotTokenEnvironment = std::getenv("TELEGRAM_BOT_TOKEN");

    assert(BotTokenEnvironment != nullptr);

    const std::string BotToken = BotTokenEnvironment;

    TelegramBotAPI::TelegramBotAPI Bot(BotToken);

    Bot.Stop();

    TelegramBotAPI::TelegramBotAPI LocalBot(
        BotToken,
        "http://127.0.0.1:8081"
    );

    LocalBot.Stop();

    return 0;
}