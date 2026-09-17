#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/PollMedia.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "link": {
                "url": "https://example.com"
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::PollMedia Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::PollMedia
            >(JsonValue);

        assert(Result.Link.has_value());
        assert(Result.Link->URL == "https://example.com");
    }

    return 0;
}