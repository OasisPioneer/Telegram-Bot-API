#ifndef TELEGRAMBOTAPI_HTTPEXCEPTION_HPP
#define TELEGRAMBOTAPI_HTTPEXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace TelegramBotAPI::Network {
/**
 * @brief Exception type for HTTP client errors.
 * @brief HTTP 客户端错误的异常类型。
 *
 * Represents errors that occur during HTTP request execution,
 * including DNS resolution, connection, SSL, and I/O errors.
 * 表示 HTTP 请求执行期间发生的错误，
 * 包括 DNS 解析、连接、SSL 和 I/O 错误。
 */
    class HTTPException : public std::runtime_error {
        public:
/**
 * @brief Types of HTTP errors.
 * @brief HTTP 错误类型。
 */
            enum class ErrorType {
/** Unknown error. / 未知错误。 */
                Unknown,
/** DNS resolution failed. / DNS 解析失败。 */
                Resolve,
/** Connection failed. / 连接失败。 */
                Connect,
/** SSL/TLS error. / SSL/TLS 错误。 */
                SSL,
/** SSL handshake failed. / SSL 握手失败。 */
                Handshake,
/** Write operation failed. / 写操作失败。 */
                Write,
/** Read operation failed. / 读操作失败。 */
                Read,
/** Shutdown failed. / 关闭失败。 */
                Shutdown,
/** Invalid request. / 无效请求。 */
                InvalidRequest,
/** Unsupported HTTP scheme. / 不支持的 HTTP scheme。 */
                UnsupportedScheme
            };

/**
 * @brief Constructs an exception with a message.
 * @brief 使用消息构造异常。
 *
 * @param Message Error message.
 *               错误消息。
 */
            explicit HTTPException(const std::string &Message)
                : std::runtime_error(Message), Type(ErrorType::Unknown) {}

/**
 * @brief Constructs an exception with an error type and message.
 * @brief 使用错误类型和消息构造异常。
 *
 * @param TypeValue Error type.
 *                 错误类型。
 * @param Message   Error message.
 *                 错误消息。
 */
            HTTPException(ErrorType TypeValue, const std::string &Message)
                : std::runtime_error(Message), Type(TypeValue) {}

/**
 * @brief Returns the error type.
 * @brief 返回错误类型。
 *
 * @return Error type.
 *         错误类型。
 */
            ErrorType GetErrorType() const noexcept { return Type; }

        private:
            ErrorType Type;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPEXCEPTION_HPP