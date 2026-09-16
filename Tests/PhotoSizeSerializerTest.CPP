#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"

int main()
{
    std::cout
        << "PhotoSizeSerializerTest started"
        << std::endl;

    TelegramBotAPI::Type::PhotoSize PhotoSize;

    PhotoSize.FileID =
        "AgACAgQAAxkBAAIB";

    PhotoSize.Width =
        1280;

    PhotoSize.Height =
        720;

    PhotoSize.FileSize =
        123456;

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(
            PhotoSize
        );

    std::cout
        << boost::json::serialize(
            JsonValue
        )
        << std::endl;

    TelegramBotAPI::Type::PhotoSize
        SmallPhotoSize;

    SmallPhotoSize.FileID =
        "AgACAgQAAxkBAAIC";

    SmallPhotoSize.Width =
        320;

    SmallPhotoSize.Height =
        180;

    TelegramBotAPI::JSON::Value
        SmallJsonValue =
            TelegramBotAPI::JSON::ToJson(
                SmallPhotoSize
            );

    std::cout
        << boost::json::serialize(
            SmallJsonValue
        )
        << std::endl;

    std::cout
        << "PhotoSizeSerializerTest finished"
        << std::endl;

    return 0;
}