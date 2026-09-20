#ifndef TELEGRAMBOTAPI_ENCRYPTEDPASSPORTELEMENT_HPP
#define TELEGRAMBOTAPI_ENCRYPTEDPASSPORTELEMENT_HPP

#include "TelegramBotAPI/Types/PassportFile.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct EncryptedPassportElement {
    std::string Type;
    std::optional<std::string> Data{};
    std::optional<std::string> PhoneNumber{};
    std::optional<std::string> Email{};
    std::optional<std::vector<::TelegramBotAPI::Type::PassportFile>> Files{};
    std::optional<::TelegramBotAPI::Type::PassportFile> FrontSide{};
    std::optional<::TelegramBotAPI::Type::PassportFile> ReverseSide{};
    std::optional<::TelegramBotAPI::Type::PassportFile> Selfie{};
    std::optional<std::vector<::TelegramBotAPI::Type::PassportFile>> Translation{};
    std::string Hash;
};

}

#endif // TELEGRAMBOTAPI_ENCRYPTEDPASSPORTELEMENT_HPP
