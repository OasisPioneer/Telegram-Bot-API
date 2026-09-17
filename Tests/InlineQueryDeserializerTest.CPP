#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "id": "inline-123",
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "query": "hello",
            "offset": "0",
            "chat_type": "private",
            "location": {
                "latitude": 34.0522,
                "longitude": -118.2437
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::InlineQuery Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::InlineQuery
            >(JsonValue);

        assert(Result.ID == "inline-123");

        assert(Result.From.ID == 456);
        assert(Result.From.FirstName == "Test");

        assert(Result.From.UserName.has_value());
        assert(Result.From.UserName.value() == "testuser");

        assert(Result.Query == "hello");
        assert(Result.Offset == "0");

        assert(Result.ChatType.has_value());
        assert(Result.ChatType.value() == "private");

        assert(Result.Location.has_value());
        assert(Result.Location->Latitude == 34.0522);
        assert(Result.Location->Longitude == -118.2437);
    }

    {
        const std::string JSONText = R"({
            "id": "inline-456",
            "from": {
                "id": 789,
                "first_name": "Test"
            },
            "query": "telegram",
            "offset": "10"
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::InlineQuery Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::InlineQuery
            >(JsonValue);

        assert(Result.ID == "inline-456");
        assert(Result.From.ID == 789);
        assert(Result.From.FirstName == "Test");
        assert(Result.Query == "telegram");
        assert(Result.Offset == "10");

        assert(!Result.ChatType.has_value());
        assert(!Result.Location.has_value());
    }

    return 0;
}