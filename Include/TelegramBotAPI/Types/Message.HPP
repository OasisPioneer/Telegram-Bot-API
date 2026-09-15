#ifndef TELEGRAMBOTAPI_MESSAGE_HPP
#define TELEGRAMBOTAPI_MESSAGE_HPP

#include <string>
#include <vector>
#include <memory>
#include <optional>

#include "User.HPP"
#include "Chat.HPP"
#include "MessageEntity.HPP"
#include "Audio.HPP"
#include "Document.HPP"
#include "PhotoSize.HPP"
#include "Sticker.HPP"
#include "Video.HPP"
#include "Voice.HPP"
#include "Contact.HPP"
#include "Location.HPP"
#include "Venue.HPP"

namespace TelegramBotAPI::Type {
    struct Message {
        long long MessageID{};
        User From{};
        long long Date{};
        Chat Chat{};
        User ForwardFrom{};
        long long ForwardDate{};
        std::optional<std::shared_ptr<Message>>  ReplyToMessage{};
        std::string Text{};
        std::vector<MessageEntity> Entities{};
        Audio Audio{};
        Document Document{};
        std::vector<PhotoSize> Photo{};
        Sticker Sticker{};
        Video Video{};
        Voice Voice{};
        std::string Caption{};
        Contact Contact{};
        Location Location{};
        Venue Venue{};
        User NewChatMember{};
        User LeftChatMember{};
        std::string NewChatTitle{};
        PhotoSize NewChatPhoto{};
        bool DeleteChatPhoto{true};
        bool GroupChatCreated{true};
        bool SupergroupChatCreated{true};
        bool ChannelChatCreated{true};
        long long MigrateToChatID{};
        long long MigrateFromChatID{};
        std::optional<std::shared_ptr<Message>> PinnedMessage{};
    };
}

#endif // TELEGRAMBOTAPI_MESSAGE_HPP
