#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/Methods/sendMessage.HPP"

int main()
{
    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    const char* ChatIDEnvironment =
        std::getenv("TELEGRAM_CHAT_ID");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_BOT_TOKEN is not set"
            << std::endl;

        return 1;
    }

    if (ChatIDEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_CHAT_ID is not set"
            << std::endl;

        return 1;
    }

    const std::string BotToken =
        BotTokenEnvironment;

    const std::string ChatIDString =
        ChatIDEnvironment;

    try
    {
        const long long ChatID =
            std::stoll(ChatIDString);

        const std::string Text =
            "TelegramBotAPI SendMessageTest";

        TelegramBotAPI::TelegramClient Client(
            BotToken
        );

        TelegramBotAPI::Methods::sendMessage SendMessage(
            Client
        );

        TelegramBotAPI::Type::Message Message =
            SendMessage.SendMessage(
                ChatID,
                Text
            );

        if (Message.MessageID == 0)
        {
            std::cerr
                << "SendMessageTest failed: invalid message ID"
                << std::endl;

            return 1;
        }

        if (Message.Chat.ID != ChatID)
        {
            std::cerr
                << "SendMessageTest failed: chat ID mismatch"
                << std::endl;

            return 1;
        }

        if (!Message.Text.has_value())
        {
            std::cerr
                << "SendMessageTest failed: message text missing"
                << std::endl;

            return 1;
        }

        if (Message.Text.value() != Text)
        {
            std::cerr
                << "SendMessageTest failed: message text mismatch"
                << std::endl;

            return 1;
        }

        std::cout
            << "SendMessageTest passed"
            << std::endl;

        std::cout
            << "MessageID: "
            << Message.MessageID
            << std::endl;

        std::cout
            << "ChatID: "
            << Message.Chat.ID
            << std::endl;

        std::cout
            << "Text: "
            << Message.Text.value()
            << std::endl;

        return 0;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "SendMessageTest failed: "
            << Exception.what()
            << std::endl;

        return 1;
    }
}