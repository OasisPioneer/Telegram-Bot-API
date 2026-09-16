#ifndef TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP
#define TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace TelegramBotAPI {
    class TelegramAPIException : public std::runtime_error {
        public:
            TelegramAPIException(int ErrorCode, const std::string &Description)
                : std::runtime_error(Description), ErrorCodeValue(ErrorCode),
                  DescriptionValue(Description) {}

            int GetErrorCode() const noexcept { return ErrorCodeValue; }

            const std::string &GetDescription() const noexcept {
                return DescriptionValue;
            }

        private:
            int         ErrorCodeValue;
            std::string DescriptionValue;
    };
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP