#ifndef TELEGRAMBOTAPI_JSON_HPP
#define TELEGRAMBOTAPI_JSON_HPP

#include <stdexcept>
#include <string>

#include <boost/json.hpp>

namespace TelegramBotAPI::JSON
{
    using Value = boost::json::value;
    using Object = boost::json::object;
    using Array = boost::json::array;

    class JsonException : public std::runtime_error
    {
        public:
            explicit JsonException(const std::string& Message)
                : std::runtime_error(Message)
            {
            }
    };
}

#endif // TELEGRAMBOTAPI_JSON_HPP