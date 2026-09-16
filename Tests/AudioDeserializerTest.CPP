#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"

int main()
{
    std::cout
        << "AudioDeserializerTest started"
        << std::endl;

    const std::string JsonText =
        R"({
            "file_id": "CQACAgQAAxkBAAIB",
            "duration": 245,
            "performer": "Example Artist",
            "title": "Example Song",
            "mime_type": "audio/mpeg",
            "file_size": 9876543
        })";

    try
    {
        boost::json::value JsonValue =
            boost::json::parse(
                JsonText
            );

        TelegramBotAPI::Type::Audio Audio =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Audio
            >(
                JsonValue
            );

        std::cout
            << "FileID: "
            << Audio.FileID
            << std::endl;

        std::cout
            << "Duration: "
            << Audio.Duration
            << std::endl;

        if (Audio.Performer.has_value())
        {
            std::cout
                << "Performer: "
                << Audio.Performer.value()
                << std::endl;
        }

        if (Audio.Title.has_value())
        {
            std::cout
                << "Title: "
                << Audio.Title.value()
                << std::endl;
        }

        if (Audio.MimeType.has_value())
        {
            std::cout
                << "MimeType: "
                << Audio.MimeType.value()
                << std::endl;
        }

        if (Audio.FileSize.has_value())
        {
            std::cout
                << "FileSize: "
                << Audio.FileSize.value()
                << std::endl;
        }

        const std::string MinimalJsonText =
            R"({
                "file_id": "CQACAgQAAxkBAAIC",
                "duration": 60
            })";

        boost::json::value MinimalJsonValue =
            boost::json::parse(
                MinimalJsonText
            );

        TelegramBotAPI::Type::Audio
            MinimalAudio =
                TelegramBotAPI::JSON::FromJson<
                    TelegramBotAPI::Type::Audio
                >(
                    MinimalJsonValue
                );

        std::cout
            << "Minimal FileID: "
            << MinimalAudio.FileID
            << std::endl;

        std::cout
            << "Minimal Duration: "
            << MinimalAudio.Duration
            << std::endl;

        if (!MinimalAudio.Performer.has_value())
        {
            std::cout
                << "Minimal Performer: null"
                << std::endl;
        }

        if (!MinimalAudio.Title.has_value())
        {
            std::cout
                << "Minimal Title: null"
                << std::endl;
        }

        if (!MinimalAudio.MimeType.has_value())
        {
            std::cout
                << "Minimal MimeType: null"
                << std::endl;
        }

        if (!MinimalAudio.FileSize.has_value())
        {
            std::cout
                << "Minimal FileSize: null"
                << std::endl;
        }
    }
    catch (
        const TelegramBotAPI::JSON::JsonException&
            Exception
    )
    {
        std::cerr
            << "JSON error: "
            << Exception.what()
            << std::endl;

        return 1;
    }
    catch (
        const std::exception&
            Exception
    )
    {
        std::cerr
            << "Unexpected error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout
        << "AudioDeserializerTest finished"
        << std::endl;

    return 0;
}