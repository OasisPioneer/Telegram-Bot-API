#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILES_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILES_HPP

#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct PassportElementErrorFiles {
    std::string Source;
    std::string Type;
    std::vector<std::string> FileHashes;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILES_HPP
