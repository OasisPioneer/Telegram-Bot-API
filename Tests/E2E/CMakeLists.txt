add_executable(TelegramE2ETest
    TelegramE2ETest.CPP
)

target_compile_definitions(TelegramE2ETest
    PRIVATE
        TELEGRAM_E2E_TEST_IMAGE_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/test.png"
)

target_link_libraries(TelegramE2ETest
    PRIVATE
        TelegramBotAPI::TelegramBotAPI
)

add_test(
    NAME TelegramE2ETest
    COMMAND TelegramE2ETest
)

set_tests_properties(TelegramE2ETest
    PROPERTIES
        SKIP_RETURN_CODE 77
)
