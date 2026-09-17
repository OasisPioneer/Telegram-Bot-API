#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/PollAnswer.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "poll_id": "poll-123",
            "user": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "option_ids": [
                0,
                2
            ],
            "option_persistent_ids": [
                "option-1",
                "option-3"
            ]
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollAnswer Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollAnswer
            >(JsonValue);

        assert(Result.PollID == "poll-123");

        assert(!Result.VoterChat.has_value());

        assert(Result.User.has_value());

        assert(Result.User->ID == 456);

        assert(
            Result.User->FirstName ==
            "Test"
        );

        assert(Result.User->UserName.has_value());

        assert(
            Result.User->UserName.value() ==
            "testuser"
        );

        assert(Result.OptionIDS.size() == 2);

        assert(Result.OptionIDS[0] == 0);

        assert(Result.OptionIDS[1] == 2);

        assert(Result.OptionPersistentIDS.size() == 2);

        assert(
            Result.OptionPersistentIDS[0] ==
            "option-1"
        );

        assert(
            Result.OptionPersistentIDS[1] ==
            "option-3"
        );
    }

    {
        const std::string JSONText = R"({
            "poll_id": "poll-456",
            "voter_chat": {
                "id": -1001234567890,
                "type": "supergroup",
                "title": "Anonymous Voters"
            },
            "option_ids": [
                1
            ],
            "option_persistent_ids": [
                "option-2"
            ]
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollAnswer Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollAnswer
            >(JsonValue);

        assert(Result.PollID == "poll-456");

        assert(Result.VoterChat.has_value());

        assert(
            Result.VoterChat->ID ==
            -1001234567890LL
        );

        assert(
            Result.VoterChat->Type ==
            "supergroup"
        );

        assert(Result.VoterChat->Title.has_value());

        assert(
            Result.VoterChat->Title.value() ==
            "Anonymous Voters"
        );

        assert(!Result.User.has_value());

        assert(Result.OptionIDS.size() == 1);

        assert(Result.OptionIDS[0] == 1);

        assert(Result.OptionPersistentIDS.size() == 1);

        assert(
            Result.OptionPersistentIDS[0] ==
            "option-2"
        );
    }

    {
        const std::string JSONText = R"({
            "poll_id": "poll-789",
            "user": {
                "id": 999,
                "first_name": "Test"
            },
            "option_ids": [],
            "option_persistent_ids": []
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollAnswer Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollAnswer
            >(JsonValue);

        assert(Result.PollID == "poll-789");

        assert(Result.User.has_value());

        assert(Result.User->ID == 999);

        assert(Result.OptionIDS.empty());

        assert(Result.OptionPersistentIDS.empty());
    }

    return 0;
}