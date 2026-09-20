#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILE_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorFile {
    std::string Source;
    std::string Type;
    std::string FileHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORFILE_HPP
