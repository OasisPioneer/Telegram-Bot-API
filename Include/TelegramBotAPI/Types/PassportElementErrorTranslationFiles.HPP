#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILES_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILES_HPP

#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct PassportElementErrorTranslationFiles {
    std::string Source;
    std::string Type;
    std::vector<std::string> FileHashes;
    std::string Message;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERRORTRANSLATIONFILES_HPP
