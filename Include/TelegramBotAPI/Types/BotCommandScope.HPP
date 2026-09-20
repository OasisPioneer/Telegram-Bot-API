#ifndef TELEGRAMBOTAPI_BOTCOMMANDSCOPE_HPP
#define TELEGRAMBOTAPI_BOTCOMMANDSCOPE_HPP

#include "TelegramBotAPI/Types/BotCommandScopeAllChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllGroupChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllPrivateChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChat.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatMember.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeDefault.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using BotCommandScope = std::variant<::TelegramBotAPI::Type::BotCommandScopeDefault, ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats, ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats, ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChat, ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChatMember>;

}

#endif // TELEGRAMBOTAPI_BOTCOMMANDSCOPE_HPP
