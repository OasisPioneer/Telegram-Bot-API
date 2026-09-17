#ifndef TELEGRAMBOTAPI_DESERIALIZER_HPP
#define TELEGRAMBOTAPI_DESERIALIZER_HPP

#include <limits>
#include <memory>
#include <optional>
#include <string>
#include <type_traits>
#include <vector>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/JSON/Traits.HPP"

namespace TelegramBotAPI::JSON {
    template <typename Type> Type FromJson(const Value &JsonValue);

    namespace Detail {
        template <typename Type> inline constexpr bool AlwaysFalseV = false;

        template <typename Type>
        inline bool IsIntegerInRange(const Value &JsonValue) {
            if (!JsonValue.is_int64()) {
                return false;
            }

            const long long IntegerValue = JsonValue.as_int64();

            if constexpr (std::is_signed_v<Type>) {
                return IntegerValue >= static_cast<long long>(
                                           std::numeric_limits<Type>::min()) &&
                       IntegerValue <= static_cast<long long>(
                                           std::numeric_limits<Type>::max());
            } else {
                if (IntegerValue < 0) {
                    return false;
                }

                return static_cast<unsigned long long>(IntegerValue) <=
                       static_cast<unsigned long long>(
                           std::numeric_limits<Type>::max());
            }
        }

        inline const Object &RequireObject(const Value &JsonValue) {
            if (!JsonValue.is_object()) {
                throw JsonException("Expected JSON object");
            }

            return JsonValue.as_object();
        }

        inline const Value &RequireField(const Object      &JsonObject,
                                         const std::string &FieldName) {
            const Object::const_iterator Iterator = JsonObject.find(FieldName);

            if (Iterator == JsonObject.end()) {
                throw JsonException("Missing required field: " + FieldName);
            }

            return Iterator->value();
        }

        template <typename Type>
        inline Type GetRequiredField(const Object      &JsonObject,
                                     const std::string &FieldName) {
            return TelegramBotAPI::JSON::FromJson<Type>(
                RequireField(JsonObject, FieldName));
        }

        template <typename Type>
        inline std::optional<Type>
        GetOptionalField(const Object      &JsonObject,
                         const std::string &FieldName) {
            const Object::const_iterator Iterator = JsonObject.find(FieldName);

            if (Iterator == JsonObject.end()) {
                return std::nullopt;
            }

            if (Iterator->value().is_null()) {
                return std::nullopt;
            }

            return TelegramBotAPI::JSON::FromJson<Type>(Iterator->value());
        }

        template <typename Type>
        inline std::shared_ptr<Type>
        GetOptionalSharedPtrField(const Object      &JsonObject,
                                  const std::string &FieldName) {
            const Object::const_iterator Iterator = JsonObject.find(FieldName);

            if (Iterator == JsonObject.end()) {
                return nullptr;
            }

            if (Iterator->value().is_null()) {
                return nullptr;
            }

            return TelegramBotAPI::JSON::FromJson<std::shared_ptr<Type>>(
                Iterator->value());
        }
    } // namespace Detail

