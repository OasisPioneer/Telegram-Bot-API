#ifndef TELEGRAMBOTAPI_METHOD_SENDPOLL_HPP
#define TELEGRAMBOTAPI_METHOD_SENDPOLL_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaLocation.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVenue.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/InputPollOption.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to send a native poll. On success, the sent Message is returned.

struct sendPollParameters {
    // Pass True if answer options can be added to the poll after creation; not supported for anonymous polls and quizzes
    std::optional<bool> AllowAddingOptions{};

    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
    std::optional<bool> AllowPaidBroadcast{};

    // Pass True if the poll allows multiple answers, defaults to False
    std::optional<bool> AllowsMultipleAnswers{};

    // Pass True if the poll allows to change chosen answer options, defaults to False for quizzes and to True for regular polls
    std::optional<bool> AllowsRevoting{};

    // Unique identifier of the business connection on behalf of which the message will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username. Polls can't be sent to channel direct messages chats.
    std::variant<long long, std::string> ChatID;

    // Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 2628000 seconds in the future. Can't be used together with open_period.
    std::optional<long long> CloseDate{};

    // A JSON-serialized list of monotonically increasing 0-based identifiers of the correct answer options, required for polls in quiz mode
    std::optional<std::vector<long long>> CorrectOptionIDs{};

    // A JSON-serialized list of 0-12 two-letter ISO 3166-1 alpha-2 country codes indicating the countries from which users can vote in the poll; for channel chats only. Use “FT” as a country code to allow users with anonymous numbers to vote. If omitted or empty, then users from any country can participate in the poll.
    std::optional<std::vector<std::string>> CountryCodes{};

    // Description of the poll to be sent, 0-1024 characters after entities parsing
    std::optional<std::string> Description{};

    // A JSON-serialized list of special entities that appear in the poll description, which can be specified instead of description_parse_mode
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> DescriptionEntities{};

    // Mode for parsing entities in the poll description. See formatting options for more details.
    std::optional<std::string> DescriptionParseMode{};

    // Sends the message silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
    std::optional<std::string> Explanation{};

    // A JSON-serialized list of special entities that appear in the poll explanation. It can be specified instead of explanation_parse_mode.
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> ExplanationEntities{};

    // Media added to the quiz explanation
    std::optional<std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo>> ExplanationMedia{};

    // Mode for parsing entities in the explanation. See formatting options for more details.
    std::optional<std::string> ExplanationParseMode{};

    // Pass True if poll results must be shown only after the poll closes
    std::optional<bool> HideResultsUntilCloses{};

    // True, if the poll needs to be anonymous, defaults to True
    std::optional<bool> IsAnonymous{};

    // Pass True if the poll needs to be immediately closed. This can be useful for poll preview.
    std::optional<bool> IsClosed{};

    // Media added to the poll description
    std::optional<std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo>> Media{};

    // Pass True if voting is limited to users who have been members of the chat where the poll is being sent for more than 24 hours; for channel chats only
    std::optional<bool> MembersOnly{};

    // Unique identifier of the message effect to be added to the message; for private chats only
    std::optional<std::string> MessageEffectID{};

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Amount of time in seconds the poll will be active after creation, 5-2628000. Can't be used together with close_date.
    std::optional<long long> OpenPeriod{};

    // A JSON-serialized list of 1-12 answer options
    std::vector<::TelegramBotAPI::Type::InputPollOption> Options;

    // Protects the contents of the sent message from forwarding and saving
    std::optional<bool> ProtectContent{};

    // Poll question, 1-300 characters
    std::string Question;

    // A JSON-serialized list of special entities that appear in the poll question. It can be specified instead of question_parse_mode.
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> QuestionEntities{};

    // Mode for parsing entities in the question. See formatting options for more details. Currently, only custom emoji entities are allowed.
    std::optional<std::string> QuestionParseMode{};

    // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user.
    std::optional<std::variant<::TelegramBotAPI::Type::InlineKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardRemove, ::TelegramBotAPI::Type::ForceReply>> ReplyMarkup{};

    // Description of the message to reply to
    std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

    // Pass True if the poll options must be shown in random order
    std::optional<bool> ShuffleOptions{};

    // Poll type, “quiz” or “regular”, defaults to “regular”
    std::optional<std::string> Type{};

    sendPollParameters(const std::variant<long long, std::string> &ChatIDValue, const std::vector<::TelegramBotAPI::Type::InputPollOption> &OptionsValue, const std::string &QuestionValue)
        : ChatID(ChatIDValue), Options(OptionsValue), Question(QuestionValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowAddingOptions.has_value()) {
            Object["allow_adding_options"] = JSON::ToJson(AllowAddingOptions.value());
        }

        if (AllowPaidBroadcast.has_value()) {
            Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
        }

        if (AllowsMultipleAnswers.has_value()) {
            Object["allows_multiple_answers"] = JSON::ToJson(AllowsMultipleAnswers.value());
        }

