#ifndef TELEGRAMBOTAPI_HTTPCLIENT_HPP
#define TELEGRAMBOTAPI_HTTPCLIENT_HPP

#include <chrono>

#include "HTTPRequest.HPP"
#include "HTTPResponse.HPP"
#include "IHTTPClient.HPP"

namespace TelegramBotAPI::Network {
/**
 * @brief Default HTTP client implementation using Boost.Beast and Boost.Asio.
 * @brief 使用 Boost.Beast 和 Boost.Asio 的默认 HTTP 客户端实现。
 *
 * Implements HTTPS requests with TLS support via OpenSSL.
 * Supports configurable request timeouts.
 * 通过 OpenSSL 实现支持 TLS 的 HTTPS 请求。
 * 支持可配置的请求超时。
 */
    class HTTPClient : public IHTTPClient {
        public:
/**
 * @brief Constructs an HTTP client with default 30-second timeout.
 * @brief 构造具有默认 30 秒超时的 HTTP 客户端。
 */
            HTTPClient();

/**
 * @brief Constructs an HTTP client with a custom timeout.
 * @brief 构造具有自定义超时的 HTTP 客户端。
 *
 * @param Timeout Request timeout duration.
 *               请求超时时长。
 */
            explicit HTTPClient(std::chrono::seconds Timeout);

/**
 * @brief Performs an HTTPS request.
 * @brief 执行 HTTPS 请求。
 *
 * @param Request HTTP request to perform.
 *               要执行的 HTTP 请求。
 * @return HTTP response.
 *         HTTP 响应。
 */
            HTTPResponse PerformHTTPS(const HTTPRequest &Request) override;

        private:
            std::chrono::seconds Timeout;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPCLIENT_HPP