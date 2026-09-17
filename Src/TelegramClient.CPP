#include "TelegramBotAPI/TelegramClient.HPP"

#include <cstddef>
#include <string>

#include <boost/json.hpp>

namespace TelegramBotAPI {
    namespace {
        struct ParsedURL {
                std::string Scheme;
                std::string Host;
                std::string Port;
                std::string BasePath;
        };

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
                Result.BasePath = "";
            } else {
                Result.BasePath = URL.substr(PathPosition);

                while (Result.BasePath.size() > 1 &&
                       Result.BasePath.back() == '/') {
                    Result.BasePath.pop_back();
                }
            }

            return Result;
        }

        std::string NormalizeAPIURL(const std::string &URL) {
            if (URL.empty()) {
                return "https://api.telegram.org";
            }

            const ParsedURL Parsed = ParseAPIURL(URL);

            return Parsed.Scheme + "://" + Parsed.Host +
                   (((Parsed.Scheme == "https" && Parsed.Port == "443") ||
                     (Parsed.Scheme == "http" && Parsed.Port == "80"))
                        ? ""
                        : ":" + Parsed.Port) +
                   Parsed.BasePath;
        }
    } // namespace

    TelegramClient::TelegramClient(const std::string &BotTokenValue)
        : BotToken(BotTokenValue), APIURL("https://api.telegram.org"),
          HTTPClient() {
        if (BotToken.empty()) {
            throw TelegramAPIException(0, "Telegram Bot token cannot be empty");
        }
    }

    TelegramClient::TelegramClient(const std::string &BotTokenValue,
                                   const std::string &APIURLValue)
        : BotToken(BotTokenValue), APIURL(NormalizeAPIURL(APIURLValue)),
          HTTPClient() {
        if (BotToken.empty()) {
            throw TelegramAPIException(0, "Telegram Bot token cannot be empty");
        }
    }

    TelegramClient::TelegramClient(const std::string   &BotTokenValue,
                                   std::chrono::seconds Timeout)
        : BotToken(BotTokenValue), APIURL("https://api.telegram.org"),
          HTTPClient(Timeout) {
        if (BotToken.empty()) {
            throw TelegramAPIException(0, "Telegram Bot token cannot be empty");
        }
    }

    TelegramClient::TelegramClient(const std::string   &BotTokenValue,
                                   const std::string   &APIURLValue,
                                   std::chrono::seconds Timeout)
        : BotToken(BotTokenValue), APIURL(NormalizeAPIURL(APIURLValue)),
          HTTPClient(Timeout) {
        if (BotToken.empty()) {
            throw TelegramAPIException(0, "Telegram Bot token cannot be empty");
        }
    }

    Network::HTTPResponse
    TelegramClient::PerformRequest(const std::string  &Method,
                                   const JSON::Object &Parameters) {
        const ParsedURL Parsed = ParseAPIURL(APIURL);

        Network::HTTPRequest Request;

        Request.Scheme = Parsed.Scheme;

        Request.Host = Parsed.Host;

        Request.Port = Parsed.Port;

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

        return HTTPClient.PerformHTTPS(Request);
    }
} // namespace TelegramBotAPI