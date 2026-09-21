#ifndef TELEGRAMBOTAPI_METHOD_REFUNDSTARPAYMENT_HPP
#define TELEGRAMBOTAPI_METHOD_REFUNDSTARPAYMENT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Refunds a successful payment in Telegram Stars. Returns True on success.

struct refundStarPaymentParameters {
    // Telegram payment identifier
    std::string TelegramPaymentChargeID;

    // Identifier of the user whose payment will be refunded
    long long UserID;

    refundStarPaymentParameters(const std::string &TelegramPaymentChargeIDValue, const long long &UserIDValue)
        : TelegramPaymentChargeID(TelegramPaymentChargeIDValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["telegram_payment_charge_id"] = JSON::ToJson(TelegramPaymentChargeID);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(TelegramPaymentChargeID) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "telegram_payment_charge_id",
            TelegramPaymentChargeID);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class refundStarPayment {
public:
    using Parameters = refundStarPaymentParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "refundStarPayment";
    }

    explicit refundStarPayment(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool RefundStarPayment(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "refundStarPayment",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "refundStarPayment",
            ParametersValue.ToJson()
        );
    }

    bool RefundStarPayment(std::string TelegramPaymentChargeID, long long UserID) {
        Parameters ParametersValue(
        TelegramPaymentChargeID,
        UserID
        );

        return RefundStarPayment(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REFUNDSTARPAYMENT_HPP
