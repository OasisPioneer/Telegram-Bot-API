#ifndef TELEGRAMBOTAPI_METHOD_SENDCHATJOINREQUESTWEBAPP_HPP
#define TELEGRAMBOTAPI_METHOD_SENDCHATJOINREQUESTWEBAPP_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to process a received chat join request query by showing a Mini App to the user before deciding the outcome. Call answerChatJoinRequestQuery to resolve the join request query based on the user interaction with the Mini App. Returns True on success.

struct sendChatJoinRequestWebAppParameters {
    // Unique identifier of the join request query
    std::string ChatJoinRequestQueryID;

    // An HTTPS URL of a Web App to be opened with additional data as specified in Initializing Web Apps
    std::string WebAppURL;

    sendChatJoinRequestWebAppParameters(const std::string &ChatJoinRequestQueryIDValue, const std::string &WebAppURLValue)
        : ChatJoinRequestQueryID(ChatJoinRequestQueryIDValue), WebAppURL(WebAppURLValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_join_request_query_id"] = JSON::ToJson(ChatJoinRequestQueryID);

        Object["web_app_url"] = JSON::ToJson(WebAppURL);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatJoinRequestQueryID) || JSON::RequiresMultipart(WebAppURL);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_join_request_query_id",
            ChatJoinRequestQueryID);

        JSON::AddMultipartField(
            Form, "web_app_url",
            WebAppURL);

        return Form;
    }

};

class sendChatJoinRequestWebApp {
public:
    using Parameters = sendChatJoinRequestWebAppParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "sendChatJoinRequestWebApp";
    }

    explicit sendChatJoinRequestWebApp(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SendChatJoinRequestWebApp(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "sendChatJoinRequestWebApp",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "sendChatJoinRequestWebApp",
            ParametersValue.ToJson()
        );
    }

    bool SendChatJoinRequestWebApp(std::string ChatJoinRequestQueryID, std::string WebAppURL) {
        Parameters ParametersValue(
        ChatJoinRequestQueryID,
        WebAppURL
        );

        return SendChatJoinRequestWebApp(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDCHATJOINREQUESTWEBAPP_HPP
