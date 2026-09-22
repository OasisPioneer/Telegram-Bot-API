#ifndef TELEGRAMBOTAPI_IHTTPCLIENT_HPP
#define TELEGRAMBOTAPI_IHTTPCLIENT_HPP

#include "TelegramBotAPI/Network/HTTPRequest.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"

namespace TelegramBotAPI::Network {
/**
 * @brief Abstract interface for HTTP clients.
 * @brief HTTP 客户端的抽象接口。
 *
 * Defines the contract for HTTP client implementations used by TelegramClient.
 * Allows custom HTTP implementations for testing or custom transports.
 * 定义 TelegramClient 使用的 HTTP 客户端实现的契约。
 * 允许自定义 HTTP 实现用于测试或自定义传输。
 */
    class IHTTPClient {
        public:
            virtual ~IHTTPClient() = default;

/**
 * @brief Performs an HTTPS request.
 * @brief 执行 HTTPS 请求。
 *
 * @param Request HTTP request to perform.
 *               要执行的 HTTP 请求。
 * @return HTTP response.
 *         HTTP 响应。
 */
            virtual HTTPResponse PerformHTTPS(
                const HTTPRequest &Request
            ) = 0;
    };
}

#endif // TELEGRAMBOTAPI_IHTTPCLIENT_HPP