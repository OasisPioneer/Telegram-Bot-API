#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORSELFIE_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORSELFIE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorSelfie {
    std::string Source;
    std::string Type;
    std::string FileHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORSELFIE_HPP
