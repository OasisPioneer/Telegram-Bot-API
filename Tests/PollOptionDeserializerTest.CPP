#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/PollOption.HPP"

int main() {
    {
        const std::string JSONText = R"({
            "persistent_id": "option-123",
            "text": "First option",
            "text_entities": [],
            "media": {
                "link": {
                    "url": "https://example.com/option"
                }
            },
            "voter_count": 42,
            "added_by_user": {
                "id": 123456,
                "first_name": "Test",
                "username": "testuser"
            },
            "added_by_chat": {
                "id": -1001234567890,
                "type": "supergroup",
                "title": "Test Group"
            },
            "addition_date": 1750000000
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollOption Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollOption
            >(JsonValue);

        assert(Result.PersistentID == "option-123");

        assert(Result.Text == "First option");

        assert(Result.TextEntities.empty());

        assert(Result.Media.has_value());
        assert(Result.Media->Link.has_value());

        assert(
            Result.Media->Link->URL ==
            "https://example.com/option"
        );

        assert(Result.VoterCount == 42);

        assert(Result.AddedByUser.has_value());

        assert(Result.AddedByUser->ID == 123456);

        assert(Result.AddedByUser->FirstName == "Test");

        assert(Result.AddedByUser->UserName.has_value());

        assert(
            Result.AddedByUser->UserName.value() ==
            "testuser"
        );

        assert(Result.AddedByChat.has_value());

        assert(Result.AddedByChat->ID == -1001234567890LL);

        assert(Result.AddedByChat->Type == "supergroup");

        assert(Result.AddedByChat->Title.has_value());

        assert(
            Result.AddedByChat->Title.value() ==
            "Test Group"
        );

        assert(Result.AdditionDate.has_value());

        assert(Result.AdditionDate.value() == 1750000000);
    }

    {
        const std::string JSONText = R"({
            "persistent_id": "option-456",
            "text": "Second option",
            "text_entities": [],
            "voter_count": 0
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollOption Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollOption
            >(JsonValue);

        assert(Result.PersistentID == "option-456");

        assert(Result.Text == "Second option");

        assert(Result.TextEntities.empty());

        assert(!Result.Media.has_value());

        assert(Result.VoterCount == 0);

        assert(!Result.AddedByUser.has_value());

        assert(!Result.AddedByChat.has_value());

        assert(!Result.AdditionDate.has_value());
    }

    return 0;
}