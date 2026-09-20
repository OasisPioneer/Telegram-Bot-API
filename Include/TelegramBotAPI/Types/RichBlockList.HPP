#ifndef TELEGRAMBOTAPI_RICHBLOCKLIST_HPP
#define TELEGRAMBOTAPI_RICHBLOCKLIST_HPP

#include "TelegramBotAPI/Types/RichBlockListItem.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockList {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::RichBlockListItem> Items;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKLIST_HPP
