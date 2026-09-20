#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORDATAFIELD_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORDATAFIELD_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorDataField {
    std::string Source;
    std::string Type;
    std::string FieldName;
    std::string DataHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORDATAFIELD_HPP
