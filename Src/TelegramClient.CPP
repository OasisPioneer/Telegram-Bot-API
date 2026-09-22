#include "TelegramBotAPI/TelegramClient.HPP"

#include <cstddef>
#include <string>

#include <boost/json.hpp>

namespace TelegramBotAPI {
    namespace {
// Helper structures for URL parsing / URL 解析的辅助结构
        struct ParsedURL {
                std::string Scheme;
                std::string Host;
                std::string Port;
                std::string BasePath;
        };

/**
 * @brief Parses a Telegram API URL into components.
 * @brief 将 Telegram API URL 解析为组件。
 *
 * @param URL URL to parse.
 *           要解析的 URL。
 * @return Parsed components.
 *         解析的组件。
 */
        ParsedURL ParseAPIURL(const std::string &URL) {
            ParsedURL Result;

            const std::size_t SchemePosition = URL.find("://");

            if (SchemePosition == std::string::npos) {
                throw TelegramAPIException(0,
                                           "Invalid Telegram API URL: " + URL);
            }

            Result.Scheme = URL.substr(0, SchemePosition);

            if (Result.Scheme != "http" && Result.Scheme != "https") {
                throw TelegramAPIException(
                    0, "Unsupported Telegram API URL scheme: " + Result.Scheme);
            }

            const std::size_t AuthorityStart = SchemePosition + 3;

            if (AuthorityStart >= URL.size()) {
                throw TelegramAPIException(
                    0, "Telegram API URL host cannot be empty");
            }

            const std::size_t PathPosition = URL.find('/', AuthorityStart);

            const std::string Authority =
                PathPosition == std::string::npos
                    ? URL.substr(AuthorityStart)
                    : URL.substr(AuthorityStart, PathPosition - AuthorityStart);

            if (Authority.empty()) {
                throw TelegramAPIException(
                    0, "Telegram API URL host cannot be empty");
            }

            if (Authority.front() == '[') {
                const std::size_t IPv6End = Authority.find(']');

                if (IPv6End == std::string::npos) {
                    throw TelegramAPIException(
                        0, "Invalid IPv6 Telegram API URL: " + URL);
                }

                Result.Host = Authority.substr(0, IPv6End + 1);

                if (IPv6End + 1 < Authority.size()) {
                    if (Authority[IPv6End + 1] != ':') {
                        throw TelegramAPIException(
                            0, "Invalid Telegram API URL: " + URL);
                    }

                    Result.Port = Authority.substr(IPv6End + 2);
                }
            } else {
                const std::size_t PortPosition = Authority.rfind(':');

                if (PortPosition != std::string::npos &&
                    Authority.find(':') == PortPosition) {
                    Result.Host = Authority.substr(0, PortPosition);

                    Result.Port = Authority.substr(PortPosition + 1);
                } else {
                    Result.Host = Authority;
                }
            }

            if (Result.Host.empty()) {
                throw TelegramAPIException(
                    0, "Telegram API URL host cannot be empty");
            }

            if (Result.Port.empty()) {
                if (Result.Scheme == "https") {
                    Result.Port = "443";
                } else {
                    Result.Port = "80";
                }
            }

            if (PathPosition == std::string::npos) {
                Result.BasePath.clear();
            } else {
                Result.BasePath = URL.substr(PathPosition);

                while (Result.BasePath.size() > 1 &&
                       Result.BasePath.back() == '/') {
                    Result.BasePath.pop_back();
                }
            }

            return Result;
        }

/**
 * @brief Normalizes a Telegram API URL.
 * @brief 规范化 Telegram API URL。
 *
 * Removes default ports and ensures proper format.
 * 移除默认端口并确保格式正确。
 *
 * @param URL URL to normalize.
 *           要规范化的 URL。
 * @return Normalized URL.
 *         规范化的 URL。
 */
        std::string NormalizeAPIURL(const std::string &URL) {
            if (URL.empty()) {
                return "https://api.telegram.org";
            }

            const ParsedURL Parsed = ParseAPIURL(URL);

            const bool IsDefaultPort =
                (Parsed.Scheme == "https" && Parsed.Port == "443") ||
                (Parsed.Scheme == "http" && Parsed.Port == "80");

            return Parsed.Scheme + "://" + Parsed.Host +
                   (IsDefaultPort ? "" : ":" + Parsed.Port) + Parsed.BasePath;
        }

/**
 * @brief Validates that a bot token is non-empty.
 * @brief 验证 Bot Token 非空。
 *
 * @param BotToken Bot token to validate.
 *                 要验证的 Bot Token。
 */
        void ValidateBotToken(const std::string &BotToken) {
            if (BotToken.empty()) {
                throw TelegramAPIException(
                    0, "Telegram Bot token cannot be empty");
            }
        }
    } // namespace

// Constructor implementations / 构造函数实现
    TelegramClient::TelegramClient(const std::string &BotTokenValue)
        : BotToken(BotTokenValue), APIURL("https://api.telegram.org"),
          DefaultHTTPClient(), HTTPClient(&DefaultHTTPClient) {
        ValidateBotToken(BotToken);
    }