        if (AllowsRevoting.has_value()) {
            Object["allows_revoting"] = JSON::ToJson(AllowsRevoting.value());
        }

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (CloseDate.has_value()) {
            Object["close_date"] = JSON::ToJson(CloseDate.value());
        }

        if (CorrectOptionIDs.has_value()) {
            Object["correct_option_ids"] = JSON::ToJson(CorrectOptionIDs.value());
        }

        if (CountryCodes.has_value()) {
            Object["country_codes"] = JSON::ToJson(CountryCodes.value());
        }

        if (Description.has_value()) {
            Object["description"] = JSON::ToJson(Description.value());
        }

        if (DescriptionEntities.has_value()) {
            Object["description_entities"] = JSON::ToJson(DescriptionEntities.value());
        }

        if (DescriptionParseMode.has_value()) {
            Object["description_parse_mode"] = JSON::ToJson(DescriptionParseMode.value());
        }

        if (DisableNotification.has_value()) {
            Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
        }

        if (Explanation.has_value()) {
            Object["explanation"] = JSON::ToJson(Explanation.value());
        }

        if (ExplanationEntities.has_value()) {
            Object["explanation_entities"] = JSON::ToJson(ExplanationEntities.value());
        }

        if (ExplanationMedia.has_value()) {
            Object["explanation_media"] = JSON::ToJson(ExplanationMedia.value());
        }

        if (ExplanationParseMode.has_value()) {
            Object["explanation_parse_mode"] = JSON::ToJson(ExplanationParseMode.value());
        }

        if (HideResultsUntilCloses.has_value()) {
            Object["hide_results_until_closes"] = JSON::ToJson(HideResultsUntilCloses.value());
        }

        if (IsAnonymous.has_value()) {
            Object["is_anonymous"] = JSON::ToJson(IsAnonymous.value());
        }

        if (IsClosed.has_value()) {
            Object["is_closed"] = JSON::ToJson(IsClosed.value());
        }

        if (Media.has_value()) {
            Object["media"] = JSON::ToJson(Media.value());
        }

        if (MembersOnly.has_value()) {
            Object["members_only"] = JSON::ToJson(MembersOnly.value());
        }

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        if (OpenPeriod.has_value()) {
            Object["open_period"] = JSON::ToJson(OpenPeriod.value());
        }

        Object["options"] = JSON::ToJson(Options);

        if (ProtectContent.has_value()) {
            Object["protect_content"] = JSON::ToJson(ProtectContent.value());
        }

        Object["question"] = JSON::ToJson(Question);

        if (QuestionEntities.has_value()) {
            Object["question_entities"] = JSON::ToJson(QuestionEntities.value());
        }

        if (QuestionParseMode.has_value()) {
            Object["question_parse_mode"] = JSON::ToJson(QuestionParseMode.value());
        }

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        if (ReplyParameters.has_value()) {
            Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
        }

        if (ShuffleOptions.has_value()) {
            Object["shuffle_options"] = JSON::ToJson(ShuffleOptions.value());
        }

