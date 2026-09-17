#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Link.HPP"

int main()
{
    const std::string JSONText = R"({
        "url": "https://example.com/poll"
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::Link Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::Link
        >(JsonValue);

    assert(Result.URL == "https://example.com/poll");

    return 0;
}