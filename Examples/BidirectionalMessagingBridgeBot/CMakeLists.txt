add_executable(BidirectionalMessagingBridgeBot
    Main.CPP
)

target_link_libraries(BidirectionalMessagingBridgeBot
    PRIVATE
    TelegramBotAPI::TelegramBotAPI
)
