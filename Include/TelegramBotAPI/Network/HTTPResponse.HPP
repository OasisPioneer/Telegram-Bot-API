#ifndef TELEGRAMBOTAPI_HTTPRESPONSE_HPP
#define TELEGRAMBOTAPI_HTTPRESPONSE_HPP

#include <string>
#include <vector>

#include "HTTPHeader.HPP"

namespace TelegramBotAPI::Network {
/**
 * @brief Represents an HTTP response.
 * @brief 表示 HTTP 响应。
 *
 * Contains all components of an HTTP response:
 * status code, reason, headers, and body.
 * 包含 HTTP 响应的所有组件：
 * 状态码、reason、headers 和 body。
 */
    class HTTPResponse {
        public:
/** HTTP status code. / HTTP 状态码。 */
            unsigned int            StatusCode{0};
/** Status reason phrase. / 状态 reason 短语。 */
            std::string             Reason{};
/** Status reason phrase (duplicate of Reason). / 状态 reason 短语（Reason 的副本）。 */
            std::string             ReasonPhrase{};
/** Response headers. / 响应头。 */
            std::vector<HTTPHeader> Headers{};
/** Response body. / 响应体。 */
            std::string             Body{};
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPRESPONSE_HPP