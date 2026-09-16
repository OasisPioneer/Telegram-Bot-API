#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"

int main()
{
    std::cout
        << "ChatSerializerTest started"
        << std::endl;

    TelegramBotAPI::Type::Chat Chat;

    Chat.ID = 123456789;
    Chat.Type = "private";
    Chat.Username = "OasisPioneer";
    Chat.FirstName = "Oasis";
    Chat.LastName = "Pioneer";

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(Chat);

    std::cout
        << boost::json::serialize(JsonValue)
        << std::endl;

    TelegramBotAPI::Type::Chat EmptyChat;

    EmptyChat.ID = 100;
    EmptyChat.Type = "group";

    TelegramBotAPI::JSON::Value EmptyJsonValue =
        TelegramBotAPI::JSON::ToJson(EmptyChat);

    std::cout
        << boost::json::serialize(EmptyJsonValue)
        << std::endl;

    std::cout
        << "ChatSerializerTest finished"
        << std::endl;

    return 0;
}