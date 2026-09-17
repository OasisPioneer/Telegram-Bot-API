#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/ShippingQuery.HPP"

int main()
{
    const std::string JSONText = R"({
        "id": "shipping-query-123",
        "from": {
            "id": 456,
            "first_name": "Test",
            "username": "testuser"
        },
        "invoice_payload": "order-123",
        "shipping_address": {
            "country_code": "US",
            "state": "California",
            "city": "Los Angeles",
            "street_line1": "100 Main Street",
            "street_line2": "Apartment 20",
            "post_code": "90001"
        }
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::ShippingQuery Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::ShippingQuery
        >(JsonValue);

    assert(Result.ID == "shipping-query-123");

    assert(Result.From.ID == 456);
    assert(Result.From.FirstName == "Test");

    assert(Result.From.UserName.has_value());

    assert(
        Result.From.UserName.value() ==
        "testuser"
    );

    assert(Result.InvoicePayload == "order-123");

    assert(
        Result.ShippingAddress.CountryCode ==
        "US"
    );

    assert(
        Result.ShippingAddress.State ==
        "California"
    );

    assert(
        Result.ShippingAddress.City ==
        "Los Angeles"
    );

    assert(
        Result.ShippingAddress.StreetLine1 ==
        "100 Main Street"
    );

    assert(
        Result.ShippingAddress.StreetLine2 ==
        "Apartment 20"
    );

    assert(
        Result.ShippingAddress.PostCode ==
        "90001"
    );

    return 0;
}