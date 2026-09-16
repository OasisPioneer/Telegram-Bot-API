#ifndef TELEGRAMBOTAPI_MESSAGE_HPP
#define TELEGRAMBOTAPI_MESSAGE_HPP

#include <string>
#include <vector>
#include <memory>

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
        TelegramBotAPI::Type::User From{};
        long long Date{};
        TelegramBotAPI::Type::Chat Chat{};
        TelegramBotAPI::Type::User ForwardFrom{};
        long long ForwardDate{};
        std::shared_ptr<Message> ReplyToMessage{};
        std::string Text{};
        std::vector<MessageEntity> Entities{};
        TelegramBotAPI::Type::Audio Audio{};
        TelegramBotAPI::Type::Document Document{};
        std::vector<PhotoSize> Photo{};
        TelegramBotAPI::Type::Sticker Sticker{};
        TelegramBotAPI::Type::Video Video{};
        TelegramBotAPI::Type::Voice Voice{};
        std::string Caption{};
        TelegramBotAPI::Type::Contact Contact{};
        TelegramBotAPI::Type::Location Location{};
        TelegramBotAPI::Type::Venue Venue{};
        TelegramBotAPI::Type::User NewChatMember{};
        TelegramBotAPI::Type::User LeftChatMember{};
        std::string NewChatTitle{};
        TelegramBotAPI::Type::PhotoSize NewChatPhoto{};
        bool DeleteChatPhoto{true};
        bool GroupChatCreated{true};
        bool SupergroupChatCreated{true};
        bool ChannelChatCreated{true};
        long long MigrateToChatID{};
        long long MigrateFromChatID{};
        std::shared_ptr<Message> PinnedMessage{};
    };
}

#endif // TELEGRAMBOTAPI_MESSAGE_HPP
