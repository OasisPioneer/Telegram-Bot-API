#ifndef TELEGRAMBOTAPI_SERIALIZER_HPP
#define TELEGRAMBOTAPI_SERIALIZER_HPP

#include <memory>
#include <optional>
#include <string>
#include <utility>
#include <vector>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/JSON/Traits.HPP"

namespace TelegramBotAPI::JSON {
    namespace Detail {
        template <typename Type> struct Serializer;

        template <typename Type> struct JsonConverter {
                static Value Convert(const Type &ObjectValue) {
                    return Serializer<Type>::Serialize(ObjectValue);
                }
        };

        template <> struct JsonConverter<bool> {
                static Value Convert(const bool &ObjectValue) {
                    return {ObjectValue};
                }
        };

        template <> struct JsonConverter<short> {
                static Value Convert(const short &ObjectValue) {
                    return {static_cast<std::int64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<unsigned short> {
                static Value Convert(const unsigned short &ObjectValue) {
                    return {static_cast<std::uint64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<int> {
                static Value Convert(const int &ObjectValue) {
                    return {static_cast<std::int64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<unsigned int> {
                static Value Convert(const unsigned int &ObjectValue) {
                    return {static_cast<std::uint64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<long> {
                static Value Convert(const long &ObjectValue) {
                    return {static_cast<std::int64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<unsigned long> {
                static Value Convert(const unsigned long &ObjectValue) {
                    return {static_cast<std::uint64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<long long> {
                static Value Convert(const long long &ObjectValue) {
                    return {static_cast<std::int64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<unsigned long long> {
                static Value Convert(const unsigned long long &ObjectValue) {
                    return {static_cast<std::uint64_t>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<float> {
                static Value Convert(const float &ObjectValue) {
                    return {static_cast<double>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<double> {
                static Value Convert(const double &ObjectValue) {
                    return {ObjectValue};
                }
        };

        template <> struct JsonConverter<long double> {
                static Value Convert(const long double &ObjectValue) {
                    return {static_cast<double>(ObjectValue)};
                }
        };

        template <> struct JsonConverter<std::string> {
                static Value Convert(const std::string &ObjectValue) {
                    return {ObjectValue};
                }
        };

        template <typename Type> struct JsonConverter<std::optional<Type>> {
                static Value Convert(const std::optional<Type> &ObjectValue) {
                    if (!ObjectValue.has_value()) {
                        return {nullptr};
                    }

                    return JsonConverter<Type>::Convert(ObjectValue.value());
                }
        };

        template <typename Type> struct JsonConverter<std::shared_ptr<Type>> {
                static Value Convert(const std::shared_ptr<Type> &ObjectValue) {
                    if (!ObjectValue) {
                        return {nullptr};
                    }

                    return JsonConverter<Type>::Convert(*ObjectValue);
                }
        };

        template <typename Type> struct JsonConverter<std::vector<Type>> {
                static Value Convert(const std::vector<Type> &ObjectValue) {
                    Array JsonArray;

                    JsonArray.reserve(ObjectValue.size());

                    for (const Type &Element : ObjectValue) {
                        JsonArray.push_back(
                            JsonConverter<Type>::Convert(Element));
                    }

                    return {std::move(JsonArray)};
                }
        };

        template <typename Type>
        void SetField(Object &JsonObject, const char *FieldName,
                      const Type &FieldValue) {
            using CleanType = RemoveCVRefT<Type>;

            JsonObject[FieldName] =
                JsonConverter<CleanType>::Convert(FieldValue);
        }

        template <typename Type>
        void SetOptionalField(Object &JsonObject, const char *FieldName,
                              const std::optional<Type> &FieldValue) {
            if (!FieldValue.has_value()) {
                return;
            }

            SetField(JsonObject, FieldName, FieldValue.value());
        }

        template <typename Type>
        void SetSharedPtrField(Object &JsonObject, const char *FieldName,
                               const std::shared_ptr<Type> &FieldValue) {
            if (!FieldValue) {
                return;
            }

            SetField(JsonObject, FieldName, *FieldValue);
        }

        template <> struct Serializer<TelegramBotAPI::Type::User> {
                static Value
                Serialize(const TelegramBotAPI::Type::User &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "id", ObjectValue.ID);

                    SetField(JsonObject, "first_name", ObjectValue.FirstName);

                    SetOptionalField(JsonObject, "last_name",
                                     ObjectValue.LastName);

                    SetOptionalField(JsonObject, "username",
                                     ObjectValue.UserName);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Chat> {
                static Value
                Serialize(const TelegramBotAPI::Type::Chat &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "id", ObjectValue.ID);

                    SetField(JsonObject, "type", ObjectValue.Type);

                    SetOptionalField(JsonObject, "title", ObjectValue.Title);

                    SetOptionalField(JsonObject, "username",
                                     ObjectValue.UserName);

                    SetOptionalField(JsonObject, "first_name",
                                     ObjectValue.FirstName);

                    SetOptionalField(JsonObject, "last_name",
                                     ObjectValue.LastName);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::MessageEntity> {
                static Value Serialize(
                    const TelegramBotAPI::Type::MessageEntity &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "type", ObjectValue.Type);

                    SetField(JsonObject, "offset", ObjectValue.Offset);

                    SetField(JsonObject, "length", ObjectValue.Length);

                    SetOptionalField(JsonObject, "url", ObjectValue.URL);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::PhotoSize> {
                static Value
                Serialize(const TelegramBotAPI::Type::PhotoSize &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetField(JsonObject, "width", ObjectValue.Width);

                    SetField(JsonObject, "height", ObjectValue.Height);

                    SetOptionalField(JsonObject, "file_size",
                                     ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Audio> {
                static Value
                Serialize(const TelegramBotAPI::Type::Audio &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetField(JsonObject, "duration", ObjectValue.Duration);

                    SetOptionalField(JsonObject, "performer",
                                     ObjectValue.Performer);

                    SetOptionalField(JsonObject, "title", ObjectValue.Title);

                    SetOptionalField(JsonObject, "mime_type",
                                     ObjectValue.MimeType);

                    SetOptionalField(JsonObject, "file_size",
                                     ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Document> {
                static Value
                Serialize(const TelegramBotAPI::Type::Document &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetOptionalField(JsonObject, "thumb", ObjectValue.Thumb);

                    SetField(JsonObject, "file_name", ObjectValue.FileName);

                    SetField(JsonObject, "mime_type", ObjectValue.MimeType);

                    SetField(JsonObject, "file_size", ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Sticker> {
                static Value
                Serialize(const TelegramBotAPI::Type::Sticker &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetField(JsonObject, "width", ObjectValue.Width);

                    SetField(JsonObject, "height", ObjectValue.Height);

                    SetOptionalField(JsonObject, "thumb", ObjectValue.Thumb);

                    SetField(JsonObject, "file_size", ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Video> {
                static Value
                Serialize(const TelegramBotAPI::Type::Video &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetField(JsonObject, "width", ObjectValue.Width);

                    SetField(JsonObject, "height", ObjectValue.Height);

                    SetField(JsonObject, "duration", ObjectValue.Duration);

                    SetOptionalField(JsonObject, "thumb", ObjectValue.Thumb);

                    SetOptionalField(JsonObject, "file_name",
                                     ObjectValue.FileName);

                    SetOptionalField(JsonObject, "mime_type",
                                     ObjectValue.MimeType);

                    SetOptionalField(JsonObject, "file_size",
                                     ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Voice> {
                static Value
                Serialize(const TelegramBotAPI::Type::Voice &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetField(JsonObject, "duration", ObjectValue.Duration);

                    SetOptionalField(JsonObject, "mime_type",
                                     ObjectValue.MimeType);

                    SetOptionalField(JsonObject, "file_size",
                                     ObjectValue.FileSize);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Contact> {
                static Value
                Serialize(const TelegramBotAPI::Type::Contact &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "phone_number",
                             ObjectValue.PhoneNumber);

                    SetField(JsonObject, "first_name", ObjectValue.FirstName);

                    SetOptionalField(JsonObject, "last_name",
                                     ObjectValue.LastName);

                    SetOptionalField(JsonObject, "user_id", ObjectValue.UserID);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Location> {
                static Value
                Serialize(const TelegramBotAPI::Type::Location &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "longitude", ObjectValue.Longitude);

                    SetField(JsonObject, "latitude", ObjectValue.Latitude);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Venue> {
                static Value
                Serialize(const TelegramBotAPI::Type::Venue &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "location", ObjectValue.Location);

                    SetField(JsonObject, "title", ObjectValue.Title);

                    SetField(JsonObject, "address", ObjectValue.Address);

                    SetOptionalField(JsonObject, "foursquare_id",
                                     ObjectValue.FoursquareID);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::File> {
                static Value
                Serialize(const TelegramBotAPI::Type::File &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "file_id", ObjectValue.FileID);

                    SetOptionalField(JsonObject, "file_size",
                                     ObjectValue.FileSize);

                    SetOptionalField(JsonObject, "file_path",
                                     ObjectValue.FilePath);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::InlineQuery> {
                static Value Serialize(
                    const TelegramBotAPI::Type::InlineQuery &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "id", ObjectValue.ID);

                    SetField(JsonObject, "from", ObjectValue.From);

                    SetOptionalField(JsonObject, "location",
                                     ObjectValue.Location);

                    SetField(JsonObject, "query", ObjectValue.Query);

                    SetField(JsonObject, "offset", ObjectValue.Offset);

                    return {std::move(JsonObject)};
                }
        };

        template <>
        struct Serializer<TelegramBotAPI::Type::ChosenInlineResult> {
                static Value
                Serialize(const TelegramBotAPI::Type::ChosenInlineResult
                              &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "result_id", ObjectValue.ResultID);

                    SetField(JsonObject, "from", ObjectValue.From);

                    SetOptionalField(JsonObject, "location",
                                     ObjectValue.Location);

                    SetOptionalField(JsonObject, "inline_message_id",
                                     ObjectValue.InlineMessageID);

                    SetField(JsonObject, "query", ObjectValue.Query);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::Message> {
                static Value
                Serialize(const TelegramBotAPI::Type::Message &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "message_id", ObjectValue.MessageID);

                    SetOptionalField(JsonObject, "from", ObjectValue.From);

                    SetField(JsonObject, "date", ObjectValue.Date);

                    SetField(JsonObject, "chat", ObjectValue.Chat);

                    SetOptionalField(JsonObject, "forward_from",
                                     ObjectValue.ForwardFrom);

                    SetOptionalField(JsonObject, "forward_date",
                                     ObjectValue.ForwardDate);

                    SetSharedPtrField(JsonObject, "reply_to_message",
                                      ObjectValue.ReplyToMessage);

                    SetOptionalField(JsonObject, "text", ObjectValue.Text);

                    SetOptionalField(JsonObject, "entities",
                                     ObjectValue.Entities);

                    SetOptionalField(JsonObject, "audio", ObjectValue.Audio);

                    SetOptionalField(JsonObject, "document",
                                     ObjectValue.Document);

                    SetOptionalField(JsonObject, "photo", ObjectValue.Photo);

                    SetOptionalField(JsonObject, "sticker",
                                     ObjectValue.Sticker);

                    SetOptionalField(JsonObject, "video", ObjectValue.Video);

                    SetOptionalField(JsonObject, "voice", ObjectValue.Voice);

                    SetOptionalField(JsonObject, "caption",
                                     ObjectValue.Caption);

                    SetOptionalField(JsonObject, "contact",
                                     ObjectValue.Contact);

                    SetOptionalField(JsonObject, "location",
                                     ObjectValue.Location);

                    SetOptionalField(JsonObject, "venue", ObjectValue.Venue);

                    SetOptionalField(JsonObject, "new_chat_member",
                                     ObjectValue.NewChatMember);

                    SetOptionalField(JsonObject, "left_chat_member",
                                     ObjectValue.LeftChatMember);

                    SetOptionalField(JsonObject, "new_chat_title",
                                     ObjectValue.NewChatTitle);

                    SetOptionalField(JsonObject, "new_chat_photo",
                                     ObjectValue.NewChatPhoto);

                    SetOptionalField(JsonObject, "delete_chat_photo",
                                     ObjectValue.DeleteChatPhoto);

                    SetOptionalField(JsonObject, "group_chat_created",
                                     ObjectValue.GroupChatCreated);

                    SetOptionalField(JsonObject, "supergroup_chat_created",
                                     ObjectValue.SupergroupChatCreated);

                    SetOptionalField(JsonObject, "channel_chat_created",
                                     ObjectValue.ChannelChatCreated);

                    SetOptionalField(JsonObject, "migrate_to_chat_id",
                                     ObjectValue.MigrateToChatID);

                    SetOptionalField(JsonObject, "migrate_from_chat_id",
                                     ObjectValue.MigrateFromChatID);

                    SetOptionalField(JsonObject, "pinned_message",
                                     ObjectValue.PinnedMessage);

                    return {std::move(JsonObject)};
                }
        };

        template <> struct Serializer<TelegramBotAPI::Type::CallbackQuery> {
                static Value Serialize(
                    const TelegramBotAPI::Type::CallbackQuery &ObjectValue) {
                    Object JsonObject;

                    SetField(JsonObject, "id", ObjectValue.ID);

                    SetField(JsonObject, "from", ObjectValue.From);

                    SetOptionalField(JsonObject, "message",
                                     ObjectValue.Message);

                    SetOptionalField(JsonObject, "inline_message_id",
                                     ObjectValue.InlineMessageID);

                    SetOptionalField(JsonObject, "data", ObjectValue.Data);

                    return {std::move(JsonObject)};
                }
        };
    } // namespace Detail

    template <typename Type> Value ToJson(const Type &ObjectValue) {
        using CleanType = Detail::RemoveCVRefT<Type>;

        return Detail::JsonConverter<CleanType>::Convert(ObjectValue);
    }
} // namespace TelegramBotAPI::JSON

#endif