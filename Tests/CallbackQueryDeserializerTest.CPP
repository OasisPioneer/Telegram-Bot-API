#include <cassert>
#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"

int main()
{
    const std::string JsonText = R"({
        "id": "123456789",
        "from": {
            "id": 123456789,
            "first_name": "Test",
            "username": "test"
        },
        "data": "test_data"
    })";

    const boost::json::value JsonValue =
        boost::json::parse(JsonText);

    const TelegramBotAPI::Type::CallbackQuery CallbackQuery =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::CallbackQuery
        >(
            JsonValue
        );

    assert(
        CallbackQuery.ID ==
        "123456789"
    );

    assert(
        CallbackQuery.From.ID ==
        123456789
    );

    assert(
        CallbackQuery.Data.has_value()
    );

    assert(
        CallbackQuery.Data.value() ==
        "test_data"
    );

    std::cout
        << "CallbackQuery deserialization test passed\n";

    return 0;
}