#ifndef TELEGRAMBOTAPI_TELEGRAMBOTAPIOFFSETTESTHTTPCLIENT_HPP
#define TELEGRAMBOTAPI_TELEGRAMBOTAPIOFFSETTESTHTTPCLIENT_HPP

#include <string>

#include "TelegramBotAPI/Network/IHTTPClient.HPP"

class TelegramBotAPIOffsetTestHTTPClient
    : public TelegramBotAPI::Network::IHTTPClient {
    public:
        TelegramBotAPI::Network::HTTPRequest LastRequest{};

        unsigned int RequestCount{0};

        TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
            const TelegramBotAPI::Network::HTTPRequest &Request
        ) override {
            LastRequest = Request;

            ++RequestCount;

            TelegramBotAPI::Network::HTTPResponse Response;

            Response.StatusCode = 200;
            Response.Reason = "OK";
            Response.ReasonPhrase = "OK";

            if (RequestCount == 1) {
                Response.Body =
                    R"({
                        "ok": true,
                        "result": [
                            {
                                "update_id": 1001,
                                "message": {
                                    "message_id": 2001,
                                    "date": 1750000000,
                                    "chat": {
                                        "id": 987654321,
                                        "type": "private"
                                    },
                                    "text": "First"
                                }
                            }
                        ]
                    })";
            } else if (RequestCount == 2) {
                Response.Body =
                    R"({
                        "ok": true,
                        "result": [
                            {
                                "update_id": 1002,
                                "message": {
                                    "message_id": 2002,
                                    "date": 1750000001,
                                    "chat": {
                                        "id": 987654321,
                                        "type": "private"
                                    },
                                    "text": "Second"
                                }
                            }
                        ]
                    })";
            } else {
                Response.Body =
                    R"({
                        "ok": true,
                        "result": []
                    })";
            }

            return Response;
        }
};

#endif // TELEGRAMBOTAPI_TELEGRAMBOTAPI_OFFSET_TEST_HTTP_CLIENT_HPP