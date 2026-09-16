#include <cassert>
#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/Methods/getMe.HPP"

int main()
{
    TelegramBotAPI::Methods::getMe::Parameters Parameters;

    TelegramBotAPI::JSON::Object Object =
        Parameters.ToJson();

    assert(
        Object.empty()
    );

    std::cout
        << boost::json::serialize(Object)
        << std::endl;

    std::cout
        << "GetMeParametersJsonTest passed"
        << std::endl;

    return 0;
}