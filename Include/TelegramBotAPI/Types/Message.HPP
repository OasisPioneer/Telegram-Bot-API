#ifndef TELEGRAMBOTAPI_MESSAGE_HPP
#define TELEGRAMBOTAPI_MESSAGE_HPP

#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "Audio.HPP"
#include "Chat.HPP"
#include "Contact.HPP"
#include "Document.HPP"
#include "Location.HPP"
#include "MessageEntity.HPP"
#include "PhotoSize.HPP"
#include "Sticker.HPP"
#include "User.HPP"
#include "Venue.HPP"
#include "Video.HPP"
#include "Voice.HPP"

namespace TelegramBotAPI::Type {
    struct Message {
            long long                                      MessageID{};
            std::optional<TelegramBotAPI::Type::User>      From{};
            long long                                      Date{};
            TelegramBotAPI::Type::Chat                     Chat{};
            std::optional<TelegramBotAPI::Type::User>      ForwardFrom{};
            std::optional<long long>                       ForwardDate{};
            std::shared_ptr<TelegramBotAPI::Type::Message> ReplyToMessage{};
            std::optional<std::string>                     Text{};
            std::optional<std::vector<TelegramBotAPI::Type::MessageEntity>>
                                                          Entities{};
            std::optional<TelegramBotAPI::Type::Audio>    Audio{};
            std::optional<TelegramBotAPI::Type::Document> Document{};
            std::optional<std::vector<TelegramBotAPI::Type::PhotoSize>> Photo{};
            std::optional<TelegramBotAPI::Type::Sticker>   Sticker{};
            std::optional<TelegramBotAPI::Type::Video>     Video{};
            std::optional<TelegramBotAPI::Type::Voice>     Voice{};
            std::optional<std::string>                     Caption{};
            std::optional<TelegramBotAPI::Type::Contact>   Contact{};
            std::optional<TelegramBotAPI::Type::Location>  Location{};
            std::optional<TelegramBotAPI::Type::Venue>     Venue{};
            std::optional<TelegramBotAPI::Type::User>      NewChatMember{};
            std::optional<TelegramBotAPI::Type::User>      LeftChatMember{};
            std::optional<std::string>                     NewChatTitle{};
            std::optional<TelegramBotAPI::Type::PhotoSize> NewChatPhoto{};
            std::optional<bool>                            DeleteChatPhoto{};
            std::optional<bool>                            GroupChatCreated{};
            std::optional<bool>      SupergroupChatCreated{};
            std::optional<bool>      ChannelChatCreated{};
            std::optional<long long> MigrateToChatID{};
            std::optional<long long> MigrateFromChatID{};
            std::optional<std::shared_ptr<TelegramBotAPI::Type::Message>>
                PinnedMessage{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_MESSAGE_HPP
