#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"

int main()
{
    std::cout
        << "MessageEntityDeserializerTest started"
        << std::endl;

    const std::string JsonText =
        R"({
            "type": "text_link",
            "offset": 10,
            "length": 20,
            "url": "https://example.com"
        })";

    try
    {
        boost::json::value JsonValue =
            boost::json::parse(
                JsonText
            );

        TelegramBotAPI::Type::MessageEntity
            MessageEntity =
                TelegramBotAPI::JSON::FromJson<
                    TelegramBotAPI::Type::MessageEntity
                >(
                    JsonValue
                );

        std::cout
            << "Type: "
            << MessageEntity.Type
            << std::endl;

        std::cout
            << "Offset: "
            << MessageEntity.Offset
            << std::endl;

        std::cout
            << "Length: "
            << MessageEntity.Length
            << std::endl;

        if (MessageEntity.URL.has_value())
        {
            std::cout
                << "URL: "
                << MessageEntity.URL.value()
                << std::endl;
        }

        const std::string SimpleJsonText =
            R"({
                "type": "bold",
                "offset": 0,
                "length": 10
            })";

        boost::json::value SimpleJsonValue =
            boost::json::parse(
                SimpleJsonText
            );

        TelegramBotAPI::Type::MessageEntity
            SimpleMessageEntity =
                TelegramBotAPI::JSON::FromJson<
                    TelegramBotAPI::Type::MessageEntity
                >(
                    SimpleJsonValue
                );

        std::cout
            << "Simple Type: "
            << SimpleMessageEntity.Type
            << std::endl;

        std::cout
            << "Simple Offset: "
            << SimpleMessageEntity.Offset
            << std::endl;

        std::cout
            << "Simple Length: "
            << SimpleMessageEntity.Length
            << std::endl;

        if (!SimpleMessageEntity.URL.has_value())
        {
            std::cout
                << "Simple URL: null"
                << std::endl;
        }
    }
    catch (
        const TelegramBotAPI::JSON::JsonException&
            Exception
    )
    {
        std::cerr
            << "JSON error: "
            << Exception.what()
            << std::endl;

        return 1;
    }
    catch (
        const std::exception&
            Exception
    )
    {
        std::cerr
            << "Unexpected error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout
        << "MessageEntityDeserializerTest finished"
        << std::endl;

    return 0;
}