#ifndef TELEGRAMBOTAPI_WEBHOOKINFO_HPP
#define TELEGRAMBOTAPI_WEBHOOKINFO_HPP

#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct WebhookInfo {
    std::string URL;
    bool HasCustomCertificate;
    long long PendingUpdateCount;
    std::optional<std::string> IPAddress{};
    std::optional<long long> LastErrorDate{};
    std::optional<std::string> LastErrorMessage{};
    std::optional<long long> LastSynchronizationErrorDate{};
    std::optional<long long> MaxConnections{};
    std::optional<std::vector<std::string>> AllowedUpdates{};
};

}

#endif // TELEGRAMBOTAPI_WEBHOOKINFO_HPP
