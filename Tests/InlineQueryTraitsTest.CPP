#include <cassert>
#include <type_traits>

#include "TelegramBotAPI/JSON/Traits.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"

int main()
{
    static_assert(
        TelegramBotAPI::JSON::Detail::IsInlineQueryV<
            TelegramBotAPI::Type::InlineQuery
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsInlineQueryV<
            const TelegramBotAPI::Type::InlineQuery
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsInlineQueryV<
            TelegramBotAPI::Type::InlineQuery &
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsInlineQueryV<
            TelegramBotAPI::Type::User
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsInlineQueryV<
            TelegramBotAPI::Type::Message
        >
    );

    TelegramBotAPI::Type::InlineQuery InlineQuery;

    assert(InlineQuery.ID.empty());

    assert(InlineQuery.From.ID == 0);
    assert(InlineQuery.From.FirstName.empty());
    assert(!InlineQuery.From.UserName.has_value());

    assert(InlineQuery.Query.empty());
    assert(InlineQuery.Offset.empty());

    assert(!InlineQuery.ChatType.has_value());
    assert(!InlineQuery.Location.has_value());

    return 0;
}