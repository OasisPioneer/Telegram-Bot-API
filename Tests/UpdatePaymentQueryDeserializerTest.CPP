#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

int main()
{
    {
        const std::string JSONText = R"({
            "update_id": 40001,
            "shipping_query": {
                "id": "shipping-123",
                "from": {
                    "id": 456,
                    "first_name": "Test"
                },
                "invoice_payload": "invoice-123",
                "shipping_address": {
                    "country_code": "US",
                    "state": "California",
                    "city": "Los Angeles",
                    "street_line1": "100 Main Street",
                    "street_line2": "Apartment 1",
                    "post_code": "90001"
                }
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Update Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Update
            >(JsonValue);

        assert(Result.UpdateID == 40001);

        assert(Result.ShippingQuery.has_value());

        assert(
            Result.ShippingQuery->ID ==
            "shipping-123"
        );

        assert(
            Result.ShippingQuery->From.ID ==
            456
        );

        assert(
            Result.ShippingQuery->InvoicePayload ==
            "invoice-123"
        );

        assert(
            Result.ShippingQuery->ShippingAddress.City ==
            "Los Angeles"
        );

        assert(!Result.PreCheckoutQuery.has_value());
        assert(!Result.Message.has_value());
        assert(!Result.InlineQuery.has_value());
        assert(!Result.CallbackQuery.has_value());
    }

    {
        const std::string JSONText = R"({
            "update_id": 40002,
            "pre_checkout_query": {
                "id": "pre-checkout-123",
                "from": {
                    "id": 789,
                    "first_name": "Buyer"
                },
                "currency": "USD",
                "total_amount": 2500,
                "invoice_payload": "invoice-456"
            }
        })";

        const TelegramBotAPI::JSON::Value JsonValue =
            boost::json::parse(JSONText);

        const TelegramBotAPI::Type::Update Result =
            TelegramBotAPI::JSON::FromJson<
                TelegramBotAPI::Type::Update
            >(JsonValue);

        assert(Result.UpdateID == 40002);

        assert(Result.PreCheckoutQuery.has_value());

        assert(
            Result.PreCheckoutQuery->ID ==
            "pre-checkout-123"
        );

        assert(
            Result.PreCheckoutQuery->From.ID ==
            789
        );

        assert(
            Result.PreCheckoutQuery->Currency ==
            "USD"
        );

        assert(
            Result.PreCheckoutQuery->TotalAmount ==
            2500
        );

        assert(
            Result.PreCheckoutQuery->InvoicePayload ==
            "invoice-456"
        );

        assert(!Result.PreCheckoutQuery->ShippingOptionID.has_value());
        assert(!Result.PreCheckoutQuery->OrderInfo.has_value());

        assert(!Result.ShippingQuery.has_value());
        assert(!Result.Message.has_value());
        assert(!Result.InlineQuery.has_value());
        assert(!Result.CallbackQuery.has_value());
    }

    return 0;
}