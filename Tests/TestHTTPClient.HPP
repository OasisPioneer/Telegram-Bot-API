#ifndef TELEGRAMBOTAPI_TESTHTTPCLIENT_HPP
#define TELEGRAMBOTAPI_TESTHTTPCLIENT_HPP

#include "TelegramBotAPI/Network/IHTTPClient.HPP"

class TestHTTPClient
    : public TelegramBotAPI::Network::IHTTPClient {
    public:
        TelegramBotAPI::Network::HTTPResponse Response{};

        TelegramBotAPI::Network::HTTPRequest LastRequest{};

        unsigned int RequestCount{0};

        TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
            const TelegramBotAPI::Network::HTTPRequest &Request
        ) override {
            LastRequest = Request;

            ++RequestCount;

            return Response;
        }
};

#endif // TELEGRAMBOTAPI_TESTHTTPCLIENT_HPP