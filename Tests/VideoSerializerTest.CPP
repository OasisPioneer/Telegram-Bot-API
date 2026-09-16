#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/Video.HPP"

int main()
{
    std::cout
        << "VideoSerializerTest started"
        << std::endl;

    TelegramBotAPI::Type::Video VideoObject;

    VideoObject.FileID =
        "BAACAgQAAxkBAAIB";

    VideoObject.Width =
        1920;

    VideoObject.Height =
        1080;

    VideoObject.Duration =
        120;

    TelegramBotAPI::Type::PhotoSize ThumbObject;

    ThumbObject.FileID =
        "AgACAgQAAxkBAAIB";

    ThumbObject.Width =
        320;

    ThumbObject.Height =
        180;

    ThumbObject.FileSize =
        45678;

    VideoObject.Thumb =
        ThumbObject;

    VideoObject.FileName =
        "example.mp4";

    VideoObject.MimeType =
        "video/mp4";

    VideoObject.FileSize =
        12345678;

    boost::json::value JsonValue =
        TelegramBotAPI::JSON::ToJson(
            VideoObject
        );

    std::cout
        << boost::json::serialize(JsonValue)
        << std::endl;


    TelegramBotAPI::Type::Video MinimalVideo;

    MinimalVideo.FileID =
        "BAACAgQAAxkBAAIC";

    MinimalVideo.Width =
        640;

    MinimalVideo.Height =
        360;

    MinimalVideo.Duration =
        30;

    boost::json::value MinimalJsonValue =
        TelegramBotAPI::JSON::ToJson(
            MinimalVideo
        );

    std::cout
        << boost::json::serialize(MinimalJsonValue)
        << std::endl;

    std::cout
        << "VideoSerializerTest finished"
        << std::endl;

    return 0;
}