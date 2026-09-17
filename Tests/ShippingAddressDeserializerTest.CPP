#include <cassert>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"
#include "TelegramBotAPI/Types/ShippingAddress.HPP"

int main()
{
    const std::string JSONText = R"({
        "country_code": "US",
        "state": "California",
        "city": "Los Angeles",
        "street_line1": "100 Main Street",
        "street_line2": "Apartment 20",
        "post_code": "90001"
    })";

    const TelegramBotAPI::JSON::Value JsonValue =
        boost::json::parse(JSONText);

    const TelegramBotAPI::Type::ShippingAddress Result =
        TelegramBotAPI::JSON::FromJson<
            TelegramBotAPI::Type::ShippingAddress
        >(JsonValue);

    assert(Result.CountryCode == "US");
    assert(Result.State == "California");
    assert(Result.City == "Los Angeles");
    assert(Result.StreetLine1 == "100 Main Street");
    assert(Result.StreetLine2 == "Apartment 20");
    assert(Result.PostCode == "90001");

    return 0;
}