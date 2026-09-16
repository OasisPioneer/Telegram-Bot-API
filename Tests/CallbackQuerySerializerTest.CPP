#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"

int main()
{
    TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(
            R"({
                "id": "123456789",
                "from": {
                    "id": 10001,
                    "first_name": "Test",
                    "username": "test_user"
                },
                "inline_message_id": "inline-message-id",
                "data": "button_data"
            })"
        );

    TelegramBotAPI::Type::CallbackQuery CallbackQuery =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::CallbackQuery
        >(JsonValue);

    assert(CallbackQuery.ID == "123456789");
    assert(CallbackQuery.From.ID == 10001);
    assert(CallbackQuery.From.FirstName == "Test");
    assert(CallbackQuery.From.UserName.has_value());
    assert(CallbackQuery.From.UserName.value() == "test_user");
    assert(CallbackQuery.InlineMessageID.has_value());
    assert(
        CallbackQuery.InlineMessageID.value() ==
        "inline-message-id"
    );
    assert(CallbackQuery.Data.has_value());
    assert(CallbackQuery.Data.value() == "button_data");
    assert(!CallbackQuery.Message.has_value());

    return 0;
}