function(add_telegram_test TestName)
    add_executable(
            ${TestName}
            ${TestName}.CPP
    )

    target_link_libraries(
            ${TestName}
            PRIVATE
            TelegramBotAPI
    )

    add_test(
            NAME ${TestName}
            COMMAND ${TestName}
    )
endfunction()


add_telegram_test(HTTPClientTest)
add_telegram_test(TelegramClientTest)
add_telegram_test(HTTPPostTest)

add_telegram_test(ChatTest)
add_telegram_test(ChatSerializerTest)
add_telegram_test(ChatDeserializerTest)

add_telegram_test(MessageCompileTest)

add_telegram_test(MessageEntitySerializerTest)
add_telegram_test(MessageEntityDeserializerTest)

add_telegram_test(PhotoSizeSerializerTest)
add_telegram_test(PhotoSizeDeserializerTest)

add_telegram_test(AudioSerializerTest)
add_telegram_test(AudioDeserializerTest)

add_telegram_test(StickerSerializerTest)
add_telegram_test(StickerDeserializerTest)

add_telegram_test(VideoSerializerTest)
add_telegram_test(VideoDeserializerTest)

add_telegram_test(CallbackQueryCompileTest)
add_telegram_test(CallbackQueryTraitsTest)

add_telegram_test(CallbackQuerySerializerTest)
add_telegram_test(CallbackQueryDeserializerTest)

add_telegram_test(UpdateDeserializerTest)
add_telegram_test(UpdateCallbackQueryDeserializerTest)

add_telegram_test(GetMeTest)
add_telegram_test(GetChatTest)
add_telegram_test(GetUpdatesTest)
add_telegram_test(GetUpdatesEmptyTest)
add_telegram_test(SendMessageTest)

add_telegram_test(SendMessageParametersTest)
add_telegram_test(SendMessageParametersJsonTest)

add_telegram_test(AnswerCallbackQueryTest)

add_telegram_test(GetChatParametersJsonTest)

add_telegram_test(GetUpdatesParametersJsonTest)
add_telegram_test(GetMeParametersJsonTest)

add_telegram_test(TelegramClientAPIURLTest)
add_telegram_test(TelegramClientTransportTest)
add_telegram_test(TelegramClientSendMessageTransportTest)

add_telegram_test(TelegramAPIErrorTest)
add_telegram_test(TelegramClientHTTPErrorTest)
add_telegram_test(TelegramClientJSONParseErrorTest)
add_telegram_test(TelegramClientInvalidResponseTest)
add_telegram_test(TelegramClientDeserializeErrorTest)

add_telegram_test(TelegramBotAPIIntegrationTest)
add_telegram_test(TelegramBotAPIRunTest)
add_telegram_test(TelegramBotAPIOffsetTest)
add_telegram_test(TelegramBotAPIUpdateDispatchTest)
add_telegram_test(TelegramBotAPICallbackQueryTest)
add_telegram_test(TelegramBotAPIAnswerCallbackQueryTest)
add_telegram_test(TelegramBotAPIRunErrorTest)
add_telegram_test(InlineQueryTraitsTest)
add_telegram_test(UpdateEditedMessageDeserializerTest)
add_telegram_test(UpdateChannelPostDeserializerTest)
add_telegram_test(UpdateEditedChannelPostDeserializerTest)
add_telegram_test(InlineQueryDeserializerTest)
add_telegram_test(UpdateInlineQueryDeserializerTest)

add_telegram_test(TelegramAPIErrorParametersTest)
add_telegram_test(ChosenInlineResultDeserializerTest)
add_telegram_test(UpdateChosenInlineResultDeserializerTest)

add_telegram_test(TelegramBotAPITest)

add_telegram_test(ShippingAddressTraitsTest)
add_telegram_test(ShippingAddressDeserializerTest)
add_telegram_test(ShippingQueryDeserializerTest)
add_telegram_test(PreCheckoutQueryDeserializerTest)
add_telegram_test(UpdatePaymentQueryDeserializerTest)

add_telegram_test(PollOptionTraitsTest)
add_telegram_test(PollOptionDeserializerTest)
add_telegram_test(PollDeserializerTest)
add_telegram_test(PollAnswerDeserializerTest)
add_telegram_test(UpdatePollDeserializerTest)