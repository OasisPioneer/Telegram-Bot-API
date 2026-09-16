#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"

int main()
{
    std::cout
        << "MessageEntitySerializerTest started"
        << std::endl;

    TelegramBotAPI::Type::MessageEntity
        MessageEntity;

    MessageEntity.Type =
        "text_link";

    MessageEntity.Offset =
        10;

    MessageEntity.Length =
        20;

    MessageEntity.URL =
        "https://example.com";

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(
            MessageEntity
        );

    std::cout
        << boost::json::serialize(
            JsonValue
        )
        << std::endl;

    TelegramBotAPI::Type::MessageEntity
        SimpleMessageEntity;

    SimpleMessageEntity.Type =
        "bold";

    SimpleMessageEntity.Offset =
        0;

    SimpleMessageEntity.Length =
        10;

    TelegramBotAPI::JSON::Value
        SimpleJsonValue =
            TelegramBotAPI::JSON::ToJson(
                SimpleMessageEntity
            );

    std::cout
        << boost::json::serialize(
            SimpleJsonValue
        )
        << std::endl;

    std::cout
        << "MessageEntitySerializerTest finished"
        << std::endl;

    return 0;
}