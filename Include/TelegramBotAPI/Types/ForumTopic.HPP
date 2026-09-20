#ifndef TELEGRAMBOTAPI_FORUMTOPIC_HPP
#define TELEGRAMBOTAPI_FORUMTOPIC_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ForumTopic {
    long long MessageThreadID;
    std::string Name;
    long long IconColor;
    std::optional<std::string> IconCustomEmojiID{};
    std::optional<bool> IsNameImplicit{};
};

}

#endif // TELEGRAMBOTAPI_FORUMTOPIC_HPP
