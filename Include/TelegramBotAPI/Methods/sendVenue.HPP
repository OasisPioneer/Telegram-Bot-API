#ifndef TELEGRAMBOTAPI_METHOD_SENDVENUE_HPP
#define TELEGRAMBOTAPI_METHOD_SENDVENUE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/EphemeralMessageParameters.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to send information about a venue. On success, the sent Message is returned.

class sendVenue {
    public:
        struct Parameters {
            // Address of the venue
            std::string Address;

            // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
            std::optional<bool> AllowPaidBroadcast{};

            // Unique identifier of the business connection on behalf of which the message will be sent
            std::optional<std::string> BusinessConnectionID{};

            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the direct messages topic to which the message will be sent; required if the message is sent to a direct messages chat
            std::optional<long long> DirectMessagesTopicID{};

            // Sends the message silently. Users will receive a notification with no sound.
            std::optional<bool> DisableNotification{};

            // A JSON-serialized object containing the parameters of the ephemeral message to send
            std::optional<::TelegramBotAPI::Type::EphemeralMessageParameters> EphemeralMessageParameters{};

            // Foursquare identifier of the venue
            std::optional<std::string> FoursquareID{};

            // Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
            std::optional<std::string> FoursquareType{};

            // Google Places identifier of the venue
            std::optional<std::string> GooglePlaceID{};

            // Google Places type of the venue. (See supported types.)
            std::optional<std::string> GooglePlaceType{};

            // Latitude of the venue
            double Latitude;

            // Longitude of the venue
            double Longitude;

            // Unique identifier of the message effect to be added to the message; for private chats only
            std::optional<std::string> MessageEffectID{};

            // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
            std::optional<long long> MessageThreadID{};

            // Protects the contents of the sent message from forwarding and saving
            std::optional<bool> ProtectContent{};

            // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user.
            std::optional<std::variant<::TelegramBotAPI::Type::InlineKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardRemove, ::TelegramBotAPI::Type::ForceReply>> ReplyMarkup{};

            // Description of the message to reply to
            std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

            // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only. If the message is sent as a reply to another suggested post, then that suggested post is automatically declined.
            std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

            // Name of the venue
            std::string Title;

            Parameters(const std::string &AddressValue, const std::variant<long long, std::string> &ChatIDValue, const double &LatitudeValue, const double &LongitudeValue, const std::string &TitleValue)
                : Address(AddressValue), ChatID(ChatIDValue), Latitude(LatitudeValue), Longitude(LongitudeValue), Title(TitleValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["address"] = JSON::ToJson(Address);

                if (AllowPaidBroadcast.has_value()) {
                    Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
                }

                if (BusinessConnectionID.has_value()) {
                    Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (DirectMessagesTopicID.has_value()) {
                    Object["direct_messages_topic_id"] = JSON::ToJson(DirectMessagesTopicID.value());
                }

                if (DisableNotification.has_value()) {
                    Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
                }

                if (EphemeralMessageParameters.has_value()) {
                    Object["ephemeral_message_parameters"] = JSON::ToJson(EphemeralMessageParameters.value());
                }

                if (FoursquareID.has_value()) {
                    Object["foursquare_id"] = JSON::ToJson(FoursquareID.value());
                }

                if (FoursquareType.has_value()) {
                    Object["foursquare_type"] = JSON::ToJson(FoursquareType.value());
                }

                if (GooglePlaceID.has_value()) {
                    Object["google_place_id"] = JSON::ToJson(GooglePlaceID.value());
                }

                if (GooglePlaceType.has_value()) {
                    Object["google_place_type"] = JSON::ToJson(GooglePlaceType.value());
                }

                Object["latitude"] = JSON::ToJson(Latitude);

                Object["longitude"] = JSON::ToJson(Longitude);

                if (MessageEffectID.has_value()) {
                    Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
                }

                if (MessageThreadID.has_value()) {
                    Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
                }

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                if (ReplyParameters.has_value()) {
                    Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
                }

                if (SuggestedPostParameters.has_value()) {
                    Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
                }

                Object["title"] = JSON::ToJson(Title);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(Address) || (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (EphemeralMessageParameters.has_value() && JSON::RequiresMultipart(EphemeralMessageParameters.value())) || (FoursquareID.has_value() && JSON::RequiresMultipart(FoursquareID.value())) || (FoursquareType.has_value() && JSON::RequiresMultipart(FoursquareType.value())) || (GooglePlaceID.has_value() && JSON::RequiresMultipart(GooglePlaceID.value())) || (GooglePlaceType.has_value() && JSON::RequiresMultipart(GooglePlaceType.value())) || JSON::RequiresMultipart(Latitude) || JSON::RequiresMultipart(Longitude) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value())) || JSON::RequiresMultipart(Title);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "address",
                    Address);

                if (AllowPaidBroadcast.has_value()) {
                    JSON::AddMultipartField(
                        Form, "allow_paid_broadcast",
                        AllowPaidBroadcast.value());
                }

                if (BusinessConnectionID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "business_connection_id",
                        BusinessConnectionID.value());
                }

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (DirectMessagesTopicID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "direct_messages_topic_id",
                        DirectMessagesTopicID.value());
                }

                if (DisableNotification.has_value()) {
                    JSON::AddMultipartField(
                        Form, "disable_notification",
                        DisableNotification.value());
                }

                if (EphemeralMessageParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "ephemeral_message_parameters",
                        EphemeralMessageParameters.value());
                }

                if (FoursquareID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "foursquare_id",
                        FoursquareID.value());
                }

                if (FoursquareType.has_value()) {
                    JSON::AddMultipartField(
                        Form, "foursquare_type",
                        FoursquareType.value());
                }

                if (GooglePlaceID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "google_place_id",
                        GooglePlaceID.value());
                }

                if (GooglePlaceType.has_value()) {
                    JSON::AddMultipartField(
                        Form, "google_place_type",
                        GooglePlaceType.value());
                }

                JSON::AddMultipartField(
                    Form, "latitude",
                    Latitude);

                JSON::AddMultipartField(
                    Form, "longitude",
                    Longitude);

                if (MessageEffectID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_effect_id",
                        MessageEffectID.value());
                }

                if (MessageThreadID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_thread_id",
                        MessageThreadID.value());
                }

                if (ProtectContent.has_value()) {
                    JSON::AddMultipartField(
                        Form, "protect_content",
                        ProtectContent.value());
                }

                if (ReplyMarkup.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_markup",
                        ReplyMarkup.value());
                }

                if (ReplyParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_parameters",
                        ReplyParameters.value());
                }

                if (SuggestedPostParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "suggested_post_parameters",
                        SuggestedPostParameters.value());
                }

                JSON::AddMultipartField(
                    Form, "title",
                    Title);

                return Form;
            }

        };

        explicit sendVenue(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Message SendVenue(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Message>("sendVenue",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Message>("sendVenue",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Message SendVenue(std::string Address, std::variant<long long, std::string> ChatID, double Latitude, double Longitude, std::string Title) {
            Parameters ParametersValue(
                Address,
                ChatID,
                Latitude,
                Longitude,
                Title
            );

            return SendVenue(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDVENUE_HPP
