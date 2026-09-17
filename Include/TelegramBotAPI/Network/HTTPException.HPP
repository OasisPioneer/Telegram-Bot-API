#ifndef TELEGRAMBOTAPI_HTTPEXCEPTION_HPP
#define TELEGRAMBOTAPI_HTTPEXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace TelegramBotAPI::Network {
    class HTTPException : public std::runtime_error {
        public:
            enum class ErrorType {
                Unknown,
                Resolve,
                Connect,
                SSL,
                Handshake,
                Write,
                Read,
                Shutdown,
                InvalidRequest,
                UnsupportedScheme
            };

            explicit HTTPException(const std::string &Message)
                : std::runtime_error(Message), Type(ErrorType::Unknown) {}

            HTTPException(ErrorType TypeValue, const std::string &Message)
                : std::runtime_error(Message), Type(TypeValue) {}

            ErrorType GetErrorType() const noexcept { return Type; }

        private:
            ErrorType Type;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPEXCEPTION_HPP