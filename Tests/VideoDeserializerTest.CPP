#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Video.HPP"

int main()
{
    std::cout
        << "VideoDeserializerTest started"
        << std::endl;

    const std::string JsonText =
        R"({
            "file_id":"BAACAgQAAxkBAAIB",
            "width":1920,
            "height":1080,
            "duration":120,
            "thumb":{
                "file_id":"AgACAgQAAxkBAAIB",
                "width":320,
                "height":180,
                "file_size":45678
            },
            "file_name":"example.mp4",
            "mime_type":"video/mp4",
            "file_size":12345678
        })";

    boost::json::value JsonValue =
        boost::json::parse(JsonText);

    TelegramBotAPI::Type::Video VideoObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Video
        >(
            JsonValue
        );

    std::cout
        << "FileID: "
        << VideoObject.FileID
        << std::endl;

    std::cout
        << "Width: "
        << VideoObject.Width
        << std::endl;

    std::cout
        << "Height: "
        << VideoObject.Height
        << std::endl;

    std::cout
        << "Duration: "
        << VideoObject.Duration
        << std::endl;

    if (VideoObject.Thumb.has_value())
    {
        std::cout
            << "Thumb FileID: "
            << VideoObject.Thumb->FileID
            << std::endl;

        std::cout
            << "Thumb Width: "
            << VideoObject.Thumb->Width
            << std::endl;

        std::cout
            << "Thumb Height: "
            << VideoObject.Thumb->Height
            << std::endl;

        if (VideoObject.Thumb->FileSize.has_value())
        {
            std::cout
                << "Thumb FileSize: "
                << VideoObject.Thumb->FileSize.value()
                << std::endl;
        }
    }
    else
    {
        std::cout
            << "Thumb: null"
            << std::endl;
    }

    if (VideoObject.FileName.has_value())
    {
        std::cout
            << "FileName: "
            << VideoObject.FileName.value()
            << std::endl;
    }
    else
    {
        std::cout
            << "FileName: null"
            << std::endl;
    }

    if (VideoObject.MimeType.has_value())
    {
        std::cout
            << "MimeType: "
            << VideoObject.MimeType.value()
            << std::endl;
    }
    else
    {
        std::cout
            << "MimeType: null"
            << std::endl;
    }

    if (VideoObject.FileSize.has_value())
    {
        std::cout
            << "FileSize: "
            << VideoObject.FileSize.value()
            << std::endl;
    }
    else
    {
        std::cout
            << "FileSize: null"
            << std::endl;
    }


    const std::string MinimalJsonText =
        R"({
            "file_id":"BAACAgQAAxkBAAIC",
            "width":640,
            "height":360,
            "duration":30
        })";

    boost::json::value MinimalJsonValue =
        boost::json::parse(MinimalJsonText);

    TelegramBotAPI::Type::Video MinimalVideo =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Video
        >(
            MinimalJsonValue
        );

    std::cout
        << "Minimal FileID: "
        << MinimalVideo.FileID
        << std::endl;

    std::cout
        << "Minimal Width: "
        << MinimalVideo.Width
        << std::endl;

    std::cout
        << "Minimal Height: "
        << MinimalVideo.Height
        << std::endl;

    std::cout
        << "Minimal Duration: "
        << MinimalVideo.Duration
        << std::endl;

    std::cout
        << "Minimal Thumb: "
        << (
            MinimalVideo.Thumb.has_value()
                ? "exists"
                : "null"
        )
        << std::endl;

    std::cout
        << "Minimal FileName: "
        << (
            MinimalVideo.FileName.has_value()
                ? MinimalVideo.FileName.value()
                : "null"
        )
        << std::endl;

    std::cout
        << "Minimal MimeType: "
        << (
            MinimalVideo.MimeType.has_value()
                ? MinimalVideo.MimeType.value()
                : "null"
        )
        << std::endl;

    std::cout
        << "Minimal FileSize: "
        << (
            MinimalVideo.FileSize.has_value()
                ? std::to_string(
                    MinimalVideo.FileSize.value()
                )
                : "null"
        )
        << std::endl;

    std::cout
        << "VideoDeserializerTest finished"
        << std::endl;

    return 0;
}