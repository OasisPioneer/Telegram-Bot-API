#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKLIST_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKLIST_HPP

#include "TelegramBotAPI/Types/InputRichBlockListItem.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockList {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::InputRichBlockListItem> Items;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKLIST_HPP
