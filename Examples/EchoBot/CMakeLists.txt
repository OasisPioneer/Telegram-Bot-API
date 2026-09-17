add_executable(EchoBot
        Main.CPP
)

target_link_libraries(EchoBot
        PRIVATE
        TelegramBotAPI::TelegramBotAPI
)