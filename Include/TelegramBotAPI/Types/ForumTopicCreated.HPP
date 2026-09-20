#ifndef TELEGRAMBOTAPI_FORUMTOPICCREATED_HPP
#define TELEGRAMBOTAPI_FORUMTOPICCREATED_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ForumTopicCreated {
    std::string Name;
    long long IconColor;
    std::optional<std::string> IconCustomEmojiID{};
    std::optional<bool> IsNameImplicit{};
};

}

#endif // TELEGRAMBOTAPI_FORUMTOPICCREATED_HPP
