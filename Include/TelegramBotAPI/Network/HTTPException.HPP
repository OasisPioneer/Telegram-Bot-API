#ifndef TELEGRAMBOTAPI_HTTPEXCEPTION_HPP
#define TELEGRAMBOTAPI_HTTPEXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace TelegramBotAPI::Network {
    enum class HTTPErrorType {
        Unknown,
        DNS,
        Connection,
        TLS,
        Timeout,
        Write,
        Read,
        HTTP
    };

    class HTTPException : public std::runtime_error {
        public:
            HTTPException(HTTPErrorType ErrorType, const std::string &Message)
                : std::runtime_error(Message), ErrorTypeValue(ErrorType) {}

            HTTPErrorType GetErrorType() const noexcept {
                return ErrorTypeValue;
            }

        private:
            HTTPErrorType ErrorTypeValue;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPEXCEPTION_HPP