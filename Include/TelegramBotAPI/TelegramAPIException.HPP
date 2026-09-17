#ifndef TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP
#define TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP

#include <optional>
#include <stdexcept>
#include <string>

#include "TelegramBotAPI/Types/ResponseParameters.HPP"

namespace TelegramBotAPI {
    class TelegramAPIException : public std::runtime_error {
        public:
            TelegramAPIException(int ErrorCode, const std::string &Description)
                : std::runtime_error(Description), ErrorCodeValue(ErrorCode),
                  DescriptionValue(Description) {}

            TelegramAPIException(
                int ErrorCode, const std::string &Description,
                const std::optional<Type::ResponseParameters> &Parameters)
                : std::runtime_error(Description), ErrorCodeValue(ErrorCode),
                  DescriptionValue(Description), ParametersValue(Parameters) {}

            int GetErrorCode() const noexcept { return ErrorCodeValue; }

            const std::string &GetDescription() const noexcept {
                return DescriptionValue;
            }

            const std::optional<Type::ResponseParameters> &
            GetParameters() const noexcept {
                return ParametersValue;
            }

        private:
            int         ErrorCodeValue;
            std::string DescriptionValue;

            std::optional<Type::ResponseParameters> ParametersValue;
    };
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP