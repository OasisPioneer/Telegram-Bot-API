#ifndef TELEGRAMBOTAPI_FORUMTOPICEDITED_HPP
#define TELEGRAMBOTAPI_FORUMTOPICEDITED_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ForumTopicEdited {
    std::optional<std::string> Name{};
    std::optional<std::string> IconCustomEmojiID{};
};

}

#endif // TELEGRAMBOTAPI_FORUMTOPICEDITED_HPP
