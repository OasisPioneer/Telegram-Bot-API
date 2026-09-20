#ifndef TELEGRAMBOTAPI_METHOD_EDITMESSAGELIVELOCATION_HPP
#define TELEGRAMBOTAPI_METHOD_EDITMESSAGELIVELOCATION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to edit live location messages. A location can be edited until its live_period expires or editing is explicitly disabled by a call to stopMessageLiveLocation. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.

class editMessageLiveLocation {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which the message to be edited was sent
            std::optional<std::string> BusinessConnectionID{};

            // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username.
            std::optional<std::variant<long long, std::string>> ChatID{};

            // Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
            std::optional<long long> Heading{};

            // The radius of uncertainty for the location, measured in meters; 0-1500
            std::optional<double> HorizontalAccuracy{};

            // Required if chat_id and message_id are not specified. Identifier of the inline message.
            std::optional<std::string> InlineMessageID{};

            // Latitude of new location
            double Latitude;

            // New period in seconds during which the location can be updated, starting from the message send date. If 0x7FFFFFFF is specified, then the location can be updated forever. Otherwise, the new value must not exceed the current live_period by more than a day, and the live location expiration date must remain within the next 90 days. If not specified, then live_period remains unchanged.
            std::optional<long long> LivePeriod{};

            // Longitude of new location
            double Longitude;

            // Required if inline_message_id is not specified. Identifier of the message to edit.
            std::optional<long long> MessageID{};

            // The maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
            std::optional<long long> ProximityAlertRadius{};

            // A JSON-serialized object for a new inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            Parameters(const double &LatitudeValue, const double &LongitudeValue)
                : Latitude(LatitudeValue), Longitude(LongitudeValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (BusinessConnectionID.has_value()) {
                    Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
                }

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                if (Heading.has_value()) {
                    Object["heading"] = JSON::ToJson(Heading.value());
                }

                if (HorizontalAccuracy.has_value()) {
                    Object["horizontal_accuracy"] = JSON::ToJson(HorizontalAccuracy.value());
                }

                if (InlineMessageID.has_value()) {
                    Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
                }

                Object["latitude"] = JSON::ToJson(Latitude);

                if (LivePeriod.has_value()) {
                    Object["live_period"] = JSON::ToJson(LivePeriod.value());
                }

                Object["longitude"] = JSON::ToJson(Longitude);

                if (MessageID.has_value()) {
                    Object["message_id"] = JSON::ToJson(MessageID.value());
                }

                if (ProximityAlertRadius.has_value()) {
                    Object["proximity_alert_radius"] = JSON::ToJson(ProximityAlertRadius.value());
                }

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (Heading.has_value() && JSON::RequiresMultipart(Heading.value())) || (HorizontalAccuracy.has_value() && JSON::RequiresMultipart(HorizontalAccuracy.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || JSON::RequiresMultipart(Latitude) || (LivePeriod.has_value() && JSON::RequiresMultipart(LivePeriod.value())) || JSON::RequiresMultipart(Longitude) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || (ProximityAlertRadius.has_value() && JSON::RequiresMultipart(ProximityAlertRadius.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (BusinessConnectionID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "business_connection_id",
                        BusinessConnectionID.value());
                }

                if (ChatID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "chat_id",
                        ChatID.value());
                }

                if (Heading.has_value()) {
                    JSON::AddMultipartField(
                        Form, "heading",
                        Heading.value());
                }

                if (HorizontalAccuracy.has_value()) {
                    JSON::AddMultipartField(
                        Form, "horizontal_accuracy",
                        HorizontalAccuracy.value());
                }

                if (InlineMessageID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "inline_message_id",
                        InlineMessageID.value());
                }

                JSON::AddMultipartField(
                    Form, "latitude",
                    Latitude);

                if (LivePeriod.has_value()) {
                    JSON::AddMultipartField(
                        Form, "live_period",
                        LivePeriod.value());
                }

                JSON::AddMultipartField(
                    Form, "longitude",
                    Longitude);

                if (MessageID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_id",
                        MessageID.value());
                }

                if (ProximityAlertRadius.has_value()) {
                    JSON::AddMultipartField(
                        Form, "proximity_alert_radius",
                        ProximityAlertRadius.value());
                }

                if (ReplyMarkup.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_markup",
                        ReplyMarkup.value());
                }

                return Form;
            }

        };

        explicit editMessageLiveLocation(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageLiveLocation(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>("editMessageLiveLocation",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>("editMessageLiveLocation",
                                      ParametersValue.ToJson());
        }

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageLiveLocation(double Latitude, double Longitude) {
            Parameters ParametersValue(
                Latitude,
                Longitude
            );

            return EditMessageLiveLocation(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITMESSAGELIVELOCATION_HPP
