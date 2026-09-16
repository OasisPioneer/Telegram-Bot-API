#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"

int main()
{
    std::cout
        << "ChatDeserializerTest started"
        << std::endl;

    const std::string JsonText =
        R"({
            "id": 123456789,
            "type": "private",
            "username": "OasisPioneer",
            "first_name": "Oasis",
            "last_name": "Pioneer"
        })";

    try
    {
        boost::json::value JsonValue =
            boost::json::parse(JsonText);

        TelegramBotAPI::Type::Chat Chat =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Chat
            >(JsonValue);

        std::cout
            << "ID: "
            << Chat.ID
            << std::endl;

        std::cout
            << "Type: "
            << Chat.Type
            << std::endl;

        if (Chat.Username.has_value())
        {
            std::cout
                << "Username: "
                << Chat.Username.value()
                << std::endl;
        }

        if (Chat.FirstName.has_value())
        {
            std::cout
                << "FirstName: "
                << Chat.FirstName.value()
                << std::endl;
        }

        if (Chat.LastName.has_value())
        {
            std::cout
                << "LastName: "
                << Chat.LastName.value()
                << std::endl;
        }
    }
    catch (const TelegramBotAPI::JSON::JsonException& Exception)
    {
        std::cerr
            << "JSON error: "
            << Exception.what()
            << std::endl;

        return 1;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "Unexpected error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout
        << "ChatDeserializerTest finished"
        << std::endl;

    return 0;
}