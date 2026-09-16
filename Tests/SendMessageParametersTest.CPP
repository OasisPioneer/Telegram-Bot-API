#include <cassert>
#include <iostream>
#include <optional>
#include <string>

#include "TelegramBotAPI/Methods/sendMessage.HPP"

int main() {
    TelegramBotAPI::Methods::sendMessage::Parameters Parameters;

    Parameters.ChatID = 1933943342;
    Parameters.Text   = "Hello Telegram";

    assert(Parameters.ChatID == 1933943342);

    assert(Parameters.Text == "Hello Telegram");

    assert(!Parameters.BusinessConnectionID.has_value());

    assert(!Parameters.MessageThreadID.has_value());

    assert(!Parameters.DirectMessagesTopicID.has_value());

    assert(!Parameters.DisableNotification.has_value());

    assert(!Parameters.ProtectContent.has_value());

    Parameters.BusinessConnectionID = "BusinessConnectionTest";

    Parameters.MessageThreadID = 123456;

    Parameters.DirectMessagesTopicID = 654321;

    Parameters.DisableNotification = true;

    Parameters.ProtectContent = true;

    assert(Parameters.BusinessConnectionID.value() == "BusinessConnectionTest");

    assert(Parameters.MessageThreadID.value() == 123456);

    assert(Parameters.DirectMessagesTopicID.value() == 654321);

    assert(Parameters.DisableNotification.value());

    assert(Parameters.ProtectContent.value());

    std::cout << "SendMessageParametersTest passed" << std::endl;

    return 0;
}