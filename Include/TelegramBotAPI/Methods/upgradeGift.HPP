#ifndef TELEGRAMBOTAPI_METHOD_UPGRADEGIFT_HPP
#define TELEGRAMBOTAPI_METHOD_UPGRADEGIFT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Upgrades a given regular gift to a unique gift. Requires the can_transfer_and_upgrade_gifts business bot right. Additionally requires the can_transfer_stars business bot right if the upgrade is paid. Returns True on success.

class upgradeGift {
    public:
        struct Parameters {
            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Pass True to keep the original gift text, sender and receiver in the upgraded gift
            std::optional<bool> KeepOriginalDetails{};

            // Unique identifier of the regular gift that should be upgraded to a unique one
            std::string OwnedGiftID;

            // The amount of Telegram Stars that will be paid for the upgrade from the business account balance. If gift.prepaid_upgrade_star_count > 0, then pass 0, otherwise, the can_transfer_stars business bot right is required and gift.upgrade_star_count must be passed.
            std::optional<long long> StarCount{};

            Parameters(const std::string &BusinessConnectionIDValue, const std::string &OwnedGiftIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue), OwnedGiftID(OwnedGiftIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                if (KeepOriginalDetails.has_value()) {
                    Object["keep_original_details"] = JSON::ToJson(KeepOriginalDetails.value());
                }

                Object["owned_gift_id"] = JSON::ToJson(OwnedGiftID);

                if (StarCount.has_value()) {
                    Object["star_count"] = JSON::ToJson(StarCount.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || (KeepOriginalDetails.has_value() && JSON::RequiresMultipart(KeepOriginalDetails.value())) || JSON::RequiresMultipart(OwnedGiftID) || (StarCount.has_value() && JSON::RequiresMultipart(StarCount.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                if (KeepOriginalDetails.has_value()) {
                    JSON::AddMultipartField(
                        Form, "keep_original_details",
                        KeepOriginalDetails.value());
                }

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

        explicit upgradeGift(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool UpgradeGift(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("upgradeGift",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("upgradeGift",
                                      ParametersValue.ToJson());
        }

        bool UpgradeGift(std::string BusinessConnectionID, std::string OwnedGiftID) {
            Parameters ParametersValue(
                BusinessConnectionID,
                OwnedGiftID
            );

            return UpgradeGift(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UPGRADEGIFT_HPP
