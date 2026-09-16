#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"

int main()
{
    std::cout << "StickerDeserializerTest started" << std::endl;

    const std::string JSONText =
        R"({
            "file_id": "CAACAgQAAxkBAAIB",
            "width": 512,
            "height": 512,
            "thumb": {
                "file_id": "AgACAgQAAxkBAAIB",
                "width": 128,
                "height": 128,
                "file_size": 12345
            },
            "file_size": 456789
        })";

    boost::json::value JsonValue =
        boost::json::parse(JSONText);

    TelegramBotAPI::Type::Sticker StickerObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Sticker
        >(JsonValue);

    std::cout << "FileID: "
              << StickerObject.FileID
              << std::endl;

    std::cout << "Width: "
              << StickerObject.Width
              << std::endl;

    std::cout << "Height: "
              << StickerObject.Height
              << std::endl;

    if (StickerObject.Thumb.has_value())
    {
        std::cout << "Thumb FileID: "
                  << StickerObject.Thumb->FileID
                  << std::endl;

        std::cout << "Thumb Width: "
                  << StickerObject.Thumb->Width
                  << std::endl;

        std::cout << "Thumb Height: "
                  << StickerObject.Thumb->Height
                  << std::endl;

        if (StickerObject.Thumb->FileSize.has_value())
        {
            std::cout << "Thumb FileSize: "
                      << StickerObject.Thumb->FileSize.value()
                      << std::endl;
        }
        else
        {
            std::cout << "Thumb FileSize: null"
                      << std::endl;
        }
    }
    else
    {
        std::cout << "Thumb: null"
                  << std::endl;
    }

    std::cout << "FileSize: "
              << StickerObject.FileSize
              << std::endl;

    const std::string MinimalJSONText =
        R"({
            "file_id": "CAACAgQAAxkBAAIC",
            "width": 256,
            "height": 256,
            "file_size": 98765
        })";

    boost::json::value MinimalJsonValue =
        boost::json::parse(MinimalJSONText);

    TelegramBotAPI::Type::Sticker MinimalStickerObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Sticker
        >(MinimalJsonValue);

    std::cout << "Minimal FileID: "
              << MinimalStickerObject.FileID
              << std::endl;

    std::cout << "Minimal Width: "
              << MinimalStickerObject.Width
              << std::endl;

    std::cout << "Minimal Height: "
              << MinimalStickerObject.Height
              << std::endl;

    if (MinimalStickerObject.Thumb.has_value())
    {
        std::cout << "Minimal Thumb: present"
                  << std::endl;
    }
    else
    {
        std::cout << "Minimal Thumb: null"
                  << std::endl;
    }

    std::cout << "Minimal FileSize: "
              << MinimalStickerObject.FileSize
              << std::endl;

    std::cout << "StickerDeserializerTest finished"
              << std::endl;

    return 0;
}