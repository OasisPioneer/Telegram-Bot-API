#ifndef TELEGRAMBOTAPI_METHOD_GETUSERGIFTS_HPP
#define TELEGRAMBOTAPI_METHOD_GETUSERGIFTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/OwnedGifts.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Returns the gifts owned and hosted by a user. Returns OwnedGifts on success.

class getUserGifts {
    public:
        struct Parameters {
            // Pass True to exclude gifts that were assigned from the TON blockchain and can't be resold or transferred in Telegram
            std::optional<bool> ExcludeFromBlockchain{};

            // Pass True to exclude gifts that can be purchased a limited number of times and can't be upgraded to unique
            std::optional<bool> ExcludeLimitedNonUpgradable{};

            // Pass True to exclude gifts that can be purchased a limited number of times and can be upgraded to unique
            std::optional<bool> ExcludeLimitedUpgradable{};

            // Pass True to exclude unique gifts
            std::optional<bool> ExcludeUnique{};

            // Pass True to exclude gifts that can be purchased an unlimited number of times
            std::optional<bool> ExcludeUnlimited{};

            // The maximum number of gifts to be returned; 1-100. Defaults to 100.
            std::optional<long long> Limit{};

            // Offset of the first entry to return as received from the previous request; use an empty string to get the first chunk of results
            std::optional<std::string> Offset{};

            // Pass True to sort results by gift price instead of send date. Sorting is applied before pagination.
            std::optional<bool> SortByPrice{};

            // Unique identifier of the user
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ExcludeFromBlockchain.has_value()) {
                    Object["exclude_from_blockchain"] = JSON::ToJson(ExcludeFromBlockchain.value());
                }

                if (ExcludeLimitedNonUpgradable.has_value()) {
                    Object["exclude_limited_non_upgradable"] = JSON::ToJson(ExcludeLimitedNonUpgradable.value());
                }

                if (ExcludeLimitedUpgradable.has_value()) {
                    Object["exclude_limited_upgradable"] = JSON::ToJson(ExcludeLimitedUpgradable.value());
                }

                if (ExcludeUnique.has_value()) {
                    Object["exclude_unique"] = JSON::ToJson(ExcludeUnique.value());
                }

                if (ExcludeUnlimited.has_value()) {
                    Object["exclude_unlimited"] = JSON::ToJson(ExcludeUnlimited.value());
                }

                if (Limit.has_value()) {
                    Object["limit"] = JSON::ToJson(Limit.value());
                }

                if (Offset.has_value()) {
                    Object["offset"] = JSON::ToJson(Offset.value());
                }

                if (SortByPrice.has_value()) {
                    Object["sort_by_price"] = JSON::ToJson(SortByPrice.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (ExcludeFromBlockchain.has_value() && JSON::RequiresMultipart(ExcludeFromBlockchain.value())) || (ExcludeLimitedNonUpgradable.has_value() && JSON::RequiresMultipart(ExcludeLimitedNonUpgradable.value())) || (ExcludeLimitedUpgradable.has_value() && JSON::RequiresMultipart(ExcludeLimitedUpgradable.value())) || (ExcludeUnique.has_value() && JSON::RequiresMultipart(ExcludeUnique.value())) || (ExcludeUnlimited.has_value() && JSON::RequiresMultipart(ExcludeUnlimited.value())) || (Limit.has_value() && JSON::RequiresMultipart(Limit.value())) || (Offset.has_value() && JSON::RequiresMultipart(Offset.value())) || (SortByPrice.has_value() && JSON::RequiresMultipart(SortByPrice.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (ExcludeFromBlockchain.has_value()) {
                    JSON::AddMultipartField(
                        Form, "exclude_from_blockchain",
                        ExcludeFromBlockchain.value());
                }

                if (ExcludeLimitedNonUpgradable.has_value()) {
                    JSON::AddMultipartField(
                        Form, "exclude_limited_non_upgradable",
                        ExcludeLimitedNonUpgradable.value());
                }

                if (ExcludeLimitedUpgradable.has_value()) {
                    JSON::AddMultipartField(
                        Form, "exclude_limited_upgradable",
                        ExcludeLimitedUpgradable.value());
                }

                if (ExcludeUnique.has_value()) {
                    JSON::AddMultipartField(
                        Form, "exclude_unique",
                        ExcludeUnique.value());
                }

                if (ExcludeUnlimited.has_value()) {
                    JSON::AddMultipartField(
                        Form, "exclude_unlimited",
                        ExcludeUnlimited.value());
                }

                if (Limit.has_value()) {
                    JSON::AddMultipartField(
                        Form, "limit",
                        Limit.value());
                }

                if (Offset.has_value()) {
                    JSON::AddMultipartField(
                        Form, "offset",
                        Offset.value());
                }

                if (SortByPrice.has_value()) {
                    JSON::AddMultipartField(
                        Form, "sort_by_price",
                        SortByPrice.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit getUserGifts(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::OwnedGifts GetUserGifts(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::OwnedGifts>("getUserGifts",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::OwnedGifts>("getUserGifts",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::OwnedGifts GetUserGifts(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetUserGifts(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUSERGIFTS_HPP
