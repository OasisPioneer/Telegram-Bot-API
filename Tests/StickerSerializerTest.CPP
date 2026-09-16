#include <iostream>
#include <string>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"

int main()
{
    std::cout << "StickerSerializerTest started" << std::endl;

    TelegramBotAPI::Type::Sticker StickerObject;

    StickerObject.FileID = "CAACAgQAAxkBAAIB";
    StickerObject.Width = 512;
    StickerObject.Height = 512;

    TelegramBotAPI::Type::PhotoSize ThumbObject;
    ThumbObject.FileID = "AgACAgQAAxkBAAIB";
    ThumbObject.Width = 128;
    ThumbObject.Height = 128;
    ThumbObject.FileSize = 12345;

    StickerObject.Thumb = ThumbObject;

    StickerObject.FileSize = 456789;

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(StickerObject);

    std::cout << boost::json::serialize(JsonValue)
              << std::endl;

    TelegramBotAPI::Type::Sticker MinimalStickerObject;

    MinimalStickerObject.FileID = "CAACAgQAAxkBAAIC";
    MinimalStickerObject.Width = 256;
    MinimalStickerObject.Height = 256;
    MinimalStickerObject.FileSize = 98765;

    TelegramBotAPI::JSON::Value MinimalJsonValue =
        TelegramBotAPI::JSON::ToJson(MinimalStickerObject);

    std::cout << boost::json::serialize(MinimalJsonValue)
              << std::endl;

    std::cout << "StickerSerializerTest finished" << std::endl;

    return 0;
}