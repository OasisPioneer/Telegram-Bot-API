#include "TelegramBotAPI/JSON/Traits.HPP"

static_assert(
    TelegramBotAPI::JSON::Detail::IsCallbackQueryV<
        TelegramBotAPI::Type::CallbackQuery
    >
);

static_assert(
    TelegramBotAPI::JSON::Detail::IsCallbackQueryV<
        const TelegramBotAPI::Type::CallbackQuery&
    >
);

static_assert(
    !TelegramBotAPI::JSON::Detail::IsCallbackQueryV<
        TelegramBotAPI::Type::User
    >
);

int main()
{
    return 0;
}