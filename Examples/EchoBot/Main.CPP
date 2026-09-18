#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramBotAPI.HPP"

int main() {
    const char *BotTokenEnvironment = std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr) {
        std::cerr << "TELEGRAM_BOT_TOKEN is not set\n";
        return 1;
    }

    TelegramBotAPI::TelegramBotAPI Bot(BotTokenEnvironment);

    Bot.OnMessage([&Bot](const TelegramBotAPI::Type::Message &Message) {
        if (Message.Photo.has_value() && !Message.Photo->empty()) {

            const TelegramBotAPI::Type::PhotoSize &Photo =
                Message.Photo->back();

            std::cout << "Received photo: " << Photo.FileID << '\n';

            Bot.SendPhoto(
                Message.Chat.ID,
                TelegramBotAPI::Type::InputFile::FromFileID(Photo.FileID));

            return;
        }

        if (Message.Text.has_value()) {
            std::cout << "Received: " << Message.Text.value() << '\n';

            Bot.SendMessage(Message.Chat.ID, Message.Text.value());

            return;
        }

        std::cout << "Received unsupported message type" << '\n';
    });

    std::cout << "EchoBot started\n";

    Bot.Run();

    return 0;
}