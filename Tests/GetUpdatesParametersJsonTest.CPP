#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include <boost/json.hpp>

#include "TelegramBotAPI/Methods/getUpdates.HPP"

int main()
{
    TelegramBotAPI::Methods::getUpdates::Parameters Parameters;

    TelegramBotAPI::JSON::Object Object =
        Parameters.ToJson();

    assert(
        Object.empty()
    );

    Parameters.Offset =
        100;

    Parameters.Limit =
        50;

    Parameters.Timeout =
        30;

    Parameters.AllowedUpdates =
        std::vector<std::string>{
            "message",
            "callback_query"
        };

    Object =
        Parameters.ToJson();

    assert(
        Object.contains("offset")
    );

    assert(
        Object.contains("limit")
    );

    assert(
        Object.contains("timeout")
    );

    assert(
        Object.contains("allowed_updates")
    );

    assert(
        Object.at("offset").as_int64() ==
        100
    );

    assert(
        Object.at("limit").as_int64() ==
        50
    );

    assert(
        Object.at("timeout").as_int64() ==
        30
    );

    const TelegramBotAPI::JSON::Array& AllowedUpdates =
        Object.at(
            "allowed_updates"
        ).as_array();

    assert(
        AllowedUpdates.size() == 2
    );

    assert(
        AllowedUpdates.at(0).as_string() ==
        "message"
    );

    assert(
        AllowedUpdates.at(1).as_string() ==
        "callback_query"
    );

    std::cout
        << boost::json::serialize(Object)
        << std::endl;

    std::cout
        << "GetUpdatesParametersJsonTest passed"
        << std::endl;

    return 0;
}