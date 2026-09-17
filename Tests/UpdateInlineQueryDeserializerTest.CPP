#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 20001,
        "inline_query": {
            "id": "inline-123",
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "query": "hello",
            "offset": "0",
            "chat_type": "private"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 20001);

    assert(Result.InlineQuery.has_value());

    assert(Result.InlineQuery->ID == "inline-123");

    assert(Result.InlineQuery->From.ID == 456);

    assert(Result.InlineQuery->From.UserName.has_value());
    assert(
        Result.InlineQuery->From.UserName.value() ==
        "testuser"
    );

    assert(Result.InlineQuery->Query == "hello");
    assert(Result.InlineQuery->Offset == "0");

    assert(Result.InlineQuery->ChatType.has_value());
    assert(
        Result.InlineQuery->ChatType.value() ==
        "private"
    );

    assert(!Result.InlineQuery->Location.has_value());

    assert(!Result.Message.has_value());
    assert(!Result.CallbackQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());

    return 0;
}