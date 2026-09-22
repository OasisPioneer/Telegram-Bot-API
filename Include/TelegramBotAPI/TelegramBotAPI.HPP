#ifndef TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP
#define TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP

#include <atomic>
#include <functional>
#include <string>
#include <vector>

#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

namespace TelegramBotAPI {
/**
 * @brief High-level long-polling runtime for Telegram bots.
 * @brief Telegram Bot 的高级长轮询运行时。
 *
 * Provides a convenient runtime for handling Telegram updates through
 * long polling. Manages update offset, dispatches messages and callback
 * queries to registered handlers, and isolates individual handler failures.
 * 提供通过长轮询处理 Telegram 更新的便捷运行时。管理更新偏移量，
 * 将消息和回调查询分发给注册的处理器，并隔离单个处理器的失败。
 *
 * The runtime advances the update offset after each processed update.
 * Exceptions from individual update handlers do not terminate the long-polling loop.
 * 运行时在每个更新处理后推进偏移量。单个更新处理器的异常不会终止长轮询循环。
 *
 * Transport/API failures from getUpdates are propagated to the caller.
 * getUpdates 的传输/API 错误会传播给调用者。
 */
    class TelegramBotAPI {
        public:
/**
 * @brief Handler function type for message updates.
 * @brief 消息更新的处理器函数类型。
 */
            using MessageHandler =
                std::function<void(const Type::Message &Message)>;

/**
 * @brief Handler function type for callback query updates.
 * @brief 回调查询更新的处理器函数类型。
 */
            using CallbackQueryHandler =
                std::function<void(const Type::CallbackQuery &CallbackQuery)>;

/**
 * @brief Constructs a bot runtime with the default Telegram API URL.
 * @brief 使用默认 Telegram API URL 构造 Bot 运行时。
 *
 * @param BotToken Telegram bot token.
 *                 Telegram Bot Token。
 */
            explicit TelegramBotAPI(const std::string &BotToken);

/**
 * @brief Constructs a bot runtime with a custom Telegram API URL.
 * @brief 使用自定义 Telegram API URL 构造 Bot 运行时。
 *
 * @param BotToken Telegram bot token.
 *                 Telegram Bot Token。
 * @param APIURL   Telegram API URL.
 *                 Telegram API URL。
 */
            TelegramBotAPI(const std::string &BotToken,
                           const std::string &APIURL);

/**
 * @brief Constructs a bot runtime with a custom HTTP client.
 * @brief 使用自定义 HTTP 客户端构造 Bot 运行时。
 *
 * @param BotToken   Telegram bot token.
 *                   Telegram Bot Token。
 * @param HTTPClient Custom HTTP client implementation.
 *                   自定义 HTTP 客户端实现。
 */
            TelegramBotAPI(const std::string    &BotToken,
                           Network::IHTTPClient &HTTPClient);

/**
 * @brief Constructs a bot runtime with custom API URL and HTTP client.
 * @brief 使用自定义 API URL 和 HTTP 客户端构造 Bot 运行时。
 *
 * @param BotToken   Telegram bot token.
 *                   Telegram Bot Token。
 * @param APIURL     Telegram API URL.
 *                   Telegram API URL。
 * @param HTTPClient Custom HTTP client implementation.
 *                   自定义 HTTP 客户端实现。
 */
            TelegramBotAPI(const std::string    &BotToken,
                           const std::string    &APIURL,
                           Network::IHTTPClient &HTTPClient);

/**
 * @brief Returns a reference to the underlying TelegramClient.
 * @brief 返回底层 TelegramClient 的引用。
 *
 * @return Reference to the TelegramClient.
 *         TelegramClient 的引用。
 */
            TelegramClient &API() noexcept;

/**
 * @brief Returns a const reference to the underlying TelegramClient.
 * @brief 返回底层 TelegramClient 的常量引用。
 *
 * @return Const reference to the TelegramClient.
 *         TelegramClient 的常量引用。
 */
            const TelegramClient &API() const noexcept;

/**
 * @brief Registers a handler for message updates.
 * @brief 注册消息更新的处理器。
 *
 * @param Handler Function to call when a message update is received.
 *                 接收到消息更新时调用的函数。
 */
            void OnMessage(MessageHandler Handler);

/**
 * @brief Registers a handler for callback query updates.
 * @brief 注册回调查询更新的处理器。
 *
 * @param Handler Function to call when a callback query update is received.
 *                 接收到回调查询更新时调用的函数。
 */
            void OnCallbackQuery(CallbackQueryHandler Handler);

/**
 * @brief Answers a callback query.
 * @brief 回答回调查询。
 *
 * @param CallbackQueryID Callback query identifier.
 *                         回调查询标识符。
 * @return True on success.
 *         成功时返回 true。
 */
            bool AnswerCallbackQuery(const std::string &CallbackQueryID);

/**
 * @brief Sends a text message to a chat.
 * @brief 向聊天发送文本消息。
 *
 * @param ChatID Target chat ID.
 *               目标聊天 ID。
 * @param Text   Message text.
 *               消息文本。
 * @return Sent message object.
 *         发送的消息对象。
 */
            Type::Message SendMessage(long long          ChatID,
                                      const std::string &Text);

/**
 * @brief Sends a photo to a chat.
 * @brief 向聊天发送照片。
 *
 * @param ChatID Target chat ID.
 *               目标聊天 ID。
 * @param Photo  Photo to send.
 *               要发送的照片。
 * @return Sent message object.
 *         发送的消息对象。
 */
            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo);

/**
 * @brief Sends a photo with a caption to a chat.
 * @brief 向聊天发送带说明的照片。
 *
 * @param ChatID  Target chat ID.
 *                目标聊天 ID。
 * @param Photo   Photo to send.
 *                要发送的照片。
 * @param Caption Photo caption.
 *                照片说明。
 * @return Sent message object.
 *         发送的消息对象。
 */
            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo,
                                    const std::string     &Caption);

