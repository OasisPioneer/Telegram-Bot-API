#include <iostream>

#include "TelegramBotAPI/Types/Message.HPP"

int main()
{
    std::cout
        << "MessageCompileTest started"
        << std::endl;

    TelegramBotAPI::Type::Message Message;

    Message.MessageID = 123;

    Message.Date = 1700000000;

    Message.Chat.ID = 456;
    Message.Chat.Type = "private";

    TelegramBotAPI::Type::User User;

    User.ID = 789;
    User.FirstName = "Test";

    Message.From = User;

    Message.Text = "Hello Telegram";

    std::cout
        << "MessageID: "
        << Message.MessageID
        << std::endl;

    std::cout
        << "Date: "
        << Message.Date
        << std::endl;

    std::cout
        << "ChatID: "
        << Message.Chat.ID
        << std::endl;

    if (Message.From.has_value())
    {
        std::cout
            << "From: "
            << Message.From->FirstName
            << std::endl;
    }

    if (Message.Text.has_value())
    {
        std::cout
            << "Text: "
            << Message.Text.value()
            << std::endl;
    }

    std::cout
        << "MessageCompileTest finished"
        << std::endl;

    return 0;
}