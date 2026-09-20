#ifndef TELEGRAMBOTAPI_INPUTPOLLOPTION_HPP
#define TELEGRAMBOTAPI_INPUTPOLLOPTION_HPP

#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaLink.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaLocation.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaSticker.HPP"
#include "TelegramBotAPI/Types/InputMediaVenue.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputPollOption {
    std::string Text;
    std::optional<std::string> TextParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};
    std::optional<std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaLink, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaSticker, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo>> Media{};
};

}

#endif // TELEGRAMBOTAPI_INPUTPOLLOPTION_HPP
