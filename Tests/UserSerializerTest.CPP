#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Types/User.HPP"

int main()
{
    std::cout
        << "UserSerializerTest started"
        << '\n';


    /*
     * Test 1:
     *
     * All fields exist.
     */

    TelegramBotAPI::Type::User UserObject;

    UserObject.ID =
        123456789;

    UserObject.FirstName =
        "Oasis";

    UserObject.LastName =
        "Pioneer";

    UserObject.UserName =
        "OasisPioneer";

    TelegramBotAPI::JSON::Value JsonValue =
        TelegramBotAPI::JSON::ToJson(
            UserObject
        );

    std::cout
        << JsonValue
        << '\n';


    /*
     * Test 2:
     *
     * Optional fields do not exist.
     */

    TelegramBotAPI::Type::User MinimalUser;

    MinimalUser.ID =
        1;

    MinimalUser.FirstName =
        "Telegram";

    JsonValue =
        TelegramBotAPI::JSON::ToJson(
            MinimalUser
        );

    std::cout
        << JsonValue
        << '\n';


    /*
     * Test 3:
     *
     * Only last_name exists.
     */

    TelegramBotAPI::Type::User LastNameUser;

    LastNameUser.ID =
        2;

    LastNameUser.FirstName =
        "Test";

    LastNameUser.LastName =
        "User";

    JsonValue =
        TelegramBotAPI::JSON::ToJson(
            LastNameUser
        );

    std::cout
        << JsonValue
        << '\n';


    /*
     * Test 4:
     *
     * Only username exists.
     */

    TelegramBotAPI::Type::User UserNameUser;

    UserNameUser.ID =
        3;

    UserNameUser.FirstName =
        "Bot";

    UserNameUser.UserName =
        "TestBot";

    JsonValue =
        TelegramBotAPI::JSON::ToJson(
            UserNameUser
        );

    std::cout
        << JsonValue
        << '\n';


    std::cout
        << "UserSerializerTest finished"
        << '\n';

    return 0;
}