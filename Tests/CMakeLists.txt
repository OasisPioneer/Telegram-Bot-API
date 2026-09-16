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

add_telegram_test(SendMessageTest)
add_telegram_test(GetUpdatesTest)