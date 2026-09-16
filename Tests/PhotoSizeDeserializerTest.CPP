#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"

int main()
{
    std::cout
        << "PhotoSizeDeserializerTest started"
        << std::endl;

    const std::string JsonText =
        R"({
            "file_id": "AgACAgQAAxkBAAIB",
            "width": 1280,
            "height": 720,
            "file_size": 123456
        })";

    try
    {
        boost::json::value JsonValue =
            boost::json::parse(
                JsonText
            );

        TelegramBotAPI::Type::PhotoSize
            PhotoSize =
                TelegramBotAPI::JSON::FromJson<
                    TelegramBotAPI::Type::PhotoSize
                >(
                    JsonValue
                );

        std::cout
            << "FileID: "
            << PhotoSize.FileID
            << std::endl;

        std::cout
            << "Width: "
            << PhotoSize.Width
            << std::endl;

        std::cout
            << "Height: "
            << PhotoSize.Height
            << std::endl;

        if (PhotoSize.FileSize.has_value())
        {
            std::cout
                << "FileSize: "
                << PhotoSize.FileSize.value()
                << std::endl;
        }

        const std::string SimpleJsonText =
            R"({
                "file_id": "AgACAgQAAxkBAAIC",
                "width": 320,
                "height": 180
            })";

        boost::json::value SimpleJsonValue =
            boost::json::parse(
                SimpleJsonText
            );

        TelegramBotAPI::Type::PhotoSize
            SimplePhotoSize =
                TelegramBotAPI::JSON::FromJson<
                    TelegramBotAPI::Type::PhotoSize
                >(
                    SimpleJsonValue
                );

        std::cout
            << "Simple FileID: "
            << SimplePhotoSize.FileID
            << std::endl;

        std::cout
            << "Simple Width: "
            << SimplePhotoSize.Width
            << std::endl;

        std::cout
            << "Simple Height: "
            << SimplePhotoSize.Height
            << std::endl;

        if (!SimplePhotoSize.FileSize.has_value())
        {
            std::cout
                << "Simple FileSize: null"
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
        << "PhotoSizeDeserializerTest finished"
        << std::endl;

    return 0;
}