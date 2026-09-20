#ifndef TELEGRAMBOTAPI_PASSPORTFILE_HPP
#define TELEGRAMBOTAPI_PASSPORTFILE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PassportFile {
    std::string FileID;
    std::string FileUniqueID;
    long long FileSize;
    long long FileDate;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTFILE_HPP
