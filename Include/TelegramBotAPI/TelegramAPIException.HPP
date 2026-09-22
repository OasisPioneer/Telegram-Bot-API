#ifndef TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP
#define TELEGRAMBOTAPI_TELEGRAMAPIEXCEPTION_HPP

#include <optional>
#include <stdexcept>
#include <string>

#include "TelegramBotAPI/Types/ResponseParameters.HPP"

namespace TelegramBotAPI {
/**
 * @brief Exception type for Telegram API errors.
 * @brief Telegram API 错误的异常类型。
 *
 * Represents errors returned by the Telegram Bot API, including error code,
 * description, and optional response parameters (e.g., retry_after, migrate_to_chat_id).
 * 表示 Telegram Bot API 返回的错误，包括错误代码、描述和可选的响应参数
 *（例如 retry_after、migrate_to_chat_id）。
 */
    class TelegramAPIException : public std::runtime_error {
        public:
/**
 * @brief Constructs an exception with error code and description.
 * @brief 使用错误代码和描述构造异常。
 *
 * @param ErrorCode    Telegram API error code.
 *                     Telegram API 错误代码。
 * @param Description  Error description.
 *                     错误描述。
 */
            TelegramAPIException(int ErrorCode, const std::string &Description)
                : std::runtime_error(Description), ErrorCodeValue(ErrorCode),
                  DescriptionValue(Description) {}

/**
 * @brief Constructs an exception with error code, description, and response parameters.
 * @brief 使用错误代码、描述和响应参数构造异常。
 *
 * @param ErrorCode    Telegram API error code.
 *                     Telegram API 错误代码。
 * @param Description  Error description.
 *                     错误描述。
 * @param Parameters   Optional response parameters (e.g., retry_after, migrate_to_chat_id).
 *                     可选的响应参数（例如 retry_after、migrate_to_chat_id）。
 */
            TelegramAPIException(
                int ErrorCode, const std::string &Description,
                const std::optional<Type::ResponseParameters> &Parameters)
                : std::runtime_error(Description), ErrorCodeValue(ErrorCode),
                  DescriptionValue(Description), ParametersValue(Parameters) {}

/**
 * @brief Returns the Telegram API error code.
 * @brief 返回 Telegram API 错误代码。
 *
 * @return Error code.
 *         错误代码。
 */
            int GetErrorCode() const noexcept { return ErrorCodeValue; }

/**
 * @brief Returns the error description.
 * @brief 返回错误描述。
 *
 * @return Error description.
 *         错误描述。
 */
            const std::string &GetDescription() const noexcept {
                return DescriptionValue;
            }

/**
 * @brief Returns the optional response parameters.
 * @brief 返回可选的响应参数。
 *
 * @return Optional response parameters.
 *         可选的响应参数。
 */
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