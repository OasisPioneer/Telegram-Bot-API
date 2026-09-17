#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 30001,
        "edited_message": {
            "message_id": 100,
            "date": 1750000000,
            "chat": {
                "id": 123456,
                "type": "private"
            },
            "from": {
                "id": 456,
                "first_name": "Test",
                "username": "testuser"
            },
            "text": "edited message"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 30001);

    assert(Result.EditedMessage.has_value());

    assert(Result.EditedMessage->MessageID == 100);

    assert(Result.EditedMessage->Date == 1750000000);

    assert(Result.EditedMessage->Chat.ID == 123456);

    assert(Result.EditedMessage->Chat.Type == "private");

    assert(Result.EditedMessage->From.has_value());

    assert(Result.EditedMessage->From->ID == 456);

    assert(Result.EditedMessage->From->FirstName == "Test");

    assert(Result.EditedMessage->From->UserName.has_value());

    assert(
        Result.EditedMessage->From->UserName.value() ==
        "testuser"
    );

    assert(Result.EditedMessage->Text.has_value());

    assert(
        Result.EditedMessage->Text.value() ==
        "edited message"
    );

    assert(!Result.Message.has_value());
    assert(!Result.ChannelPost.has_value());
    assert(!Result.EditedChannelPost.has_value());
    assert(!Result.InlineQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());
    assert(!Result.CallbackQuery.has_value());

    return 0;
}