#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 10000,
        "message": {
            "message_id": 123,
            "from": {
                "id": 456,
                "first_name": "Test"
            },
            "date": 1460000000,
            "chat": {
                "id": 789,
                "type": "private"
            },
            "text": "Hello"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 10000);
    assert(Result.Message.has_value());
    assert(Result.Message->MessageID == 123);
    assert(Result.Message->From.has_value());
    assert(Result.Message->From->ID == 456);
    assert(Result.Message->From->FirstName == "Test");
    assert(Result.Message->Chat.ID == 789);
    assert(Result.Message->Chat.Type == "private");
    assert(Result.Message->Text.has_value());
    assert(Result.Message->Text.value() == "Hello");

    assert(!Result.InlineQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());
    assert(!Result.CallbackQuery.has_value());

    return 0;
}