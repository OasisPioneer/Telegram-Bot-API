#ifndef TELEGRAMBOTAPI_BOTACCESSSETTINGS_HPP
#define TELEGRAMBOTAPI_BOTACCESSSETTINGS_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <vector>

namespace TelegramBotAPI::Type {

struct BotAccessSettings {
    bool IsAccessRestricted;
    std::optional<std::vector<::TelegramBotAPI::Type::User>> AddedUsers{};
};

}

#endif // TELEGRAMBOTAPI_BOTACCESSSETTINGS_HPP
