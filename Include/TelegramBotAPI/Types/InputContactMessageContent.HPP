#ifndef TELEGRAMBOTAPI_INPUTCONTACTMESSAGECONTENT_HPP
#define TELEGRAMBOTAPI_INPUTCONTACTMESSAGECONTENT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputContactMessageContent {
    std::string PhoneNumber;
    std::string FirstName;
    std::optional<std::string> LastName{};
    std::optional<std::string> Vcard{};
};

}

#endif // TELEGRAMBOTAPI_INPUTCONTACTMESSAGECONTENT_HPP
