#include "TelegramBotAPI/TelegramClient.HPP"

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"

namespace TelegramBotAPI {
    TelegramClient::TelegramClient(const std::string &BotTokenValue)
        : BotToken(BotTokenValue), HTTPClient() {
        if (BotToken.empty()) {
            throw TelegramAPIException(0, "Telegram Bot token cannot be empty");
        }
    }

    TelegramClient::TelegramClient(const std::string   &BotTokenValue,
                                   std::chrono::seconds Timeout)
        : BotToken(BotTokenValue), HTTPClient(Timeout) {
        if (BotToken.empty()) {
            throw TelegramAPIException(
                0, "Telegram API Bot token cannot be empty");
        }
    }

    Network::HTTPResponse
    TelegramClient::PerformRequest(const std::string  &Method,
                                   const JSON::Object &Parameters) {
        Network::HTTPRequest Request;

        Request.Host = "api.telegram.org";

        Request.Target = "/bot" + BotToken + "/" + Method;

        Request.Headers.push_back(Network::HTTPHeader{"Host", Request.Host});

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

    Type::User TelegramClient::GetMe() { return Call<Type::User>("getMe"); }
    Type::Chat TelegramClient::GetChat(long long ChatID) {
        JSON::Object Parameters;

        Parameters["chat_id"] = ChatID;

        return Call<Type::Chat>("getChat", Parameters);
    }
    std::vector<Type::Update>
    TelegramClient::GetUpdates(std::optional<long long> Offset,
                               std::optional<long long> Limit,
                               std::optional<long long> Timeout) {
        JSON::Object Parameters;

        if (Offset.has_value()) {
            Parameters["offset"] = Offset.value();
        }

        if (Limit.has_value()) {
            Parameters["limit"] = Limit.value();
        }

        if (Timeout.has_value()) {
            Parameters["timeout"] = Timeout.value();
        }

        return Call<std::vector<Type::Update>>("getUpdates", Parameters);
    }

    Type::Message TelegramClient::SendMessage(long long          ChatID,
                                              const std::string &Text) {
        JSON::Object Parameters;

        Parameters["chat_id"] = ChatID;
        Parameters["text"]    = Text;

        return Call<Type::Message>("sendMessage", Parameters);
    }
} // namespace TelegramBotAPI