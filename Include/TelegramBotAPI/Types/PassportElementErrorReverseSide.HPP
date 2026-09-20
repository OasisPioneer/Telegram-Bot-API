#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORREVERSESIDE_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORREVERSESIDE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorReverseSide {
    std::string Source;
    std::string Type;
    std::string FileHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORREVERSESIDE_HPP
