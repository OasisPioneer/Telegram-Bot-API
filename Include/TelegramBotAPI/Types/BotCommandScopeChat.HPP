#ifndef TELEGRAMBOTAPI_BOTCOMMANDSCOPECHAT_HPP
#define TELEGRAMBOTAPI_BOTCOMMANDSCOPECHAT_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct BotCommandScopeChat {
    std::string Type;
    long long ChatID;
};

}

#endif // TELEGRAMBOTAPI_BOTCOMMANDSCOPECHAT_HPP
