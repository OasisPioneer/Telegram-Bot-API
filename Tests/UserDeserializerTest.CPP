#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/User.HPP"

int main()
{
    std::cout
        << "UserDeserializerTest started"
        << '\n';


    /*
     * Test 1:
     *
     * All fields exist.
     */

    TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(
            R"({
                "id": 123456789,
                "first_name": "Oasis",
                "last_name": "Pioneer",
                "username": "OasisPioneer"
            })"
        );

    TelegramBotAPI::Type::User UserObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::User
        >(
            JsonValue
        );

    std::cout
        << "ID: "
        << UserObject.ID
        << '\n';

    std::cout
        << "FirstName: "
        << UserObject.FirstName
        << '\n';

    std::cout
        << "LastName: "
        << UserObject.LastName.value_or(
            "<null>"
        )
        << '\n';

    std::cout
        << "UserName: "
        << UserObject.UserName.value_or(
            "<null>"
        )
        << '\n';


    /*
     * Test 2:
     *
     * Optional fields are missing.
     */

    JsonValue =
        boost::json::parse(
            R"({
                "id": 1,
                "first_name": "Telegram"
            })"
        );

    UserObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::User
        >(
            JsonValue
        );

    std::cout
        << "ID: "
        << UserObject.ID
        << '\n';

    std::cout
        << "FirstName: "
        << UserObject.FirstName
        << '\n';

    std::cout
        << "LastName: "
        << UserObject.LastName.value_or(
            "<null>"
        )
        << '\n';

    std::cout
        << "UserName: "
        << UserObject.UserName.value_or(
            "<null>"
        )
        << '\n';


    /*
     * Test 3:
     *
     * Required field is missing.
     */

    try
    {
        JsonValue =
            boost::json::parse(
                R"({
                    "first_name": "MissingID"
                })"
            );

        UserObject =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::User
            >(
                JsonValue
            );
    }
    catch (
        const TelegramBotAPI::JSON::JsonException& Exception
    )
    {
        std::cout
            << "Caught required field exception: "
            << Exception.what()
            << '\n';
    }


    /*
     * Test 4:
     *
     * Wrong type.
     */

    try
    {
        JsonValue =
            boost::json::parse(
                R"({
                    "id": "123456789",
                    "first_name": "WrongType"
                })"
            );

        UserObject =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::User
            >(
                JsonValue
            );
    }
    catch (
        const TelegramBotAPI::JSON::JsonException& Exception
    )
    {
        std::cout
            << "Caught type exception: "
            << Exception.what()
            << '\n';
    }


    /*
     * Test 5:
     *
     * Optional field is explicitly null.
     */

    JsonValue =
        boost::json::parse(
            R"({
                "id": 2,
                "first_name": "NullTest",
                "last_name": null,
                "username": null
            })"
        );

    UserObject =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::User
        >(
            JsonValue
        );

    std::cout
        << "Null LastName: "
        << UserObject.LastName.value_or(
            "<null>"
        )
        << '\n';

    std::cout
        << "Null UserName: "
        << UserObject.UserName.value_or(
            "<null>"
        )
        << '\n';


    std::cout
        << "UserDeserializerTest finished"
        << '\n';

    return 0;
}