#ifndef TELEGRAMBOTAPI_ACCEPTEDGIFTTYPES_HPP
#define TELEGRAMBOTAPI_ACCEPTEDGIFTTYPES_HPP

namespace TelegramBotAPI::Type {

struct AcceptedGiftTypes {
    bool UnlimitedGifts;
    bool LimitedGifts;
    bool UniqueGifts;
    bool PremiumSubscription;
    bool GiftsFromChannels;
};

}

#endif // TELEGRAMBOTAPI_ACCEPTEDGIFTTYPES_HPP
