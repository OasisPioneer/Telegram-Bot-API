#ifndef TELEGRAMBOTAPI_BOTCOMMAND_HPP
#define TELEGRAMBOTAPI_BOTCOMMAND_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct BotCommand {
    std::string Command;
    std::string Description;
    std::optional<bool> IsEphemeral{};
};

}

#endif // TELEGRAMBOTAPI_BOTCOMMAND_HPP
