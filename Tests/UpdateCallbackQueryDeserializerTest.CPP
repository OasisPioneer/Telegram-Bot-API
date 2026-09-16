#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 20000,
        "callback_query": {
            "id": "callback-123",
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "message": {
                "message_id": 321,
                "from": {
                    "id": 456,
                    "first_name": "Test"
                },
                "date": 1460000000,
                "chat": {
                    "id": 789,
                    "type": "private"
                },
                "text": "Press button"
            },
            "data": "hello"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 20000);
    assert(Result.CallbackQuery.has_value());

    assert(Result.CallbackQuery->ID == "callback-123");
    assert(Result.CallbackQuery->From.ID == 456);
    assert(Result.CallbackQuery->From.UserName.has_value());
    assert(Result.CallbackQuery->From.UserName.value() == "testuser");

    assert(Result.CallbackQuery->Message.has_value());
    assert(Result.CallbackQuery->Message->MessageID == 321);

    assert(Result.CallbackQuery->Data.has_value());
    assert(Result.CallbackQuery->Data.value() == "hello");

    assert(!Result.Message.has_value());
    assert(!Result.InlineQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());

    return 0;
}