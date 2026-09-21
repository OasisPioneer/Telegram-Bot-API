#include <cassert>
#include <iostream>
#include <memory>
#include <variant>

#include <boost/json.hpp>

#include <TelegramBotAPI/JSON/Deserializer.HPP>
#include <TelegramBotAPI/JSON/Serializer.HPP>

#include <TelegramBotAPI/Types/Chat.HPP>
#include <TelegramBotAPI/Types/InaccessibleMessage.HPP>
#include <TelegramBotAPI/Types/Message.HPP>


int main()
{
    using namespace TelegramBotAPI;
    using namespace TelegramBotAPI::Type;
    using namespace TelegramBotAPI::JSON;


    // ============================================================
    // Test 1
    // Recursive:
    //
    // Message
    //   └── shared_ptr<Message>
    // ============================================================

    Message Root;

    Root.MessageID = 100;
    Root.Date = 1234567890;
    Root.Text = "root message";


    auto Reply = std::make_shared<Message>();

    Reply->MessageID = 99;
    Reply->Date = 1234567880;
    Reply->Text = "reply message";

    Root.ReplyToMessage = Reply;


    // ============================================================
    // Test 2
    //
    // optional<
    //     variant<
    //         shared_ptr<Message>,
    //         InaccessibleMessage
    //     >
    // >
    //
    // First variant alternative:
    // shared_ptr<Message>
    // ============================================================

    auto Pinned = std::make_shared<Message>();

    Pinned->MessageID = 98;
    Pinned->Date = 1234567870;
    Pinned->Text = "pinned message";

    Root.PinnedMessage = Pinned;


    // ============================================================
    // Serialize Root
    // ============================================================

    const auto Json = ToJson(Root);

    assert(Json.is_object());


    // ============================================================
    // Deserialize Root
    // ============================================================

    const auto Result = FromJson<Message>(Json);


    // ============================================================
    // Verify root Message
    // ============================================================

    assert(Result.MessageID == 100);
    assert(Result.Date == 1234567890);

    assert(Result.Text.has_value());
    assert(Result.Text.value() == "root message");


    // ============================================================
    // Verify recursive shared_ptr<Message>
    // ============================================================

    assert(Result.ReplyToMessage != nullptr);

    assert(Result.ReplyToMessage->MessageID == 99);
    assert(Result.ReplyToMessage->Date == 1234567880);

    assert(Result.ReplyToMessage->Text.has_value());
    assert(
        Result.ReplyToMessage->Text.value()
        == "reply message"
    );


    // ============================================================
    // Verify:
    //
    // optional<
    //     variant<
    //         shared_ptr<Message>,
    //         InaccessibleMessage
    //     >
    // >
    //
    // First alternative:
    // shared_ptr<Message>
    // ============================================================

    assert(Result.PinnedMessage.has_value());

    assert(
        std::holds_alternative<std::shared_ptr<Message>>(
            Result.PinnedMessage.value()
        )
    );

    const auto& PinnedResult =
        std::get<std::shared_ptr<Message>>(
            Result.PinnedMessage.value()
        );

    assert(PinnedResult != nullptr);

    assert(PinnedResult->MessageID == 98);
    assert(PinnedResult->Date == 1234567870);

    assert(PinnedResult->Text.has_value());
    assert(
        PinnedResult->Text.value()
        == "pinned message"
    );


    // ============================================================
    // Test 3
    //
    // Same field:
    //
    // optional<
    //     variant<
    //         shared_ptr<Message>,
    //         InaccessibleMessage
    //     >
    // >
    //
    // Second variant alternative:
    // InaccessibleMessage
    // ============================================================

    Message VariantRoot;

    VariantRoot.MessageID = 200;
    VariantRoot.Date = 2234567890;


    InaccessibleMessage Inaccessible;

    Inaccessible.MessageID = 199;
    Inaccessible.Date = 0;


    // Telegram Bot API:
    //
    // InaccessibleMessage {
    //     chat
    //     message_id
    //     date
    // }
    //

    Chat InaccessibleChat;

    InaccessibleChat.ID = 12345;

    Inaccessible.Chat = InaccessibleChat;


    VariantRoot.PinnedMessage = Inaccessible;


    // ============================================================
    // Serialize
    // ============================================================

    const auto VariantJson =
        ToJson(VariantRoot);

    assert(VariantJson.is_object());


    // ============================================================
    // Deserialize
    // ============================================================

    const auto VariantResult =
        FromJson<Message>(VariantJson);


    // ============================================================
    // Verify optional
    // ============================================================

    assert(
        VariantResult.PinnedMessage.has_value()
    );


    // ============================================================
    // Verify variant alternative
    //
    // Must be InaccessibleMessage
    // ============================================================

    assert(
        std::holds_alternative<InaccessibleMessage>(
            VariantResult.PinnedMessage.value()
        )
    );


    const auto& InaccessibleResult =
        std::get<InaccessibleMessage>(
            VariantResult.PinnedMessage.value()
        );


    // ============================================================
    // Verify InaccessibleMessage
    // ============================================================

    assert(
        InaccessibleResult.MessageID
        == 199
    );

    assert(
        InaccessibleResult.Date
        == 0
    );


    // ============================================================
    // Verify nested Chat
    // ============================================================

    assert(
        InaccessibleResult.Chat.ID
        == 12345
    );


    // ============================================================
    // Success
    // ============================================================

    std::cout
        << "Message recursive + "
           "optional/variant round-trip: PASS\n";

    return 0;
}