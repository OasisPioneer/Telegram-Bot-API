#include <cassert>
#include <iostream>
#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/Methods/sendMessage.HPP"

int main() {
    TelegramBotAPI::Methods::sendMessage::Parameters Parameters;

    Parameters.ChatID = 1933943342;
    Parameters.Text   = "Hello Telegram";

    TelegramBotAPI::JSON::Object Object = Parameters.ToJson();

    assert(Object.contains("chat_id"));

    assert(Object.contains("text"));

    assert(Object.at("chat_id").as_int64() == 1933943342);

    assert(Object.at("text").as_string() == "Hello Telegram");

    assert(!Object.contains("business_connection_id"));

    assert(!Object.contains("message_thread_id"));

    assert(!Object.contains("direct_messages_topic_id"));

    assert(!Object.contains("disable_notification"));

    assert(!Object.contains("protect_content"));

    Parameters.BusinessConnectionID = "BusinessConnectionTest";

    Parameters.MessageThreadID = 123456;

    Parameters.DirectMessagesTopicID = 654321;

    Parameters.DisableNotification = true;

    Parameters.ProtectContent = false;

    Object = Parameters.ToJson();

    assert(Object.at("business_connection_id").as_string() ==
           "BusinessConnectionTest");

    assert(Object.at("message_thread_id").as_int64() == 123456);

    assert(Object.at("direct_messages_topic_id").as_int64() == 654321);

    assert(Object.at("disable_notification").as_bool());

    assert(!Object.at("protect_content").as_bool());

    std::string Json = boost::json::serialize(Object);

    std::cout << Json << std::endl;

    std::cout << "SendMessageParametersJsonTest passed" << std::endl;

    return 0;
}