    template <typename Type> inline Type FromJson(const Value &JsonValue) {
        using CleanType = Detail::RemoveCVRefT<Type>;

        if constexpr (Detail::IsBooleanV<CleanType>) {
            if (!JsonValue.is_bool()) {
                throw JsonException("Expected boolean");
            }

            return JsonValue.as_bool();
        } else if constexpr (Detail::IsIntegerV<CleanType>) {
            if (!Detail::IsIntegerInRange<CleanType>(JsonValue)) {
                throw JsonException("Expected integer");
            }

            return static_cast<CleanType>(JsonValue.as_int64());
        } else if constexpr (Detail::IsFloatingPointV<CleanType>) {
            if (JsonValue.is_double()) {
                return static_cast<CleanType>(JsonValue.as_double());
            }

            if (JsonValue.is_int64()) {
                return static_cast<CleanType>(JsonValue.as_int64());
            }

            throw JsonException("Expected number");
        } else if constexpr (Detail::IsStringV<CleanType>) {
            if (!JsonValue.is_string()) {
                throw JsonException("Expected string");
            }

            return std::string(JsonValue.as_string().c_str());
        } else if constexpr (Detail::IsVectorV<CleanType>) {
            if (!JsonValue.is_array()) {
                throw JsonException("Expected JSON array");
            }

            CleanType Result;

            const Array &JsonArray = JsonValue.as_array();

            Result.reserve(JsonArray.size());

            using ElementType = typename Detail::VectorElement<CleanType>::Type;

            for (const Value &ElementValue : JsonArray) {
                Result.push_back(
                    TelegramBotAPI::JSON::FromJson<ElementType>(ElementValue));
            }

            return Result;
        } else if constexpr (Detail::IsOptionalV<CleanType>) {
            using ValueType = typename Detail::OptionalValue<CleanType>::Type;

            if (JsonValue.is_null()) {
                return std::nullopt;
            }

            return std::optional<ValueType>{
                TelegramBotAPI::JSON::FromJson<ValueType>(JsonValue)};
        } else if constexpr (Detail::IsSharedPtrV<CleanType>) {
            using ValueType = typename Detail::SharedPtrValue<CleanType>::Type;

            if (JsonValue.is_null()) {
                return nullptr;
            }

            return std::make_shared<ValueType>(
                TelegramBotAPI::JSON::FromJson<ValueType>(JsonValue));
        } else if constexpr (Detail::IsUserV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<long long>(JsonObject, "id");

            ObjectValue.FirstName =
                Detail::GetRequiredField<std::string>(JsonObject, "first_name");

            ObjectValue.LastName =
                Detail::GetOptionalField<std::string>(JsonObject, "last_name");

            ObjectValue.UserName =
                Detail::GetOptionalField<std::string>(JsonObject, "username");

            return ObjectValue;
        } else if constexpr (Detail::IsChatV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<long long>(JsonObject, "id");

            ObjectValue.Type =
                Detail::GetRequiredField<std::string>(JsonObject, "type");

            ObjectValue.Title =
                Detail::GetOptionalField<std::string>(JsonObject, "title");

            ObjectValue.UserName =
                Detail::GetOptionalField<std::string>(JsonObject, "username");

            ObjectValue.FirstName =
                Detail::GetOptionalField<std::string>(JsonObject, "first_name");

            ObjectValue.LastName =
                Detail::GetOptionalField<std::string>(JsonObject, "last_name");

            return ObjectValue;
        } else if constexpr (Detail::IsMessageEntityV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.Type =
                Detail::GetRequiredField<std::string>(JsonObject, "type");

            ObjectValue.Offset =
                Detail::GetRequiredField<long long>(JsonObject, "offset");

            ObjectValue.Length =
                Detail::GetRequiredField<long long>(JsonObject, "length");

            ObjectValue.URL =
                Detail::GetOptionalField<std::string>(JsonObject, "url");

            return ObjectValue;
        } else if constexpr (Detail::IsPhotoSizeV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Width =
                Detail::GetRequiredField<long long>(JsonObject, "width");

            ObjectValue.Height =
                Detail::GetRequiredField<long long>(JsonObject, "height");

            ObjectValue.FileSize =
                Detail::GetOptionalField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsAudioV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Duration =
                Detail::GetRequiredField<long long>(JsonObject, "duration");

            ObjectValue.Performer =
                Detail::GetOptionalField<std::string>(JsonObject, "performer");

            ObjectValue.Title =
                Detail::GetOptionalField<std::string>(JsonObject, "title");

            ObjectValue.MimeType =
                Detail::GetOptionalField<std::string>(JsonObject, "mime_type");

            ObjectValue.FileSize =
                Detail::GetOptionalField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsDocumentV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Thumb =
                Detail::GetOptionalField<TelegramBotAPI::Type::PhotoSize>(
                    JsonObject, "thumb");

            ObjectValue.FileName =
                Detail::GetRequiredField<std::string>(JsonObject, "file_name");

            ObjectValue.MimeType =
                Detail::GetRequiredField<std::string>(JsonObject, "mime_type");

            ObjectValue.FileSize =
                Detail::GetRequiredField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsStickerV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Width =
                Detail::GetRequiredField<long long>(JsonObject, "width");

            ObjectValue.Height =
                Detail::GetRequiredField<long long>(JsonObject, "height");

            ObjectValue.Thumb =
                Detail::GetOptionalField<TelegramBotAPI::Type::PhotoSize>(
                    JsonObject, "thumb");

            ObjectValue.FileSize =
                Detail::GetRequiredField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsVideoV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Width =
                Detail::GetRequiredField<long long>(JsonObject, "width");

            ObjectValue.Height =
                Detail::GetRequiredField<long long>(JsonObject, "height");

            ObjectValue.Duration =
                Detail::GetRequiredField<long long>(JsonObject, "duration");

            ObjectValue.Thumb =
                Detail::GetOptionalField<TelegramBotAPI::Type::PhotoSize>(
                    JsonObject, "thumb");

            ObjectValue.FileName =
                Detail::GetOptionalField<std::string>(JsonObject, "file_name");

            ObjectValue.MimeType =
                Detail::GetOptionalField<std::string>(JsonObject, "mime_type");

            ObjectValue.FileSize =
                Detail::GetOptionalField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsVoiceV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.Duration =
                Detail::GetRequiredField<long long>(JsonObject, "duration");

            ObjectValue.MimeType =
                Detail::GetOptionalField<std::string>(JsonObject, "mime_type");

            ObjectValue.FileSize =
                Detail::GetOptionalField<long long>(JsonObject, "file_size");

            return ObjectValue;
        } else if constexpr (Detail::IsContactV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.PhoneNumber = Detail::GetRequiredField<std::string>(
                JsonObject, "phone_number");

            ObjectValue.FirstName =
                Detail::GetRequiredField<std::string>(JsonObject, "first_name");

            ObjectValue.LastName =
                Detail::GetOptionalField<std::string>(JsonObject, "last_name");

            ObjectValue.UserID =
                Detail::GetOptionalField<long long>(JsonObject, "user_id");

            return ObjectValue;
        } else if constexpr (Detail::IsLocationV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.Longitude =
                Detail::GetRequiredField<double>(JsonObject, "longitude");

            ObjectValue.Latitude =
                Detail::GetRequiredField<double>(JsonObject, "latitude");

            return ObjectValue;
        } else if constexpr (Detail::IsVenueV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.Location =
                Detail::GetRequiredField<TelegramBotAPI::Type::Location>(
                    JsonObject, "location");

            ObjectValue.Title =
                Detail::GetRequiredField<std::string>(JsonObject, "title");

            ObjectValue.Address =
                Detail::GetRequiredField<std::string>(JsonObject, "address");

            ObjectValue.FoursquareID = Detail::GetOptionalField<std::string>(
                JsonObject, "foursquare_id");

            return ObjectValue;
        } else if constexpr (Detail::IsFileV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.FileID =
                Detail::GetRequiredField<std::string>(JsonObject, "file_id");

            ObjectValue.FileSize =
                Detail::GetOptionalField<long long>(JsonObject, "file_size");

            ObjectValue.FilePath =
                Detail::GetOptionalField<std::string>(JsonObject, "file_path");

            return ObjectValue;
        } else if constexpr (Detail::IsInlineQueryV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<std::string>(JsonObject, "id");

            ObjectValue.From =
                Detail::GetRequiredField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.Query =
                Detail::GetRequiredField<std::string>(JsonObject, "query");

            ObjectValue.Offset =
                Detail::GetRequiredField<std::string>(JsonObject, "offset");

            ObjectValue.ChatType =
                Detail::GetOptionalField<std::string>(JsonObject, "chat_type");

            ObjectValue.Location =
                Detail::GetOptionalField<TelegramBotAPI::Type::Location>(
                    JsonObject, "location");

            return ObjectValue;
        } else if constexpr (Detail::IsChosenInlineResultV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ResultID =
                Detail::GetRequiredField<std::string>(JsonObject, "result_id");

            ObjectValue.From =
                Detail::GetRequiredField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.Location =
                Detail::GetOptionalField<TelegramBotAPI::Type::Location>(
                    JsonObject, "location");

            ObjectValue.InlineMessageID = Detail::GetOptionalField<std::string>(
                JsonObject, "inline_message_id");

            ObjectValue.Query =
                Detail::GetRequiredField<std::string>(JsonObject, "query");

            return ObjectValue;
        } else if constexpr (Detail::IsMessageV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.MessageID =
                Detail::GetRequiredField<long long>(JsonObject, "message_id");

            ObjectValue.From =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.Date =
                Detail::GetRequiredField<long long>(JsonObject, "date");

            ObjectValue.Chat =
                Detail::GetRequiredField<TelegramBotAPI::Type::Chat>(JsonObject,
                                                                     "chat");

            ObjectValue.ForwardFrom =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(
                    JsonObject, "forward_from");

            ObjectValue.ForwardDate =
                Detail::GetOptionalField<long long>(JsonObject, "forward_date");

            ObjectValue.ReplyToMessage = Detail::GetOptionalSharedPtrField<
                TelegramBotAPI::Type::Message>(JsonObject, "reply_to_message");

            ObjectValue.Text =
                Detail::GetOptionalField<std::string>(JsonObject, "text");

            ObjectValue.Entities = Detail::GetOptionalField<
                std::vector<TelegramBotAPI::Type::MessageEntity>>(JsonObject,
                                                                  "entities");

            ObjectValue.Audio =
                Detail::GetOptionalField<TelegramBotAPI::Type::Audio>(
                    JsonObject, "audio");

            ObjectValue.Document =
                Detail::GetOptionalField<TelegramBotAPI::Type::Document>(
                    JsonObject, "document");

            ObjectValue.Photo = Detail::GetOptionalField<
                std::vector<TelegramBotAPI::Type::PhotoSize>>(JsonObject,
                                                              "photo");

            ObjectValue.Sticker =
                Detail::GetOptionalField<TelegramBotAPI::Type::Sticker>(
                    JsonObject, "sticker");

            ObjectValue.Video =
                Detail::GetOptionalField<TelegramBotAPI::Type::Video>(
                    JsonObject, "video");

            ObjectValue.Voice =
                Detail::GetOptionalField<TelegramBotAPI::Type::Voice>(
                    JsonObject, "voice");

            ObjectValue.Caption =
                Detail::GetOptionalField<std::string>(JsonObject, "caption");

            ObjectValue.Contact =
                Detail::GetOptionalField<TelegramBotAPI::Type::Contact>(
                    JsonObject, "contact");

            ObjectValue.Location =
                Detail::GetOptionalField<TelegramBotAPI::Type::Location>(
                    JsonObject, "location");

            ObjectValue.Venue =
                Detail::GetOptionalField<TelegramBotAPI::Type::Venue>(
                    JsonObject, "venue");

            ObjectValue.NewChatMember =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(
                    JsonObject, "new_chat_member");

            ObjectValue.LeftChatMember =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(
                    JsonObject, "left_chat_member");

            ObjectValue.NewChatTitle = Detail::GetOptionalField<std::string>(
                JsonObject, "new_chat_title");

            ObjectValue.NewChatPhoto =
                Detail::GetOptionalField<TelegramBotAPI::Type::PhotoSize>(
                    JsonObject, "new_chat_photo");

            ObjectValue.DeleteChatPhoto =
                Detail::GetOptionalField<bool>(JsonObject, "delete_chat_photo");

            ObjectValue.GroupChatCreated = Detail::GetOptionalField<bool>(
                JsonObject, "group_chat_created");

            ObjectValue.SupergroupChatCreated = Detail::GetOptionalField<bool>(
                JsonObject, "supergroup_chat_created");

            ObjectValue.ChannelChatCreated = Detail::GetOptionalField<bool>(
                JsonObject, "channel_chat_created");

            ObjectValue.MigrateToChatID = Detail::GetOptionalField<long long>(
                JsonObject, "migrate_to_chat_id");

            ObjectValue.MigrateFromChatID = Detail::GetOptionalField<long long>(
                JsonObject, "migrate_from_chat_id");

            ObjectValue.PinnedMessage = Detail::GetOptionalField<
                std::shared_ptr<TelegramBotAPI::Type::Message>>(
                JsonObject, "pinned_message");

            return ObjectValue;
        } else if constexpr (Detail::IsCallbackQueryV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<std::string>(JsonObject, "id");

            ObjectValue.From =
                Detail::GetRequiredField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.Message =
                Detail::GetOptionalField<TelegramBotAPI::Type::Message>(
                    JsonObject, "message");

            ObjectValue.InlineMessageID = Detail::GetOptionalField<std::string>(
                JsonObject, "inline_message_id");

            ObjectValue.Data =
                Detail::GetOptionalField<std::string>(JsonObject, "data");

            return ObjectValue;
        } else if constexpr (Detail::IsUpdateV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.UpdateID =
                Detail::GetRequiredField<long long>(JsonObject, "update_id");

            ObjectValue.Message =
                Detail::GetOptionalField<TelegramBotAPI::Type::Message>(
                    JsonObject, "message");

            ObjectValue.EditedMessage =
                Detail::GetOptionalField<TelegramBotAPI::Type::Message>(
                    JsonObject, "edited_message");

            ObjectValue.ChannelPost =
                Detail::GetOptionalField<TelegramBotAPI::Type::Message>(
                    JsonObject, "channel_post");

            ObjectValue.EditedChannelPost =
                Detail::GetOptionalField<TelegramBotAPI::Type::Message>(
                    JsonObject, "edited_channel_post");

            ObjectValue.InlineQuery =
                Detail::GetOptionalField<TelegramBotAPI::Type::InlineQuery>(
                    JsonObject, "inline_query");

            ObjectValue.ChosenInlineResult = Detail::GetOptionalField<
                TelegramBotAPI::Type::ChosenInlineResult>(
                JsonObject, "chosen_inline_result");

            ObjectValue.CallbackQuery =
                Detail::GetOptionalField<TelegramBotAPI::Type::CallbackQuery>(
                    JsonObject, "callback_query");

            ObjectValue.ShippingQuery =
                Detail::GetOptionalField<TelegramBotAPI::Type::ShippingQuery>(
                    JsonObject, "shipping_query");

            ObjectValue.PreCheckoutQuery = Detail::GetOptionalField<
                TelegramBotAPI::Type::PreCheckoutQuery>(JsonObject,
                                                        "pre_checkout_query");

            ObjectValue.Poll =
                Detail::GetOptionalField<TelegramBotAPI::Type::Poll>(JsonObject,
                                                                     "poll");

            ObjectValue.PollAnswer =
                Detail::GetOptionalField<TelegramBotAPI::Type::PollAnswer>(
                    JsonObject, "poll_answer");

            return ObjectValue;

        } else if constexpr (Detail::IsShippingAddressV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.CountryCode = Detail::GetRequiredField<std::string>(
                JsonObject, "country_code");

            ObjectValue.State =
                Detail::GetRequiredField<std::string>(JsonObject, "state");

            ObjectValue.City =
                Detail::GetRequiredField<std::string>(JsonObject, "city");

            ObjectValue.StreetLine1 = Detail::GetRequiredField<std::string>(
                JsonObject, "street_line1");

            ObjectValue.StreetLine2 = Detail::GetRequiredField<std::string>(
                JsonObject, "street_line2");

            ObjectValue.PostCode =
                Detail::GetRequiredField<std::string>(JsonObject, "post_code");

            return ObjectValue;

        } else if constexpr (Detail::IsShippingQueryV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<std::string>(JsonObject, "id");

            ObjectValue.From =
                Detail::GetRequiredField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.InvoicePayload = Detail::GetRequiredField<std::string>(
                JsonObject, "invoice_payload");

            ObjectValue.ShippingAddress =
                Detail::GetRequiredField<TelegramBotAPI::Type::ShippingAddress>(
                    JsonObject, "shipping_address");

            return ObjectValue;
        } else if constexpr (Detail::IsOrderInfoV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.Name =
                Detail::GetOptionalField<std::string>(JsonObject, "name");

            ObjectValue.PhoneNumber = Detail::GetOptionalField<std::string>(
                JsonObject, "phone_number");

            ObjectValue.Email =
                Detail::GetOptionalField<std::string>(JsonObject, "email");

            ObjectValue.ShippingAddress =
                Detail::GetOptionalField<TelegramBotAPI::Type::ShippingAddress>(
                    JsonObject, "shipping_address");

            return ObjectValue;
        } else if constexpr (Detail::IsPreCheckoutQueryV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<std::string>(JsonObject, "id");

            ObjectValue.From =
                Detail::GetRequiredField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "from");

            ObjectValue.Currency =
                Detail::GetRequiredField<std::string>(JsonObject, "currency");

            ObjectValue.TotalAmount =
                Detail::GetRequiredField<long long>(JsonObject, "total_amount");

            ObjectValue.InvoicePayload = Detail::GetRequiredField<std::string>(
                JsonObject, "invoice_payload");

            ObjectValue.ShippingOptionID =
                Detail::GetOptionalField<std::string>(JsonObject,
                                                      "shipping_option_id");

            ObjectValue.OrderInfo =
                Detail::GetOptionalField<TelegramBotAPI::Type::OrderInfo>(
                    JsonObject, "order_info");

            return ObjectValue;

        } else if constexpr (Detail::IsPollOptionV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.PersistentID = Detail::GetRequiredField<std::string>(
                JsonObject, "persistent_id");

            ObjectValue.Text =
                Detail::GetRequiredField<std::string>(JsonObject, "text");

            ObjectValue.TextEntities =
                Detail::GetOptionalField<
                    std::vector<TelegramBotAPI::Type::MessageEntity>>(
                    JsonObject, "text_entities")
                    .value_or(
                        std::vector<TelegramBotAPI::Type::MessageEntity>{});

            ObjectValue.VoterCount =
                Detail::GetRequiredField<int>(JsonObject, "voter_count");

            ObjectValue.AddedByUser =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(
                    JsonObject, "added_by_user");

            ObjectValue.AddedByChat =
                Detail::GetOptionalField<TelegramBotAPI::Type::Chat>(
                    JsonObject, "added_by_chat");

            ObjectValue.AdditionDate = Detail::GetOptionalField<long long>(
                JsonObject, "addition_date");

            return ObjectValue;
        } else if constexpr (Detail::IsPollV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.ID =
                Detail::GetRequiredField<std::string>(JsonObject, "id");

            ObjectValue.Question =
                Detail::GetRequiredField<std::string>(JsonObject, "question");

            ObjectValue.QuestionEntities =
                Detail::GetOptionalField<
                    std::vector<TelegramBotAPI::Type::MessageEntity>>(
                    JsonObject, "question_entities")
                    .value_or(
                        std::vector<TelegramBotAPI::Type::MessageEntity>{});

            ObjectValue.Options = Detail::GetRequiredField<
                std::vector<TelegramBotAPI::Type::PollOption>>(JsonObject,
                                                               "options");

            ObjectValue.TotalVoterCount =
                Detail::GetRequiredField<int>(JsonObject, "total_voter_count");

            ObjectValue.IsClosed =
                Detail::GetRequiredField<bool>(JsonObject, "is_closed");

            ObjectValue.IsAnonymous =
                Detail::GetRequiredField<bool>(JsonObject, "is_anonymous");

            ObjectValue.Type =
                Detail::GetRequiredField<std::string>(JsonObject, "type");

            ObjectValue.AllowsMultipleAnswers = Detail::GetRequiredField<bool>(
                JsonObject, "allows_multiple_answers");

            ObjectValue.AllowsRevoting =
                Detail::GetRequiredField<bool>(JsonObject, "allows_revoting");

            ObjectValue.MembersOnly =
                Detail::GetRequiredField<bool>(JsonObject, "members_only");

            ObjectValue.CountryCodes =
                Detail::GetOptionalField<std::vector<std::string>>(
                    JsonObject, "country_codes");

            ObjectValue.CorrectOptionIDS =
                Detail::GetOptionalField<std::vector<long long>>(
                    JsonObject, "correct_option_ids");

            ObjectValue.Explanation = Detail::GetOptionalField<std::string>(
                JsonObject, "explanation");

            ObjectValue.ExplanationEntities =
                Detail::GetOptionalField<
                    std::vector<TelegramBotAPI::Type::MessageEntity>>(
                    JsonObject, "explanation_entities")
                    .value_or(
                        std::vector<TelegramBotAPI::Type::MessageEntity>{});

            ObjectValue.OpenPeriod =
                Detail::GetOptionalField<long long>(JsonObject, "open_period");

            ObjectValue.CloseDate =
                Detail::GetOptionalField<long long>(JsonObject, "close_date");

            ObjectValue.Description = Detail::GetOptionalField<std::string>(
                JsonObject, "description");

            ObjectValue.DescriptionEntities =
                Detail::GetOptionalField<
                    std::vector<TelegramBotAPI::Type::MessageEntity>>(
                    JsonObject, "description_entities")
                    .value_or(
                        std::vector<TelegramBotAPI::Type::MessageEntity>{});

            return ObjectValue;
        } else if constexpr (Detail::IsPollAnswerV<CleanType>) {
            const Object &JsonObject = Detail::RequireObject(JsonValue);

            CleanType ObjectValue;

            ObjectValue.PollID =
                Detail::GetRequiredField<std::string>(JsonObject, "poll_id");

            ObjectValue.VoterChat =
                Detail::GetOptionalField<TelegramBotAPI::Type::Chat>(
                    JsonObject, "voter_chat");

            ObjectValue.User =
                Detail::GetOptionalField<TelegramBotAPI::Type::User>(JsonObject,
                                                                     "user");

            ObjectValue.OptionIDS =
                Detail::GetRequiredField<std::vector<long long>>(JsonObject,
                                                                 "option_ids");

            ObjectValue.OptionPersistentIDS =
                Detail::GetRequiredField<std::vector<std::string>>(
                    JsonObject, "option_persistent_ids");

            return ObjectValue;
        } else {
            throw JsonException("Unsupported JSON deserialization type");
        }
    }
} // namespace TelegramBotAPI::JSON

#endif