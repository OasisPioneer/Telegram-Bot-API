#ifndef TELEGRAMBOTAPI_ERRORRESPONSE_HPP
#define TELEGRAMBOTAPI_ERRORRESPONSE_HPP

#include "TelegramBotAPI/Types/ResponseParameters.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ErrorResponse {
    bool Ok;
    long long ErrorCode;
    std::string Description;
    std::optional<::TelegramBotAPI::Type::ResponseParameters> Parameters{};
};

}

#endif // TELEGRAMBOTAPI_ERRORRESPONSE_HPP
