#include <cassert>
#include <type_traits>

#include "TelegramBotAPI/JSON/Traits.HPP"
#include "TelegramBotAPI/Types/ShippingAddress.HPP"

int main()
{
    static_assert(
        TelegramBotAPI::JSON::Detail::IsShippingAddressV<
            TelegramBotAPI::Type::ShippingAddress
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsShippingAddressV<
            const TelegramBotAPI::Type::ShippingAddress
        >
    );

    static_assert(
        TelegramBotAPI::JSON::Detail::IsShippingAddressV<
            TelegramBotAPI::Type::ShippingAddress &
        >
    );

    static_assert(
        !TelegramBotAPI::JSON::Detail::IsShippingAddressV<
            TelegramBotAPI::Type::User
        >
    );

    TelegramBotAPI::Type::ShippingAddress ShippingAddress;

    assert(ShippingAddress.CountryCode.empty());
    assert(ShippingAddress.State.empty());
    assert(ShippingAddress.City.empty());
    assert(ShippingAddress.StreetLine1.empty());
    assert(ShippingAddress.StreetLine2.empty());
    assert(ShippingAddress.PostCode.empty());

    return 0;
}