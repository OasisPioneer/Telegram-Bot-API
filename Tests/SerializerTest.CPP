#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "TelegramBotAPI/JSON/Serializer.HPP"

int main()
{
    std::cout << "SerializerTest started" << std::endl;


    /*
     * ============================================================
     * Basic Types
     * ============================================================
     */

    bool BooleanValue = true;

    TelegramBotAPI::JSON::Value BooleanJson =
        TelegramBotAPI::JSON::ToJson(BooleanValue);

    std::cout << BooleanJson << std::endl;


    int IntegerValue = 123;

    TelegramBotAPI::JSON::Value IntegerJson =
        TelegramBotAPI::JSON::ToJson(IntegerValue);

    std::cout << IntegerJson << std::endl;


    long long LongValue = 123456789LL;

    TelegramBotAPI::JSON::Value LongJson =
        TelegramBotAPI::JSON::ToJson(LongValue);

    std::cout << LongJson << std::endl;


    double DoubleValue = 3.1415926;

    TelegramBotAPI::JSON::Value DoubleJson =
        TelegramBotAPI::JSON::ToJson(DoubleValue);

    std::cout << DoubleJson << std::endl;


    std::string StringValue = "Hello Telegram";

    TelegramBotAPI::JSON::Value StringJson =
        TelegramBotAPI::JSON::ToJson(StringValue);

    std::cout << StringJson << std::endl;


    /*
     * ============================================================
     * std::vector<T>
     * ============================================================
     */

    std::vector<int> IntegerValues = {
        10,
        20,
        30
    };

    TelegramBotAPI::JSON::Value IntegerArrayJson =
        TelegramBotAPI::JSON::ToJson(IntegerValues);

    std::cout << IntegerArrayJson << std::endl;


    std::vector<std::string> StringValues = {
        "Alice",
        "Bob",
        "Charlie"
    };

    TelegramBotAPI::JSON::Value StringArrayJson =
        TelegramBotAPI::JSON::ToJson(StringValues);

    std::cout << StringArrayJson << std::endl;


    std::vector<double> DoubleValues = {
        1.1,
        2.2,
        3.3
    };

    TelegramBotAPI::JSON::Value DoubleArrayJson =
        TelegramBotAPI::JSON::ToJson(DoubleValues);

    std::cout << DoubleArrayJson << std::endl;


    std::vector<std::vector<int>> Matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    TelegramBotAPI::JSON::Value MatrixJson =
        TelegramBotAPI::JSON::ToJson(Matrix);

    std::cout << MatrixJson << std::endl;


    /*
     * ============================================================
     * std::optional<T>
     * ============================================================
     */

    std::optional<int> OptionalIntegerValue = 123;

    TelegramBotAPI::JSON::Value OptionalIntegerJson =
        TelegramBotAPI::JSON::ToJson(
            OptionalIntegerValue
        );

    std::cout << OptionalIntegerJson << std::endl;


    std::optional<int> EmptyIntegerValue =
        std::nullopt;

    TelegramBotAPI::JSON::Value EmptyIntegerJson =
        TelegramBotAPI::JSON::ToJson(
            EmptyIntegerValue
        );

    std::cout << EmptyIntegerJson << std::endl;


    std::optional<std::string> OptionalStringValue =
        "Telegram Bot API";

    TelegramBotAPI::JSON::Value OptionalStringJson =
        TelegramBotAPI::JSON::ToJson(
            OptionalStringValue
        );

    std::cout << OptionalStringJson << std::endl;


    std::optional<std::string> EmptyStringValue =
        std::nullopt;

    TelegramBotAPI::JSON::Value EmptyStringJson =
        TelegramBotAPI::JSON::ToJson(
            EmptyStringValue
        );

    std::cout << EmptyStringJson << std::endl;


    std::optional<std::vector<int>> OptionalIntegerArray =
        std::vector<int>{
            100,
            200,
            300
        };

    TelegramBotAPI::JSON::Value OptionalIntegerArrayJson =
        TelegramBotAPI::JSON::ToJson(
            OptionalIntegerArray
        );

    std::cout << OptionalIntegerArrayJson << std::endl;


    std::optional<std::vector<int>> EmptyIntegerArray =
        std::nullopt;

    TelegramBotAPI::JSON::Value EmptyIntegerArrayJson =
        TelegramBotAPI::JSON::ToJson(
            EmptyIntegerArray
        );

    std::cout << EmptyIntegerArrayJson << std::endl;


    std::vector<std::optional<int>> OptionalValues = {
        10,
        std::nullopt,
        30
    };

    TelegramBotAPI::JSON::Value OptionalValuesJson =
        TelegramBotAPI::JSON::ToJson(
            OptionalValues
        );

    std::cout << OptionalValuesJson << std::endl;


    /*
     * ============================================================
     * std::shared_ptr<T>
     * ============================================================
     */

    std::shared_ptr<int> IntegerPointer =
        std::make_shared<int>(456);

    TelegramBotAPI::JSON::Value IntegerPointerJson =
        TelegramBotAPI::JSON::ToJson(
            IntegerPointer
        );

    std::cout << IntegerPointerJson << std::endl;


    std::shared_ptr<int> EmptyIntegerPointer;

    TelegramBotAPI::JSON::Value EmptyIntegerPointerJson =
        TelegramBotAPI::JSON::ToJson(
            EmptyIntegerPointer
        );

    std::cout << EmptyIntegerPointerJson << std::endl;


    std::shared_ptr<std::string> StringPointer =
        std::make_shared<std::string>(
            "Shared Telegram String"
        );

    TelegramBotAPI::JSON::Value StringPointerJson =
        TelegramBotAPI::JSON::ToJson(
            StringPointer
        );

    std::cout << StringPointerJson << std::endl;


    /*
     * ============================================================
     * std::optional<std::shared_ptr<T>>
     * ============================================================
     */

    std::optional<std::shared_ptr<int>>
        OptionalIntegerPointer =
            std::make_shared<int>(789);

    TelegramBotAPI::JSON::Value
        OptionalIntegerPointerJson =
            TelegramBotAPI::JSON::ToJson(
                OptionalIntegerPointer
            );

    std::cout << OptionalIntegerPointerJson
              << std::endl;


    std::optional<std::shared_ptr<int>>
        OptionalEmptyIntegerPointer =
            std::shared_ptr<int>{};

    TelegramBotAPI::JSON::Value
        OptionalEmptyIntegerPointerJson =
            TelegramBotAPI::JSON::ToJson(
                OptionalEmptyIntegerPointer
            );

    std::cout << OptionalEmptyIntegerPointerJson
              << std::endl;


    std::optional<std::shared_ptr<int>>
        EmptyOptionalIntegerPointer =
            std::nullopt;

    TelegramBotAPI::JSON::Value
        EmptyOptionalIntegerPointerJson =
            TelegramBotAPI::JSON::ToJson(
                EmptyOptionalIntegerPointer
            );

    std::cout << EmptyOptionalIntegerPointerJson
              << std::endl;


    /*
     * ============================================================
     * std::vector<std::shared_ptr<T>>
     * ============================================================
     */

    std::vector<std::shared_ptr<int>> IntegerPointers = {
        std::make_shared<int>(1),
        std::make_shared<int>(2),
        std::shared_ptr<int>{},
        std::make_shared<int>(4)
    };

    TelegramBotAPI::JSON::Value IntegerPointersJson =
        TelegramBotAPI::JSON::ToJson(
            IntegerPointers
        );

    std::cout << IntegerPointersJson << std::endl;


    /*
     * ============================================================
     * Combined Test
     * ============================================================
     */

    std::vector<
        std::optional<
            std::shared_ptr<int>
        >
    > CombinedValues = {
        std::make_shared<int>(1000),
        std::nullopt,
        std::shared_ptr<int>{},
        std::make_shared<int>(3000)
    };

    TelegramBotAPI::JSON::Value CombinedJson =
        TelegramBotAPI::JSON::ToJson(
            CombinedValues
        );

    std::cout << CombinedJson << std::endl;


    /*
     * ============================================================
     * Telegram Type: User
     * ============================================================
     */

    TelegramBotAPI::Type::User UserObject;

    UserObject.ID = 123456789LL;
    UserObject.FirstName = "Oasis";
    UserObject.LastName = "Pioneer";
    UserObject.UserName = "OasisPioneer";

    TelegramBotAPI::JSON::Value UserJson =
        TelegramBotAPI::JSON::ToJson(
            UserObject
        );

    std::cout << UserJson << std::endl;


    /*
     * ============================================================
     * Telegram Type: User
     * Empty Strings
     * ============================================================
     */

    TelegramBotAPI::Type::User EmptyUserObject;

    EmptyUserObject.ID = 1;

    TelegramBotAPI::JSON::Value EmptyUserJson =
        TelegramBotAPI::JSON::ToJson(
            EmptyUserObject
        );

    std::cout << EmptyUserJson << std::endl;


    std::cout << "SerializerTest finished" << std::endl;

    return 0;
}