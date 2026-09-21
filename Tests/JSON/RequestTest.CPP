#include <cassert>
#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/Methods/getMe.HPP"

int main() {
    using namespace TelegramBotAPI::Methods;

    getMe::Parameters Parameters;

    const auto Json = Parameters.ToJson();

    assert(Json.empty());
    assert(!Parameters.RequiresMultipart());

    const auto Form = Parameters.ToMultipart();

    assert(Form.GetParts().empty());

    std::cout << "getMe request test: PASS\n";

    return 0;
}
