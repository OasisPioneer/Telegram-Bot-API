#ifndef TELEGRAMBOTAPI_INPUTTEXTMESSAGECONTENT_HPP
#define TELEGRAMBOTAPI_INPUTTEXTMESSAGECONTENT_HPP

#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputTextMessageContent {
    std::string MessageText;
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    std::optional<::TelegramBotAPI::Type::LinkPreviewOptions> LinkPreviewOptions{};
};

}

#endif // TELEGRAMBOTAPI_INPUTTEXTMESSAGECONTENT_HPP
