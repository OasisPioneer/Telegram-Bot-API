#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORUNSPECIFIED_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORUNSPECIFIED_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorUnspecified {
    std::string Source;
    std::string Type;
    std::string ElementHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORUNSPECIFIED_HPP
