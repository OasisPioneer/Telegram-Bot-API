add_executable(MessageRoundTrip
        RoundTrip.CPP
)

target_link_libraries(MessageRoundTrip
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
        NAME MessageRoundTrip
        COMMAND MessageRoundTrip
)

add_executable(RequestTest
        RequestTest.CPP
)

target_link_libraries(RequestTest
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
        NAME RequestTest
        COMMAND RequestTest
)

add_executable(RuntimeTest
        RuntimeTest.CPP
)

target_link_libraries(RuntimeTest
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
        NAME RuntimeTest
        COMMAND RuntimeTest
)

add_executable(TelegramClientErrorTest
        TelegramClientErrorTest.CPP
)

target_link_libraries(TelegramClientErrorTest
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
        NAME TelegramClientErrorTest
        COMMAND TelegramClientErrorTest
)

add_executable(MultipartRuntimeTest
        MultipartRuntimeTest.CPP
)

target_link_libraries(MultipartRuntimeTest
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
        NAME MultipartRuntimeTest
        COMMAND MultipartRuntimeTest
)
