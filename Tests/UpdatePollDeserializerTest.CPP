#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "update_id": 50001,
            "poll": {
                "id": "poll-update-123",
                "question": "Which language do you prefer?",
                "question_entities": [],
                "options": [
                    {
                        "persistent_id": "cpp",
                        "text": "C++",
                        "text_entities": [],
                        "voter_count": 15
                    },
                    {
                        "persistent_id": "python",
                        "text": "Python",
                        "text_entities": [],
                        "voter_count": 25
                    }
                ],
                "total_voter_count": 40,
                "is_closed": false,
                "is_anonymous": true,
                "type": "regular",
                "allows_multiple_answers": false,
                "allows_revoting": true,
                "members_only": false
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Update Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Update
            >(JsonValue);

        assert(Result.UpdateID == 50001);

        assert(Result.Poll.has_value());

        assert(
            Result.Poll->ID ==
            "poll-update-123"
        );

        assert(
            Result.Poll->Question ==
            "Which language do you prefer?"
        );

        assert(Result.Poll->Options.size() == 2);

        assert(
            Result.Poll->Options[0].PersistentID ==
            "cpp"
        );

        assert(
            Result.Poll->Options[0].Text ==
            "C++"
        );

        assert(
            Result.Poll->Options[0].VoterCount ==
            15
        );

        assert(
            Result.Poll->Options[1].PersistentID ==
            "python"
        );

        assert(
            Result.Poll->Options[1].Text ==
            "Python"
        );

        assert(
            Result.Poll->Options[1].VoterCount ==
            25
        );

        assert(
            Result.Poll->TotalVoterCount ==
            40
        );

        assert(!Result.Poll->IsClosed);

        assert(Result.Poll->IsAnonymous);

        assert(Result.Poll->Type == "regular");

        assert(!Result.Poll->AllowsMultipleAnswers);

        assert(Result.Poll->AllowsRevoting);

        assert(!Result.Poll->MembersOnly);

        assert(!Result.Poll->CountryCodes.has_value());

        assert(!Result.Poll->CorrectOptionIDS.has_value());

        assert(!Result.Poll->Explanation.has_value());

        assert(!Result.Poll->OpenPeriod.has_value());

        assert(!Result.Poll->CloseDate.has_value());

        assert(!Result.Poll->Description.has_value());

        assert(!Result.PollAnswer.has_value());

        assert(!Result.Message.has_value());

        assert(!Result.InlineQuery.has_value());

        assert(!Result.CallbackQuery.has_value());
    }

    {
        const std::string JSONText = R"({
            "update_id": 50002,
            "poll_answer": {
                "poll_id": "poll-answer-update-123",
                "user": {
                    "id": 123,
                    "first_name": "Voter",
                    "username": "voter"
                },
                "option_ids": [
                    1
                ],
                "option_persistent_ids": [
                    "option-2"
                ]
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Update Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Update
            >(JsonValue);

        assert(Result.UpdateID == 50002);

        assert(Result.PollAnswer.has_value());

        assert(
            Result.PollAnswer->PollID ==
            "poll-answer-update-123"
        );

        assert(Result.PollAnswer->User.has_value());

        assert(
            Result.PollAnswer->User->ID ==
            123
        );

        assert(
            Result.PollAnswer->User->FirstName ==
            "Voter"
        );

        assert(Result.PollAnswer->User->UserName.has_value());

        assert(
            Result.PollAnswer->User->UserName.value() ==
            "voter"
        );

        assert(Result.PollAnswer->OptionIDS.size() == 1);

        assert(
            Result.PollAnswer->OptionIDS[0] ==
            1
        );

        assert(
            Result.PollAnswer->OptionPersistentIDS.size() ==
            1
        );

        assert(
            Result.PollAnswer->OptionPersistentIDS[0] ==
            "option-2"
        );

        assert(!Result.Poll.has_value());

        assert(!Result.Message.has_value());

        assert(!Result.InlineQuery.has_value());

        assert(!Result.CallbackQuery.has_value());
    }

    return 0;
}