        if (Type.has_value()) {
            Object["type"] = JSON::ToJson(Type.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowAddingOptions.has_value() && JSON::RequiresMultipart(AllowAddingOptions.value())) || (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (AllowsMultipleAnswers.has_value() && JSON::RequiresMultipart(AllowsMultipleAnswers.value())) || (AllowsRevoting.has_value() && JSON::RequiresMultipart(AllowsRevoting.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (CloseDate.has_value() && JSON::RequiresMultipart(CloseDate.value())) || (CorrectOptionIDs.has_value() && JSON::RequiresMultipart(CorrectOptionIDs.value())) || (CountryCodes.has_value() && JSON::RequiresMultipart(CountryCodes.value())) || (Description.has_value() && JSON::RequiresMultipart(Description.value())) || (DescriptionEntities.has_value() && JSON::RequiresMultipart(DescriptionEntities.value())) || (DescriptionParseMode.has_value() && JSON::RequiresMultipart(DescriptionParseMode.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (Explanation.has_value() && JSON::RequiresMultipart(Explanation.value())) || (ExplanationEntities.has_value() && JSON::RequiresMultipart(ExplanationEntities.value())) || (ExplanationMedia.has_value() && JSON::RequiresMultipart(ExplanationMedia.value())) || (ExplanationParseMode.has_value() && JSON::RequiresMultipart(ExplanationParseMode.value())) || (HideResultsUntilCloses.has_value() && JSON::RequiresMultipart(HideResultsUntilCloses.value())) || (IsAnonymous.has_value() && JSON::RequiresMultipart(IsAnonymous.value())) || (IsClosed.has_value() && JSON::RequiresMultipart(IsClosed.value())) || (Media.has_value() && JSON::RequiresMultipart(Media.value())) || (MembersOnly.has_value() && JSON::RequiresMultipart(MembersOnly.value())) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (OpenPeriod.has_value() && JSON::RequiresMultipart(OpenPeriod.value())) || JSON::RequiresMultipart(Options) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || JSON::RequiresMultipart(Question) || (QuestionEntities.has_value() && JSON::RequiresMultipart(QuestionEntities.value())) || (QuestionParseMode.has_value() && JSON::RequiresMultipart(QuestionParseMode.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (ShuffleOptions.has_value() && JSON::RequiresMultipart(ShuffleOptions.value())) || (Type.has_value() && JSON::RequiresMultipart(Type.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowAddingOptions.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_adding_options",
                AllowAddingOptions.value());
        }

        if (AllowPaidBroadcast.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_paid_broadcast",
                AllowPaidBroadcast.value());
        }

        if (AllowsMultipleAnswers.has_value()) {
            JSON::AddMultipartField(
                Form, "allows_multiple_answers",
                AllowsMultipleAnswers.value());
        }

        if (AllowsRevoting.has_value()) {
            JSON::AddMultipartField(
                Form, "allows_revoting",
                AllowsRevoting.value());
        }

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (CloseDate.has_value()) {
            JSON::AddMultipartField(
                Form, "close_date",
                CloseDate.value());
        }

        if (CorrectOptionIDs.has_value()) {
            JSON::AddMultipartField(
                Form, "correct_option_ids",
                CorrectOptionIDs.value());
        }

        if (CountryCodes.has_value()) {
            JSON::AddMultipartField(
                Form, "country_codes",
                CountryCodes.value());
        }

        if (Description.has_value()) {
            JSON::AddMultipartField(
                Form, "description",
                Description.value());
        }

        if (DescriptionEntities.has_value()) {
            JSON::AddMultipartField(
                Form, "description_entities",
                DescriptionEntities.value());
        }

        if (DescriptionParseMode.has_value()) {
            JSON::AddMultipartField(
                Form, "description_parse_mode",
                DescriptionParseMode.value());
        }

        if (DisableNotification.has_value()) {
            JSON::AddMultipartField(
                Form, "disable_notification",
                DisableNotification.value());
        }

        if (Explanation.has_value()) {
            JSON::AddMultipartField(
                Form, "explanation",
                Explanation.value());
        }

        if (ExplanationEntities.has_value()) {
            JSON::AddMultipartField(
                Form, "explanation_entities",
                ExplanationEntities.value());
        }

        if (ExplanationMedia.has_value()) {
            JSON::AddMultipartField(
                Form, "explanation_media",
                ExplanationMedia.value());
        }

        if (ExplanationParseMode.has_value()) {
            JSON::AddMultipartField(
                Form, "explanation_parse_mode",
                ExplanationParseMode.value());
        }

        if (HideResultsUntilCloses.has_value()) {
            JSON::AddMultipartField(
                Form, "hide_results_until_closes",
                HideResultsUntilCloses.value());
        }

        if (IsAnonymous.has_value()) {
            JSON::AddMultipartField(
                Form, "is_anonymous",
                IsAnonymous.value());
        }

        if (IsClosed.has_value()) {
            JSON::AddMultipartField(
                Form, "is_closed",
                IsClosed.value());
        }

        if (Media.has_value()) {
            JSON::AddMultipartField(
                Form, "media",
                Media.value());
        }

        if (MembersOnly.has_value()) {
            JSON::AddMultipartField(
                Form, "members_only",
                MembersOnly.value());
        }

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

        if (OpenPeriod.has_value()) {
            JSON::AddMultipartField(
                Form, "open_period",
                OpenPeriod.value());
        }

        JSON::AddMultipartField(
            Form, "options",
            Options);

        if (ProtectContent.has_value()) {
            JSON::AddMultipartField(
                Form, "protect_content",
                ProtectContent.value());
        }

        JSON::AddMultipartField(
            Form, "question",
            Question);

        if (QuestionEntities.has_value()) {
            JSON::AddMultipartField(
                Form, "question_entities",
                QuestionEntities.value());
        }

        if (QuestionParseMode.has_value()) {
            JSON::AddMultipartField(
                Form, "question_parse_mode",
                QuestionParseMode.value());
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

        if (ShuffleOptions.has_value()) {
            JSON::AddMultipartField(
                Form, "shuffle_options",
                ShuffleOptions.value());
        }

        if (Type.has_value()) {
            JSON::AddMultipartField(
                Form, "type",
                Type.value());
        }

        return Form;
    }

};

class sendPoll {
public:
    using Parameters = sendPollParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "sendPoll";
    }

    explicit sendPoll(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message SendPoll(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "sendPoll",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "sendPoll",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message SendPoll(std::variant<long long, std::string> ChatID, std::vector<::TelegramBotAPI::Type::InputPollOption> Options, std::string Question) {
        Parameters ParametersValue(
        ChatID,
        Options,
        Question
        );

        return SendPoll(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDPOLL_HPP
