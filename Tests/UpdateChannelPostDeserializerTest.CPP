#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 30002,
        "channel_post": {
            "message_id": 200,
            "date": 1750000001,
            "chat": {
                "id": -1001234567890,
                "type": "channel",
                "title": "Test Channel"
            },
            "text": "channel post"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 30002);

    assert(Result.ChannelPost.has_value());

    assert(Result.ChannelPost->MessageID == 200);

    assert(Result.ChannelPost->Date == 1750000001);

    assert(Result.ChannelPost->Chat.ID == -1001234567890LL);

    assert(Result.ChannelPost->Chat.Type == "channel");

    assert(Result.ChannelPost->Chat.Title.has_value());

    assert(
        Result.ChannelPost->Chat.Title.value() ==
        "Test Channel"
    );

    assert(Result.ChannelPost->Text.has_value());

    assert(
        Result.ChannelPost->Text.value() ==
        "channel post"
    );

    assert(!Result.Message.has_value());
    assert(!Result.EditedMessage.has_value());
    assert(!Result.EditedChannelPost.has_value());
    assert(!Result.InlineQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());
    assert(!Result.CallbackQuery.has_value());

    return 0;
}