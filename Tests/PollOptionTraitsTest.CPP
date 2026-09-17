#include <cassert>
#include <type_traits>

#include "TelegramBotAPI/JSON/Traits.HPP"
#include "TelegramBotAPI/Types/PollOption.HPP"

int main()
{
    static_assert(
        TelegramBotAPI::JSON::Detail::IsPollOptionV<
            TelegramBotAPI::Type::PollOption
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsPollOptionV<
            const TelegramBotAPI::Type::PollOption
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsPollOptionV<
            TelegramBotAPI::Type::PollOption &
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsPollOptionV<
            TelegramBotAPI::Type::User
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsPollOptionV<
            TelegramBotAPI::Type::Poll
        >
    );

    TelegramBotAPI::Type::PollOption PollOption;

    assert(PollOption.PersistentID.empty());
    assert(PollOption.Text.empty());
    assert(PollOption.TextEntities.empty());
    assert(PollOption.VoterCount == 0);

    assert(!PollOption.AddedByUser.has_value());
    assert(!PollOption.AddedByChat.has_value());
    assert(!PollOption.AdditionDate.has_value());

    return 0;
}