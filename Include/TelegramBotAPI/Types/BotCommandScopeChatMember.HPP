#ifndef TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATMEMBER_HPP
#define TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATMEMBER_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct BotCommandScopeChatMember {
    std::string Type;
    long long ChatID;
    long long UserID;
};

}

#endif // TELEGRAMBOTAPI_BOTCOMMANDSCOPECHATMEMBER_HPP
