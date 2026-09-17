#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 20002,
        "chosen_inline_result": {
            "result_id": "result-123",
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "inline_message_id": "inline-message-123",
            "query": "hello"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 20002);

    assert(Result.ChosenInlineResult.has_value());

    assert(
        Result.ChosenInlineResult->ResultID ==
        "result-123"
    );

    assert(
        Result.ChosenInlineResult->From.ID ==
        456
    );

    assert(
        Result.ChosenInlineResult->From.FirstName ==
        "Test"
    );

    assert(
        Result.ChosenInlineResult->From.UserName.has_value()
    );

    assert(
        Result.ChosenInlineResult->From.UserName.value() ==
        "testuser"
    );

    assert(
        Result.ChosenInlineResult->InlineMessageID.has_value()
    );

    assert(
        Result.ChosenInlineResult->InlineMessageID.value() ==
        "inline-message-123"
    );

    assert(
        Result.ChosenInlineResult->Query ==
        "hello"
    );

    assert(!Result.Message.has_value());
    assert(!Result.InlineQuery.has_value());
    assert(!Result.CallbackQuery.has_value());

    return 0;
}