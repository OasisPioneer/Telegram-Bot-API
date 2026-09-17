#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    const std::string JSONText = R"({
        "update_id": 30003,
        "edited_channel_post": {
            "message_id": 300,
            "date": 1750000002,
            "chat": {
                "id": -1009876543210,
                "type": "channel",
                "title": "Edited Channel"
            },
            "text": "edited channel post"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Update Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Update
        >(JsonValue);

    assert(Result.UpdateID == 30003);

    assert(Result.EditedChannelPost.has_value());

    assert(Result.EditedChannelPost->MessageID == 300);

    assert(Result.EditedChannelPost->Date == 1750000002);

    assert(
        Result.EditedChannelPost->Chat.ID ==
        -1009876543210LL
    );

    assert(
        Result.EditedChannelPost->Chat.Type ==
        "channel"
    );

    assert(Result.EditedChannelPost->Chat.Title.has_value());

    assert(
        Result.EditedChannelPost->Chat.Title.value() ==
        "Edited Channel"
    );

    assert(Result.EditedChannelPost->Text.has_value());

    assert(
        Result.EditedChannelPost->Text.value() ==
        "edited channel post"
    );

    assert(!Result.Message.has_value());
    assert(!Result.EditedMessage.has_value());
    assert(!Result.ChannelPost.has_value());
    assert(!Result.InlineQuery.has_value());
    assert(!Result.ChosenInlineResult.has_value());
    assert(!Result.CallbackQuery.has_value());

    return 0;
}