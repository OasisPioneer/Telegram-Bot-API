#ifndef TELEGRAMBOTAPI_METHOD_TRANSFERBUSINESSACCOUNTSTARS_HPP
#define TELEGRAMBOTAPI_METHOD_TRANSFERBUSINESSACCOUNTSTARS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Transfers Telegram Stars from the business account balance to the bot's balance. Requires the can_transfer_stars business bot right. Returns True on success.

class transferBusinessAccountStars {
    public:
        struct Parameters {
            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Number of Telegram Stars to transfer; 1-10000
            long long StarCount;

            Parameters(const std::string &BusinessConnectionIDValue, const long long &StarCountValue)
                : BusinessConnectionID(BusinessConnectionIDValue), StarCount(StarCountValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["star_count"] = JSON::ToJson(StarCount);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(StarCount);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "star_count",
                    StarCount);

                return Form;
            }

        };

        explicit transferBusinessAccountStars(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool TransferBusinessAccountStars(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("transferBusinessAccountStars",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("transferBusinessAccountStars",
                                      ParametersValue.ToJson());
        }

        bool TransferBusinessAccountStars(std::string BusinessConnectionID, long long StarCount) {
            Parameters ParametersValue(
                BusinessConnectionID,
                StarCount
            );

            return TransferBusinessAccountStars(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_TRANSFERBUSINESSACCOUNTSTARS_HPP
