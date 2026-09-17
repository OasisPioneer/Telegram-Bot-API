#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"

int main() {
    const char *BotTokenEnvironment = std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr) {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set." << std::endl;
        return 1;
    }

    TelegramBotAPI::TelegramBotAPI Bot(BotTokenEnvironment);

    Bot.OnMessage(
        [&Bot](const TelegramBotAPI::Type::Message &Message) {
            if (!Message.Text.has_value()) {
                return;
            }

            Bot.SendMessage(
                Message.Chat.ID,
                Message.Text.value()
            );
        }
    );

    Bot.Run();

    return 0;
}