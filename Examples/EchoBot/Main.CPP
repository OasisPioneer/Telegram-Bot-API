#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"

int main() {
    const char *TokenEnvironment = std::getenv("TELEGRAM_BOT_TOKEN");

    if (TokenEnvironment == nullptr) {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set\n";

        return 1;
    }

    const std::string BotToken(TokenEnvironment);

    if (BotToken.empty()) {
        std::cerr << "TELEGRAM_BOT_TOKEN is empty\n";

        return 1;
    }

    TelegramBotAPI::TelegramBotAPI Bot(BotToken);

    Bot.OnMessage([&](const TelegramBotAPI::Type::Message &Message) {
        if (!Message.Text.has_value()) {
            return;
        }

        std::cout << "Received: " << Message.Text.value() << '\n';

        Bot.SendMessage(Message.Chat.ID, Message.Text.value());
    });

    std::cout << "EchoBot started\n";

    Bot.Run();

    return 0;
}