    TelegramClient::TelegramClient(const std::string &BotTokenValue,
                                   const std::string &APIURLValue)
        : BotToken(BotTokenValue), APIURL(NormalizeAPIURL(APIURLValue)),
          DefaultHTTPClient(), HTTPClient(&DefaultHTTPClient) {
        ValidateBotToken(BotToken);
    }

    TelegramClient::TelegramClient(const std::string   &BotTokenValue,
                                   std::chrono::seconds Timeout)
        : BotToken(BotTokenValue), APIURL("https://api.telegram.org"),
          DefaultHTTPClient(Timeout), HTTPClient(&DefaultHTTPClient) {
        ValidateBotToken(BotToken);
    }

    TelegramClient::TelegramClient(const std::string   &BotTokenValue,
                                   const std::string   &APIURLValue,
                                   std::chrono::seconds Timeout)
        : BotToken(BotTokenValue), APIURL(NormalizeAPIURL(APIURLValue)),
          DefaultHTTPClient(Timeout), HTTPClient(&DefaultHTTPClient) {
        ValidateBotToken(BotToken);
    }

    TelegramClient::TelegramClient(const std::string    &BotTokenValue,
                                   Network::IHTTPClient &HTTPClientValue)
        : BotToken(BotTokenValue), APIURL("https://api.telegram.org"),
          DefaultHTTPClient(), HTTPClient(&HTTPClientValue) {
        ValidateBotToken(BotToken);
    }

    TelegramClient::TelegramClient(const std::string    &BotTokenValue,
                                   const std::string    &APIURLValue,
                                   Network::IHTTPClient &HTTPClientValue)
        : BotToken(BotTokenValue), APIURL(NormalizeAPIURL(APIURLValue)),
          DefaultHTTPClient(), HTTPClient(&HTTPClientValue) {
        ValidateBotToken(BotToken);
    }

// HTTP request construction / HTTP 请求构造
/**
 * @brief Performs an HTTP request with JSON parameters.
 * @brief 使用 JSON 参数执行 HTTP 请求。
 *
 * Constructs an HTTP request with the method name and JSON-encoded parameters.
 * GET is used for empty parameters, POST with JSON body otherwise.
 * 使用方法名称和 JSON 编码的参数构造 HTTP 请求。
 * 空参数使用 GET，否则使用 POST 和 JSON 请求体。
 *
 * @param Method     API method name.
 *                   API 方法名称。
 * @param Parameters JSON object containing method parameters.
 *                   包含方法参数的 JSON 对象。
 * @return HTTP response.
 *         HTTP 响应。
 */
    Network::HTTPResponse
    TelegramClient::PerformRequest(const std::string  &Method,
                                   const JSON::Object &Parameters) {
        const ParsedURL Parsed = ParseAPIURL(APIURL);

        Network::HTTPRequest Request;

        Request.Scheme = Parsed.Scheme;
        Request.Host   = Parsed.Host;
        Request.Port   = Parsed.Port;

        Request.Target = Parsed.BasePath + "/bot" + BotToken + "/" + Method;

        Request.Headers.push_back(Network::HTTPHeader{"Host", Parsed.Host});

        Request.Headers.push_back(
            Network::HTTPHeader{"User-Agent", "TelegramBotAPI-Cpp/0.1"});

        Request.Headers.push_back(
            Network::HTTPHeader{"Accept", "application/json"});

        if (Parameters.empty()) {
            Request.Method = "GET";
        } else {
            Request.Method = "POST";

            Request.Headers.push_back(
                Network::HTTPHeader{"Content-Type", "application/json"});

            Request.Body = boost::json::serialize(Parameters);
        }

        return HTTPClient->PerformHTTPS(Request);
    }

/**
 * @brief Performs an HTTP request with multipart/form-data.
 * @brief 使用 multipart/form-data 执行 HTTP 请求。
 *
 * Used for file uploads and other multipart requests.
 * 用于文件上传和其他 multipart 请求。
 *
 * @param Method API method name.
 *              API 方法名称。
 * @param Form   Multipart form containing fields and files.
 *               包含字段和文件的 multipart 表单。
 * @return HTTP response.
 *         HTTP 响应。
 */
    Network::HTTPResponse TelegramClient::PerformMultipartRequest(
        const std::string                       &Method,
        const Network::Multipart::MultipartForm &Form) {
        const ParsedURL Parsed = ParseAPIURL(APIURL);

        Network::HTTPRequest Request;

        Request.Scheme = Parsed.Scheme;
        Request.Host   = Parsed.Host;
        Request.Port   = Parsed.Port;

        Request.Target = Parsed.BasePath + "/bot" + BotToken + "/" + Method;

        Request.Method = "POST";

        Request.Headers.push_back(Network::HTTPHeader{"Host", Parsed.Host});

        Request.Headers.push_back(
            Network::HTTPHeader{"User-Agent", "TelegramBotAPI-Cpp/0.1"});

        Request.Headers.push_back(
            Network::HTTPHeader{"Accept", "application/json"});

        Request.Headers.push_back(
            Network::HTTPHeader{"Content-Type", Form.GetContentType()});

        Request.Body = Form.Build();

        return HTTPClient->PerformHTTPS(Request);
    }
} // namespace TelegramBotAPI
#include "TelegramBotAPI/TelegramClientMethods.TPP"
