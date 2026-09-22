#ifndef TELEGRAMBOTAPI_JSON_HPP
#define TELEGRAMBOTAPI_JSON_HPP

#include <stdexcept>
#include <string>

#include <boost/json.hpp>

namespace TelegramBotAPI::JSON
{
/**
 * @brief JSON value type alias for Boost.JSON.
 * @brief Boost.JSON 的 JSON 值类型别名。
 */
    using Value = boost::json::value;
/**
 * @brief JSON object type alias for Boost.JSON.
 * @brief Boost.JSON 的 JSON 对象类型别名。
 */
    using Object = boost::json::object;
/**
 * @brief JSON array type alias for Boost.JSON.
 * @brief Boost.JSON 的 JSON 数组类型别名。
 */
    using Array = boost::json::array;

/**
 * @brief Exception type for JSON parsing and serialization errors.
 * @brief JSON 解析和序列化错误的异常类型。
 *
 * Represents errors that occur during JSON operations,
 * such as parsing failures or serialization errors.
 * 表示 JSON 操作期间发生的错误，
 * 例如解析失败或序列化错误。
 */
    class JsonException : public std::runtime_error
    {
        public:
/**
 * @brief Constructs a JSON exception with a message.
 * @brief 使用消息构造 JSON 异常。
 *
 * @param Message Error message.
 *               错误消息。
 */
            explicit JsonException(const std::string& Message)
                : std::runtime_error(Message)
            {
            }
    };
}

#endif // TELEGRAMBOTAPI_JSON_HPP