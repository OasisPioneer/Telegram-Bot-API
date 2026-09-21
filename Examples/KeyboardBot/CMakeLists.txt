add_executable(KeyboardBot
    KeyboardBot.CPP
)

target_link_libraries(KeyboardBot
    PRIVATE
        TelegramBotAPI::TelegramBotAPI
)
