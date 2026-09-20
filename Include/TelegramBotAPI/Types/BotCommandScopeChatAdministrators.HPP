#ifndef TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATADMINISTRATORS_HPP
#define TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATADMINISTRATORS_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct BotCommandScopeChatAdministrators {
    std::string Type;
    long long ChatID;
};

}

#endif // TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATADMINISTRATORS_HPP
