#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"

int main()
{
    std::cout
        << "AudioSerializerTest started"
        << std::endl;

    TelegramBotAPI::Type::Audio Audio;

    Audio.FileID =
        "CQACAgQAAxkBAAIB";

    Audio.Duration =
        245;

    Audio.Performer =
        "Example Artist";

    Audio.Title =
        "Example Song";

    Audio.MimeType =
        "audio/mpeg";

    Audio.FileSize =
        9876543;

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(
            Audio
        );

    std::cout
        << boost::json::serialize(
            JsonValue
        )
        << std::endl;

    TelegramBotAPI::Type::Audio
        MinimalAudio;

    MinimalAudio.FileID =
        "CQACAgQAAxkBAAIC";

    MinimalAudio.Duration =
        60;

    TelegramBotAPI::JSON::Value
        MinimalJsonValue =
            TelegramBotAPI::JSON::ToJson(
                MinimalAudio
            );

    std::cout
        << boost::json::serialize(
            MinimalJsonValue
        )
        << std::endl;

    std::cout
        << "AudioSerializerTest finished"
        << std::endl;

    return 0;
}