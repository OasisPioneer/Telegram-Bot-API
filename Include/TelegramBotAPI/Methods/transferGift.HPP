#ifndef TELEGRAMBOTAPI_METHOD_TRANSFERGIFT_HPP
#define TELEGRAMBOTAPI_METHOD_TRANSFERGIFT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Transfers an owned unique gift to another user. Requires the can_transfer_and_upgrade_gifts business bot right. Requires can_transfer_stars business bot right if the transfer is paid. Returns True on success.

class transferGift {
    public:
        struct Parameters {
            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Unique identifier of the chat which will own the gift. The chat must be active in the last 24 hours.
            long long NewOwnerChatID;

            // Unique identifier of the regular gift that should be transferred
            std::string OwnedGiftID;

            // The amount of Telegram Stars that will be paid for the transfer from the business account balance. If positive, then the can_transfer_stars business bot right is required.
            std::optional<long long> StarCount{};

            Parameters(const std::string &BusinessConnectionIDValue, const long long &NewOwnerChatIDValue, const std::string &OwnedGiftIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue), NewOwnerChatID(NewOwnerChatIDValue), OwnedGiftID(OwnedGiftIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["new_owner_chat_id"] = JSON::ToJson(NewOwnerChatID);

                Object["owned_gift_id"] = JSON::ToJson(OwnedGiftID);

                if (StarCount.has_value()) {
                    Object["star_count"] = JSON::ToJson(StarCount.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(NewOwnerChatID) || JSON::RequiresMultipart(OwnedGiftID) || (StarCount.has_value() && JSON::RequiresMultipart(StarCount.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "new_owner_chat_id",
                    NewOwnerChatID);

                JSON::AddMultipartField(
                    Form, "owned_gift_id",
                    OwnedGiftID);

                if (StarCount.has_value()) {
                    JSON::AddMultipartField(
                        Form, "star_count",
                        StarCount.value());
                }

                return Form;
            }

        };

        explicit transferGift(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool TransferGift(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("transferGift",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("transferGift",
                                      ParametersValue.ToJson());
        }

        bool TransferGift(std::string BusinessConnectionID, long long NewOwnerChatID, std::string OwnedGiftID) {
            Parameters ParametersValue(
                BusinessConnectionID,
                NewOwnerChatID,
                OwnedGiftID
            );

            return TransferGift(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_TRANSFERGIFT_HPP
