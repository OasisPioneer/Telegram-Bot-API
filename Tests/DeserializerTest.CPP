#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"

int main()
{
    std::cout
        << "DeserializerTest started"
        << std::endl;


    /*
     * bool
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("true");

        bool Result =
            TelegramBotAPI::JSON::FromJson<bool>(
                JsonValue
            );

        std::cout
            << std::boolalpha
            << Result
            << std::endl;
    }


    /*
     * integer
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("123456789");

        long long Result =
            TelegramBotAPI::JSON::FromJson<long long>(
                JsonValue
            );

        std::cout
            << Result
            << std::endl;
    }


    /*
     * floating point
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("3.1415926");

        double Result =
            TelegramBotAPI::JSON::FromJson<double>(
                JsonValue
            );

        std::cout
            << Result
            << std::endl;
    }


    /*
     * string
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "\"Hello Telegram\""
            );

        std::string Result =
            TelegramBotAPI::JSON::FromJson<std::string>(
                JsonValue
            );

        std::cout
            << Result
            << std::endl;
    }


    /*
     * vector<int>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "[10,20,30]"
            );

        std::vector<int> Result =
            TelegramBotAPI::JSON::FromJson<
                std::vector<int>
            >(JsonValue);

        for (const int Element : Result)
        {
            std::cout
                << Element
                << " ";
        }

        std::cout
            << std::endl;
    }


    /*
     * vector<string>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "[\"Alice\",\"Bob\",\"Charlie\"]"
            );

        std::vector<std::string> Result =
            TelegramBotAPI::JSON::FromJson<
                std::vector<std::string>
            >(JsonValue);

        for (const std::string& Element : Result)
        {
            std::cout
                << Element
                << " ";
        }

        std::cout
            << std::endl;
    }


    /*
     * vector<vector<int>>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "[[1,2,3],[4,5,6],[7,8,9]]"
            );

        std::vector<std::vector<int>> Result =
            TelegramBotAPI::JSON::FromJson<
                std::vector<std::vector<int>>
            >(JsonValue);

        for (
            const std::vector<int>& Row :
            Result
        )
        {
            for (const int Element : Row)
            {
                std::cout
                    << Element
                    << " ";
            }

            std::cout
                << std::endl;
        }
    }


    /*
     * optional<int>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("123");

        std::optional<int> Result =
            TelegramBotAPI::JSON::FromJson<
                std::optional<int>
            >(JsonValue);

        if (Result.has_value())
        {
            std::cout
                << Result.value()
                << std::endl;
        }
    }


    /*
     * optional<int> = null
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("null");

        std::optional<int> Result =
            TelegramBotAPI::JSON::FromJson<
                std::optional<int>
            >(JsonValue);

        if (!Result.has_value())
        {
            std::cout
                << "nullopt"
                << std::endl;
        }
    }


    /*
     * vector<optional<int>>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "[10,null,30]"
            );

        std::vector<std::optional<int>> Result =
            TelegramBotAPI::JSON::FromJson<
                std::vector<std::optional<int>>
            >(JsonValue);

        for (
            const std::optional<int>& Element :
            Result
        )
        {
            if (Element.has_value())
            {
                std::cout
                    << Element.value()
                    << " ";
            }
            else
            {
                std::cout
                    << "null ";
            }
        }

        std::cout
            << std::endl;
    }


    /*
     * shared_ptr<int>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("456");

        std::shared_ptr<int> Result =
            TelegramBotAPI::JSON::FromJson<
                std::shared_ptr<int>
            >(JsonValue);

        if (Result)
        {
            std::cout
                << *Result
                << std::endl;
        }
    }


    /*
     * shared_ptr<int> = null
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("null");

        std::shared_ptr<int> Result =
            TelegramBotAPI::JSON::FromJson<
                std::shared_ptr<int>
            >(JsonValue);

        if (!Result)
        {
            std::cout
                << "nullptr"
                << std::endl;
        }
    }


    /*
     * optional<shared_ptr<int>>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse("789");

        std::optional<
            std::shared_ptr<int>
        > Result =
            TelegramBotAPI::JSON::FromJson<
                std::optional<
                    std::shared_ptr<int>
                >
            >(JsonValue);

        if (Result.has_value())
        {
            if (Result.value())
            {
                std::cout
                    << *Result.value()
                    << std::endl;
            }
        }
    }


    /*
     * vector<shared_ptr<int>>
     */
    {
        TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(
                "[100,null,300]"
            );

        std::vector<
            std::shared_ptr<int>
        > Result =
            TelegramBotAPI::JSON::FromJson<
                std::vector<
                    std::shared_ptr<int>
                >
            >(JsonValue);

        for (
            const std::shared_ptr<int>& Element :
            Result
        )
        {
            if (Element)
            {
                std::cout
                    << *Element
                    << " ";
            }
            else
            {
                std::cout
                    << "null ";
            }
        }

        std::cout
            << std::endl;
    }


    /*
     * Exception test
     */
    {
        try
        {
            TelegramBotAPI::JSON::Value JsonValue =
                boost::json::parse(
                    "\"Not An Integer\""
                );

            long long Result =
                TelegramBotAPI::JSON::FromJson<
                    long long
                >(JsonValue);

            std::cout
                << Result
                << std::endl;
        }
        catch (
            const TelegramBotAPI::JSON::JsonException& Exception
        )
        {
            std::cout
                << "Caught JsonException: "
                << Exception.what()
                << std::endl;
        }
    }


    std::cout
        << "DeserializerTest finished"
        << std::endl;

    return 0;
}