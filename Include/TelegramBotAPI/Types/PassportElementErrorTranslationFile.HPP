#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILE_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportElementErrorTranslationFile {
    std::string Source;
    std::string Type;
    std::string FileHash;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILE_HPP
