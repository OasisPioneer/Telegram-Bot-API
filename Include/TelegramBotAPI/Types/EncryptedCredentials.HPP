#ifndef TELEGRAMBOTAPI_ENCRYPTEDCREDENTIALS_HPP
#define TELEGRAMBOTAPI_ENCRYPTEDCREDENTIALS_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct EncryptedCredentials {
    std::string Data;
    std::string Hash;
    std::string Secret;
};

}

#endif // TELEGRAMBOTAPI_ENCRYPTEDCREDENTIALS_HPP
