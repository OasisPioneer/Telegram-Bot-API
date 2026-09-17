#include <cassert>

#include "TelegramBotAPI/JSON/Traits.HPP"
#include "TelegramBotAPI/Types/Link.HPP"

int main()
{
    static_assert(
        TelegramBotAPI::JSON::Detail::IsLinkV<
            TelegramBotAPI::Type::Link
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsLinkV<
            const TelegramBotAPI::Type::Link
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsLinkV<
            TelegramBotAPI::Type::Link &
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsLinkV<
            TelegramBotAPI::Type::User
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsLinkV<
            TelegramBotAPI::Type::PollMedia
        >
    );

    TelegramBotAPI::Type::Link Link;

    assert(Link.URL.empty());

    return 0;
}