#ifndef TELEGRAMBOTAPI_INPUTRICHMESSAGE_HPP
#define TELEGRAMBOTAPI_INPUTRICHMESSAGE_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/InputRichMessageMedia.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichMessage {
    std::optional<std::vector<::TelegramBotAPI::Type::InputRichBlock>> Blocks{};
    std::optional<std::string> HTML{};
    std::optional<std::string> Markdown{};
    std::optional<std::vector<::TelegramBotAPI::Type::InputRichMessageMedia>> Media{};
    std::optional<bool> IsRtl{};
    std::optional<bool> SkipEntityDetection{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHMESSAGE_HPP
