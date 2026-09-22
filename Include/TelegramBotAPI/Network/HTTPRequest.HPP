#ifndef TELEGRAMBOTAPI_HTTPREQUEST_HPP
#define TELEGRAMBOTAPI_HTTPREQUEST_HPP

#include <string>
#include <vector>

#include "HTTPHeader.HPP"

namespace TelegramBotAPI::Network {
/**
 * @brief Represents an HTTP request.
 * @brief 表示 HTTP 请求。
 *
 * Contains all components needed to construct an HTTP request:
 * scheme, host, port, target, method, headers, and body.
 * 包含构造 HTTP 请求所需的所有组件：
 * scheme、host、port、target、method、headers 和 body。
 */
    class HTTPRequest {
        public:
/** HTTP scheme (http or https). / HTTP scheme（http 或 https）。 */
            std::string Scheme = "https";
/** Target host name or IP address. / 目标主机名或 IP 地址。 */
            std::string Host{};
/** Target port number. / 目标端口号。 */
            std::string Port = "443";
/** Request target path. / 请求目标路径。 */
            std::string Target{"/"};
/** HTTP method (GET, POST, etc.). / HTTP 方法（GET、POST 等）。 */
            std::string Method{"GET"};

/** Request headers. / 请求头。 */
            std::vector<HTTPHeader> Headers{};

/** Request body. / 请求体。 */
            std::string Body{};
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPREQUEST_HPP