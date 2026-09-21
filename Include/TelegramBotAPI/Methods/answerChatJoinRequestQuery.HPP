#ifndef TELEGRAMBOTAPI_METHOD_ANSWERCHATJOINREQUESTQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERCHATJOINREQUESTQUERY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to process a received chat join request query. Returns True on success.

struct answerChatJoinRequestQueryParameters {
    // Unique identifier of the join request query
    std::string ChatJoinRequestQueryID;

    // Result of the query. Must be either “approve” to allow the user to join the chat, “decline” to disallow the user to join the chat, or “queue” to leave the decision to other administrators.
    std::string Result;

    answerChatJoinRequestQueryParameters(const std::string &ChatJoinRequestQueryIDValue, const std::string &ResultValue)
        : ChatJoinRequestQueryID(ChatJoinRequestQueryIDValue), Result(ResultValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_join_request_query_id"] = JSON::ToJson(ChatJoinRequestQueryID);

        Object["result"] = JSON::ToJson(Result);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatJoinRequestQueryID) || JSON::RequiresMultipart(Result);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_join_request_query_id",
            ChatJoinRequestQueryID);

        JSON::AddMultipartField(
            Form, "result",
            Result);

        return Form;
    }

};

class answerChatJoinRequestQuery {
public:
    using Parameters = answerChatJoinRequestQueryParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "answerChatJoinRequestQuery";
    }

    explicit answerChatJoinRequestQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AnswerChatJoinRequestQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "answerChatJoinRequestQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "answerChatJoinRequestQuery",
            ParametersValue.ToJson()
        );
    }

    bool AnswerChatJoinRequestQuery(std::string ChatJoinRequestQueryID, std::string Result) {
        Parameters ParametersValue(
        ChatJoinRequestQueryID,
        Result
        );

        return AnswerChatJoinRequestQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERCHATJOINREQUESTQUERY_HPP
