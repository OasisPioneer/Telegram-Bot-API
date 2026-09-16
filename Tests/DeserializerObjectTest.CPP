#include <iostream>
#include <optional>
#include <string>
#include <vector>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"

int main()
{
    std::cout
        << "DeserializerObjectTest started"
        << std::endl;


    /*
     * Test JSON object
     */

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(
            R"(
                {
                    "id": 123456789,
                    "first_name": "Oasis",
                    "last_name": "Pioneer",
                    "username": "OasisPioneer",
                    "age": 25,
                    "scores": [100, 200, 300],
                    "empty_value": null
                }
            )"
        );


    const TelegramBotAPI::JSON::Object& JsonObject =
        JsonValue.as_object();


    /*
     * Required field: integer
     */

    {
        const long long ID =
            TelegramBotAPI::JSON::GetRequiredField<
                long long
            >(
                JsonObject,
                "id"
            );

        std::cout
            << "ID: "
            << ID
            << std::endl;
    }


    /*
     * Required field: string
     */

    {
        const std::string FirstName =
            TelegramBotAPI::JSON::GetRequiredField<
                std::string
            >(
                JsonObject,
                "first_name"
            );

        std::cout
            << "FirstName: "
            << FirstName
            << std::endl;
    }


    /*
     * Optional field: exists
     */

    {
        const std::optional<std::string> LastName =
            TelegramBotAPI::JSON::GetOptionalField<
                std::string
            >(
                JsonObject,
                "last_name"
            );

        if (LastName.has_value())
        {
            std::cout
                << "LastName: "
                << LastName.value()
                << std::endl;
        }
    }


    /*
     * Optional field: exists
     */

    {
        const std::optional<std::string> UserName =
            TelegramBotAPI::JSON::GetOptionalField<
                std::string
            >(
                JsonObject,
                "username"
            );

        if (UserName.has_value())
        {
            std::cout
                << "UserName: "
                << UserName.value()
                << std::endl;
        }
    }


    /*
     * Optional field: does not exist
     */

    {
        const std::optional<std::string> MissingField =
            TelegramBotAPI::JSON::GetOptionalField<
                std::string
            >(
                JsonObject,
                "not_exist"
            );

        if (!MissingField.has_value())
        {
            std::cout
                << "MissingField: nullopt"
                << std::endl;
        }
    }


    /*
     * Optional field: explicitly null
     */

    {
        const std::optional<std::string> EmptyValue =
            TelegramBotAPI::JSON::GetOptionalField<
                std::string
            >(
                JsonObject,
                "empty_value"
            );

        if (!EmptyValue.has_value())
        {
            std::cout
                << "EmptyValue: nullopt"
                << std::endl;
        }
    }


    /*
     * Optional field: integer
     */

    {
        const std::optional<long long> Age =
            TelegramBotAPI::JSON::GetOptionalField<
                long long
            >(
                JsonObject,
                "age"
            );

        if (Age.has_value())
        {
            std::cout
                << "Age: "
                << Age.value()
                << std::endl;
        }
    }


    /*
     * Required field: vector
     */

    {
        const std::vector<long long> Scores =
            TelegramBotAPI::JSON::GetRequiredField<
                std::vector<long long>
            >(
                JsonObject,
                "scores"
            );

        std::cout
            << "Scores: ";

        for (
            const long long Score :
            Scores
        )
        {
            std::cout
                << Score
                << " ";
        }

        std::cout
            << std::endl;
    }


    /*
     * Required field missing
     */

    {
        try
        {
            const std::string MissingField =
                TelegramBotAPI::JSON::GetRequiredField<
                    std::string
                >(
                    JsonObject,
                    "required_not_exist"
                );

            std::cout
                << MissingField
                << std::endl;
        }
        catch (
            const TelegramBotAPI::JSON::JsonException& Exception
        )
        {
            std::cout
                << "Caught missing field exception: "
                << Exception.what()
                << std::endl;
        }
    }


    /*
     * Required field: wrong type
     */

    {
        try
        {
            const std::string WrongType =
                TelegramBotAPI::JSON::GetRequiredField<
                    std::string
                >(
                    JsonObject,
                    "id"
                );

            std::cout
                << WrongType
                << std::endl;
        }
        catch (
            const TelegramBotAPI::JSON::JsonException& Exception
        )
        {
            std::cout
                << "Caught type exception: "
                << Exception.what()
                << std::endl;
        }
    }


    std::cout
        << "DeserializerObjectTest finished"
        << std::endl;

    return 0;
}