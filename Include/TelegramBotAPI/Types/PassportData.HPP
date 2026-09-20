#ifndef TELEGRAMBOTAPI_PASSPORTDATA_HPP
#define TELEGRAMBOTAPI_PASSPORTDATA_HPP

#include "TelegramBotAPI/Types/EncryptedCredentials.HPP"
#include "TelegramBotAPI/Types/EncryptedPassportElement.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct PassportData {
    std::vector<::TelegramBotAPI::Type::EncryptedPassportElement> Data;
    ::TelegramBotAPI::Type::EncryptedCredentials Credentials;
};

}

#endif // TELEGRAMBOTAPI_PASSPORTDATA_HPP
