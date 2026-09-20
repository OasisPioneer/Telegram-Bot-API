#ifndef TELEGRAMBOTAPI_PAIDMEDIAPREVIEW_HPP
#define TELEGRAMBOTAPI_PAIDMEDIAPREVIEW_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct PaidMediaPreview {
    std::string Type;
    std::optional<long long> Width{};
    std::optional<long long> Height{};
    std::optional<long long> Duration{};
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIAPREVIEW_HPP