/**
 * @brief Sends a photo with caption and parse mode to a chat.
 * @brief 向聊天发送带说明和解析模式的照片。
 *
 * @param ChatID    Target chat ID.
 *                  目标聊天 ID。
 * @param Photo     Photo to send.
 *                  要发送的照片。
 * @param Caption   Photo caption.
 *                  照片说明。
 * @param ParseMode Parse mode for the caption.
 *                  说明的解析模式。
 * @return Sent message object.
 *         发送的消息对象。
 */
            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo,
                                    const std::string     &Caption,
                                    const std::string     &ParseMode);

/**
 * @brief Sends a photo with caption and caption entities to a chat.
 * @brief 向聊天发送带说明和说明实体的照片。
 *
 * @param ChatID          Target chat ID.
 *                        目标聊天 ID。
 * @param Photo           Photo to send.
 *                        要发送的照片。
 * @param Caption         Photo caption.
 *                        照片说明。
 * @param CaptionEntities List of special entities in the caption.
 *                        说明中的特殊实体列表。
 * @return Sent message object.
 *         发送的消息对象。
 */
            Type::Message
            SendPhoto(long long ChatID, const Type::InputFile &Photo,
                      const std::string                      &Caption,
                      const std::vector<Type::MessageEntity> &CaptionEntities);

/**
 * @brief Starts the long-polling loop.
 * @brief 启动长轮询循环。
 *
 * This method blocks until Stop() is called or an unrecoverable error occurs.
 * Individual update handler exceptions do not terminate the loop.
 * 此方法会阻塞，直到调用 Stop() 或发生不可恢复的错误。
 * 单个更新处理器的异常不会终止循环。
 */
            void Run();

/**
 * @brief Stops the long-polling loop.
 * @brief 停止长轮询循环。
 */
            void Stop();

        private:
            TelegramClient Client;

            std::atomic<bool> Running{false};

            long long Offset{0};

            MessageHandler MessageHandlerFunction;

            CallbackQueryHandler CallbackQueryHandlerFunction;

            void ProcessUpdates(const std::vector<Type::Update> &Updates);

            void ProcessUpdate(const Type::Update &Update);
    };
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP