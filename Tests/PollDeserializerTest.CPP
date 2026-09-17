#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "id": "poll-123",
            "question": "Which option do you prefer?",
            "question_entities": [],
            "options": [
                {
                    "persistent_id": "option-1",
                    "text": "First",
                    "text_entities": [],
                    "voter_count": 10
                },
                {
                    "persistent_id": "option-2",
                    "text": "Second",
                    "text_entities": [],
                    "voter_count": 20
                }
            ],
            "total_voter_count": 30,
            "is_closed": false,
            "is_anonymous": true,
            "type": "regular",
            "allows_multiple_answers": true,
            "allows_revoting": true,
            "members_only": false,
            "country_codes": [
                "US",
                "CA"
            ],
            "correct_option_ids": [
                0
            ],
            "explanation": "The first option is correct.",
            "explanation_entities": [],
            "open_period": 300,
            "close_date": 1750000300,
            "description": "Test poll description",
            "description_entities": []
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Poll Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Poll
            >(JsonValue);

        assert(Result.ID == "poll-123");

        assert(
            Result.Question ==
            "Which option do you prefer?"
        );

        assert(Result.QuestionEntities.empty());

        assert(Result.Options.size() == 2);

        assert(
            Result.Options[0].PersistentID ==
            "option-1"
        );

        assert(
            Result.Options[0].Text ==
            "First"
        );

        assert(
            Result.Options[0].VoterCount ==
            10
        );

        assert(
            Result.Options[1].PersistentID ==
            "option-2"
        );

        assert(
            Result.Options[1].Text ==
            "Second"
        );

        assert(
            Result.Options[1].VoterCount ==
            20
        );

        assert(Result.TotalVoterCount == 30);

        assert(!Result.IsClosed);

        assert(Result.IsAnonymous);

        assert(Result.Type == "regular");

        assert(Result.AllowsMultipleAnswers);

        assert(Result.AllowsRevoting);

        assert(!Result.MembersOnly);

        assert(Result.CountryCodes.has_value());

        assert(Result.CountryCodes->size() == 2);

        assert(
            Result.CountryCodes->at(0) ==
            "US"
        );

        assert(
            Result.CountryCodes->at(1) ==
            "CA"
        );

        assert(Result.CorrectOptionIDS.has_value());

        assert(Result.CorrectOptionIDS->size() == 1);

        assert(
            Result.CorrectOptionIDS->at(0) ==
            0
        );

        assert(Result.Explanation.has_value());

        assert(
            Result.Explanation.value() ==
            "The first option is correct."
        );

        assert(Result.ExplanationEntities.empty());

        assert(Result.OpenPeriod.has_value());

        assert(
            Result.OpenPeriod.value() ==
            300
        );

        assert(Result.CloseDate.has_value());

        assert(
            Result.CloseDate.value() ==
            1750000300
        );

        assert(Result.Description.has_value());

        assert(
            Result.Description.value() ==
            "Test poll description"
        );

        assert(Result.DescriptionEntities.empty());
    }

    {
        const std::string JSONText = R"({
            "id": "poll-456",
            "question": "Simple poll",
            "options": [
                {
                    "persistent_id": "option-a",
                    "text": "Yes",
                    "voter_count": 0
                }
            ],
            "total_voter_count": 0,
            "is_closed": true,
            "is_anonymous": false,
            "type": "quiz",
            "allows_multiple_answers": false,
            "allows_revoting": false,
            "members_only": true
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Poll Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Poll
            >(JsonValue);

        assert(Result.ID == "poll-456");

        assert(Result.Question == "Simple poll");

        assert(Result.QuestionEntities.empty());

        assert(Result.Options.size() == 1);

        assert(
            Result.Options[0].PersistentID ==
            "option-a"
        );

        assert(
            Result.Options[0].Text ==
            "Yes"
        );

        assert(Result.Options[0].VoterCount == 0);

        assert(Result.TotalVoterCount == 0);

        assert(Result.IsClosed);

        assert(!Result.IsAnonymous);

        assert(Result.Type == "quiz");

        assert(!Result.AllowsMultipleAnswers);

        assert(!Result.AllowsRevoting);

        assert(Result.MembersOnly);

        assert(!Result.CountryCodes.has_value());

        assert(!Result.CorrectOptionIDS.has_value());

        assert(!Result.Explanation.has_value());

        assert(Result.ExplanationEntities.empty());

        assert(!Result.OpenPeriod.has_value());

        assert(!Result.CloseDate.has_value());

        assert(!Result.Description.has_value());

        assert(Result.DescriptionEntities.empty());
    }

    return 0;
}