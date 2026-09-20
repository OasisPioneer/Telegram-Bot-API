#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORFRONTSIDE_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORFRONTSIDE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorFrontSide {
    std::string Source;
    std::string Type;
    std::string FileHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORFRONTSIDE_HPP
