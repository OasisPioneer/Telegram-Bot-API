#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/Update.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"

/*
    clang++-22 \
    -std=c++17 \
    -Wall \
    -Wextra \
    -Wpedantic \
    -I../Include \
    TypeCompileTest.CPP \
    -o TypeCompileTest
 */

int main()
{
    TelegramBotAPI::Type::User User{};
    TelegramBotAPI::Type::Chat Chat{};
    TelegramBotAPI::Type::Message Message{};
    TelegramBotAPI::Type::Update Update{};
    TelegramBotAPI::Type::Audio Audio{};
    TelegramBotAPI::Type::InlineQuery InlineQuery{};
    TelegramBotAPI::Type::ChosenInlineResult ChosenInlineResult{};
    TelegramBotAPI::Type::CallbackQuery CallbackQuery{};
    TelegramBotAPI::Type::Location Location{};
    TelegramBotAPI::Type::PhotoSize PhotoSize{};
    TelegramBotAPI::Type::Document Document{};
    TelegramBotAPI::Type::Video Video{};
    TelegramBotAPI::Type::Voice Voice{};
    TelegramBotAPI::Type::Contact Contact{};
    TelegramBotAPI::Type::File File{};
    TelegramBotAPI::Type::Sticker Sticker{};
    TelegramBotAPI::Type::MessageEntity MessageEntity{};
    TelegramBotAPI::Type::Venue Venue{};

    (void)User;
    (void)Chat;
    (void)Message;
    (void)Update;
    (void)Audio;
    (void)InlineQuery;
    (void)ChosenInlineResult;
    (void)CallbackQuery;
    (void)Location;
    (void)PhotoSize;
    (void)Document;
    (void)Video;
    (void)Voice;
    (void)Contact;
    (void)File;
    (void)Sticker;
    (void)MessageEntity;
    (void)Venue;

    return 0;
}