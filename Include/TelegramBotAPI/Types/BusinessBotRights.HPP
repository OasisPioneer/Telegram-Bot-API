#ifndef TELEGRAMBOTAPI_BUSINESSBOTRIGHTS_HPP
#define TELEGRAMBOTAPI_BUSINESSBOTRIGHTS_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct BusinessBotRights {
    std::optional<bool> CanReply{};
    std::optional<bool> CanReadMessages{};
    std::optional<bool> CanDeleteSentMessages{};
    std::optional<bool> CanDeleteAllMessages{};
    std::optional<bool> CanEditName{};
    std::optional<bool> CanEditBio{};
    std::optional<bool> CanEditProfilePhoto{};
    std::optional<bool> CanEditUserName{};
    std::optional<bool> CanChangeGiftSettings{};
    std::optional<bool> CanViewGiftsAndStars{};
    std::optional<bool> CanConvertGiftsToStars{};
    std::optional<bool> CanTransferAndUpgradeGifts{};
    std::optional<bool> CanTransferStars{};
    std::optional<bool> CanManageStories{};
};

}

#endif // TELEGRAMBOTAPI_BUSINESSBOTRIGHTS_HPP
