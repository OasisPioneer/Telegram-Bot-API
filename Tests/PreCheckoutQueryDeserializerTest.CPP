#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/PreCheckoutQuery.HPP"

int main()
{
    const std::string JSONText = R"({
        "id": "pre-checkout-123",
        "from": {
            "id": 789,
            "first_name": "Buyer",
            "username": "buyer"
        },
        "currency": "USD",
        "total_amount": 1499,
        "invoice_payload": "order-456",
        "shipping_option_id": "express",
        "order_info": {
            "name": "Buyer Name",
            "phone_number": "+1234567890",
            "email": "buyer@example.com",
            "shipping_address": {
                "country_code": "US",
                "state": "California",
                "city": "Los Angeles",
                "street_line1": "200 Market Street",
                "street_line2": "Suite 10",
                "post_code": "90002"
            }
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::PreCheckoutQuery Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::PreCheckoutQuery
        >(JsonValue);

    assert(Result.ID == "pre-checkout-123");

    assert(Result.From.ID == 789);
    assert(Result.From.FirstName == "Buyer");

    assert(Result.From.UserName.has_value());

    assert(
        Result.From.UserName.value() ==
        "buyer"
    );

    assert(Result.Currency == "USD");
    assert(Result.TotalAmount == 1499);
    assert(Result.InvoicePayload == "order-456");

    assert(Result.ShippingOptionID.has_value());

    assert(
        Result.ShippingOptionID.value() ==
        "express"
    );

    assert(Result.OrderInfo.has_value());

    assert(Result.OrderInfo->Name.has_value());

    assert(
        Result.OrderInfo->Name.value() ==
        "Buyer Name"
    );

    assert(Result.OrderInfo->PhoneNumber.has_value());

    assert(
        Result.OrderInfo->PhoneNumber.value() ==
        "+1234567890"
    );

    assert(Result.OrderInfo->Email.has_value());

    assert(
        Result.OrderInfo->Email.value() ==
        "buyer@example.com"
    );

    assert(Result.OrderInfo->ShippingAddress.has_value());

    assert(
        Result.OrderInfo->ShippingAddress->CountryCode ==
        "US"
    );

    assert(
        Result.OrderInfo->ShippingAddress->State ==
        "California"
    );

    assert(
        Result.OrderInfo->ShippingAddress->City ==
        "Los Angeles"
    );

    assert(
        Result.OrderInfo->ShippingAddress->StreetLine1 ==
        "200 Market Street"
    );

    assert(
        Result.OrderInfo->ShippingAddress->StreetLine2 ==
        "Suite 10"
    );

    assert(
        Result.OrderInfo->ShippingAddress->PostCode ==
        "90002"
    );

    return 0;
}