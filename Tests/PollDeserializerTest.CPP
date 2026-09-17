#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"

int main() {
    {
        const std::string JSONText = R"({
            "id": "poll-123",
            "question": "What is your favorite option?",
            "question_entities": [],
            "options": [
                {
                    "persistent_id": "option-a",
                    "text": "First option",
                    "text_entities": [],
                    "media": {
                        "link": {
                            "url": "https://example.com/option"
                        }
                    },
                    "voter_count": 42
                },
                {
                    "persistent_id": "option-b",
                    "text": "Second option",
                    "text_entities": [],
                    "voter_count": 10
                }
            ],
            "total_voter_count": 52,
            "is_closed": false,
            "is_anonymous": true,
            "type": "quiz",
            "allows_multiple_answers": false,
            "allows_revoting": true,
            "members_only": false,
            "country_codes": [
                "US",
                "CN"
            ],
            "correct_option_ids": [
                0
            ],
            "explanation": "The first option is correct.",
            "explanation_entities": [],
            "explanation_media": {
                "link": {
                    "url": "https://example.com/explanation"
                }
            },
            "open_period": 300,
            "close_date": 1750000300,
            "description": "Poll description",
            "description_entities": [],
            "media": {
                "link": {
                    "url": "https://example.com/description"
                }
            }
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
            "What is your favorite option?"
        );

        assert(Result.QuestionEntities.empty());

        assert(Result.Options.size() == 2);

        assert(
            Result.Options[0].PersistentID ==
            "option-a"
        );

        assert(
            Result.Options[0].Text ==
            "First option"
        );

        assert(Result.Options[0].Media.has_value());

        assert(Result.Options[0].Media->Link.has_value());

        assert(
            Result.Options[0].Media->Link->URL ==
            "https://example.com/option"
        );

        assert(
            Result.Options[0].VoterCount ==
            42
        );

        assert(
            Result.Options[1].PersistentID ==
            "option-b"
        );

        assert(
            Result.Options[1].Text ==
            "Second option"
        );

        assert(!Result.Options[1].Media.has_value());

        assert(
            Result.Options[1].VoterCount ==
            10
        );

        assert(Result.TotalVoterCount == 52);

        assert(!Result.IsClosed);

        assert(Result.IsAnonymous);

        assert(Result.Type == "quiz");

        assert(!Result.AllowsMultipleAnswers);

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
            "CN"
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

        assert(Result.ExplanationMedia.has_value());

        assert(Result.ExplanationMedia->Link.has_value());

        assert(
            Result.ExplanationMedia->Link->URL ==
            "https://example.com/explanation"
        );

        assert(Result.OpenPeriod.has_value());

        assert(Result.OpenPeriod.value() == 300);

        assert(Result.CloseDate.has_value());

        assert(Result.CloseDate.value() == 1750000300);

        assert(Result.Description.has_value());

        assert(
            Result.Description.value() ==
            "Poll description"
        );

        assert(Result.DescriptionEntities.empty());

        assert(Result.Media.has_value());

        assert(Result.Media->Link.has_value());

        assert(
            Result.Media->Link->URL ==
            "https://example.com/description"
        );
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

        assert(!Result.Options[0].Media.has_value());

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

        assert(!Result.ExplanationMedia.has_value());

        assert(!Result.OpenPeriod.has_value());

        assert(!Result.CloseDate.has_value());

        assert(!Result.Description.has_value());

        assert(Result.DescriptionEntities.empty());

        assert(!Result.Media.has_value());
    }

    return 0;
}