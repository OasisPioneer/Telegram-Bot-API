#include <cassert>
#include <iostream>

#include <boost/json.hpp>

#include "TelegramBotAPI/Methods/getChat.HPP"

int main() {
    TelegramBotAPI::Methods::getChat::Parameters Parameters;

    Parameters.ChatID = 1933943342;

    TelegramBotAPI::JSON::Object Object = Parameters.ToJson();

    assert(Object.contains("chat_id"));

    assert(Object.at("chat_id").as_int64() == 1933943342);

    assert(Object.size() == 1);

    std::cout << boost::json::serialize(Object) << std::endl;

    std::cout << "GetChatParametersJsonTest passed" << std::endl;

    return 0;
}