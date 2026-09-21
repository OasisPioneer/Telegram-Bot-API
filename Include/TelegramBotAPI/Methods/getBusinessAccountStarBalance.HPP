#ifndef TELEGRAMBOTAPI_METHOD_GETBUSINESSACCOUNTSTARBALANCE_HPP
#define TELEGRAMBOTAPI_METHOD_GETBUSINESSACCOUNTSTARBALANCE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/StarAmount.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Returns the amount of Telegram Stars owned by a managed business account. Requires the can_view_gifts_and_stars business bot right. Returns StarAmount on success.

struct getBusinessAccountStarBalanceParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    getBusinessAccountStarBalanceParameters(const std::string &BusinessConnectionIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        return Form;
    }

};

class getBusinessAccountStarBalance {
public:
    using Parameters = getBusinessAccountStarBalanceParameters;
    using ReturnType = ::TelegramBotAPI::Type::StarAmount;

    static constexpr const char *Name() noexcept {
        return "getBusinessAccountStarBalance";
    }

    explicit getBusinessAccountStarBalance(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::StarAmount GetBusinessAccountStarBalance(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::StarAmount>(
                "getBusinessAccountStarBalance",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::StarAmount>(
            "getBusinessAccountStarBalance",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::StarAmount GetBusinessAccountStarBalance(std::string BusinessConnectionID) {
        Parameters ParametersValue(
        BusinessConnectionID
        );

        return GetBusinessAccountStarBalance(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETBUSINESSACCOUNTSTARBALANCE_HPP
