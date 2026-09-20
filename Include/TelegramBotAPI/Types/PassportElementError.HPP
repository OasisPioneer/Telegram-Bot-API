#ifndef TELEGRAMBOTAPI_PASSPORTELEMENTERROR_HPP
#define TELEGRAMBOTAPI_PASSPORTELEMENTERROR_HPP

#include "TelegramBotAPI/Types/PassportElementErrorDataField.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFrontSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorReverseSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorSelfie.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorUnspecified.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using PassportElementError = std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>;

}

#endif // TELEGRAMBOTAPI_PASSPORTELEMENTERROR_HPP
