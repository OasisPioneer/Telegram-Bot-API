#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "result_id": "result-123",
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "location": {
                "latitude": 34.0522,
                "longitude": -118.2437
            },
            "inline_message_id": "inline-message-123",
            "query": "hello"
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::ChosenInlineResult Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::ChosenInlineResult
            >(JsonValue);

        assert(Result.ResultID == "result-123");

        assert(Result.From.ID == 456);
        assert(Result.From.FirstName == "Test");

        assert(Result.From.UserName.has_value());
        assert(Result.From.UserName.value() == "testuser");

        assert(Result.Location.has_value());
        assert(Result.Location->Latitude == 34.0522);
        assert(Result.Location->Longitude == -118.2437);

        assert(Result.InlineMessageID.has_value());
        assert(
            Result.InlineMessageID.value() ==
            "inline-message-123"
        );

        assert(Result.Query == "hello");
    }

    {
        const std::string JSONText = R"({
            "result_id": "result-456",
            "from": {
                "id": 789,
                "first_name": "Test"
            },
            "query": "telegram"
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::ChosenInlineResult Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::ChosenInlineResult
            >(JsonValue);

        assert(Result.ResultID == "result-456");
        assert(Result.From.ID == 789);
        assert(Result.From.FirstName == "Test");
        assert(Result.Query == "telegram");

        assert(!Result.Location.has_value());
        assert(!Result.InlineMessageID.has_value());
    }

    return 0;
}