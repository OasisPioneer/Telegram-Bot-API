#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <variant>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"
#include "TelegramBotAPI/Types/Message.HPP"

#ifndef TELEGRAM_E2E_TEST_IMAGE_PATH
#define TELEGRAM_E2E_TEST_IMAGE_PATH "Tests/E2E/assets/test.png"
#endif

namespace {

std::string GetRequiredEnvironmentVariable(const char *Name) {
    const char *Value = std::getenv(Name);

    if (Value == nullptr || std::string(Value).empty()) {
        throw std::runtime_error(
            std::string("Required environment variable is not set: ") + Name
        );
    }

    return std::string(Value);
}

long long ParseChatID(const std::string &Value) {
    try {
        std::size_t Position = 0;

        const long long Result =
            std::stoll(Value, &Position);

        if (Position != Value.size()) {
            throw std::runtime_error(
                "TELEGRAM_CHAT_ID contains invalid characters"
            );
        }

        return Result;
    }
    catch (const std::exception &) {
        throw std::runtime_error(
            "TELEGRAM_CHAT_ID must be a valid integer"
        );
    }
}

std::string ExtractPhotoFileID(
    const ::TelegramBotAPI::Type::Message &Message
) {
    if (!Message.Photo) {
        throw std::runtime_error(
            "Telegram returned a Message without Photo"
        );
    }

    if (Message.Photo->empty()) {
        throw std::runtime_error(
            "Telegram returned an empty Photo array"
        );
    }

    const auto &PhotoSize =
        Message.Photo->back();

    if (PhotoSize.FileID.empty()) {
        throw std::runtime_error(
            "Telegram returned PhotoSize with empty FileID"
        );
    }

    return PhotoSize.FileID;
}

void PrintMessageID(
    const ::TelegramBotAPI::Type::Message &Message
) {
    std::cout
        << "        message_id: "
        << Message.MessageID
        << '\n';
}

bool HasEnvironmentVariable(const char *Name) {
    const char *Value = std::getenv(Name);

    return Value != nullptr &&
           std::string(Value).empty() == false;
}

} // namespace

int main() {
    try {
        std::cout
            << "=== Telegram Bot API E2E Test ===\n";

        if (!HasEnvironmentVariable("TELEGRAM_BOT_TOKEN") ||
            !HasEnvironmentVariable("TELEGRAM_CHAT_ID")) {
            std::cout
                << "SKIPPED: TELEGRAM_BOT_TOKEN and "
                   "TELEGRAM_CHAT_ID are required\n";

            return 77;
        }

        /*
         * ------------------------------------------------------------
         * Environment
         * ------------------------------------------------------------
         */

        const std::string BotToken =
            GetRequiredEnvironmentVariable(
                "TELEGRAM_BOT_TOKEN"
            );

        const std::string ChatIDString =
            GetRequiredEnvironmentVariable(
                "TELEGRAM_CHAT_ID"
            );

        const long long ChatID =
            ParseChatID(ChatIDString);

        /*
         * ------------------------------------------------------------
         * Client
         * ------------------------------------------------------------
         */

        ::TelegramBotAPI::TelegramClient Client(
            BotToken
        );

        /*
         * ------------------------------------------------------------
         * 1. getMe
         * ------------------------------------------------------------
         */

        std::cout
            << "[1/5] getMe..."
            << std::flush;

        const auto Me =
            Client.GetMe();

        std::cout
            << " PASS\n";

        std::cout
            << "        id: "
            << Me.ID
            << '\n';

        if (Me.UserName) {
            std::cout
                << "        username: "
                << *Me.UserName
                << '\n';
        }

        /*
         * ------------------------------------------------------------
         * 2. sendMessage
         * ------------------------------------------------------------
         */

        std::cout
            << "[2/5] sendMessage..."
            << std::flush;

        const auto SentMessage =
            Client.SendMessage(
                std::variant<long long, std::string>{
                    ChatID
                },
                std::string(
                    "TelegramBotAPI C++ E2E test: sendMessage"
                )
            );

        std::cout
            << " PASS\n";

        PrintMessageID(SentMessage);

        /*
         * ------------------------------------------------------------
         * 3. sendPhoto using URL
         * ------------------------------------------------------------
         */

        std::cout
            << "[3/5] sendPhoto URL..."
            << std::flush;

        const auto URLPhotoMessage =
            Client.SendPhoto(
                std::variant<long long, std::string>{
                    ChatID
                },
                std::variant<
                    ::TelegramBotAPI::Type::InputFile,
                    std::string
                >{
                    std::string(
                        "https://telegram.org/img/t_logo.png"
                    )
                }
            );

        std::cout
            << " PASS\n";

        PrintMessageID(URLPhotoMessage);

        /*
         * ------------------------------------------------------------
         * 4. sendPhoto using LocalFile
         * ------------------------------------------------------------
         *
         * This validates the complete multipart upload path:
         *
         *   InputFile::FromFile()
         *       ↓
         *   RequiresMultipart()
         *       ↓
         *   ToMultipart()
         *       ↓
         *   multipart/form-data
         *       ↓
         *   Telegram API
         *       ↓
         *   Message.Photo
         *       ↓
         *   PhotoSize.FileID
         * ------------------------------------------------------------
         */

        std::cout
            << "[4/5] sendPhoto LocalFile..."
            << std::flush;

        const auto LocalPhotoMessage =
            Client.SendPhoto(
                std::variant<long long, std::string>{
                    ChatID
                },
                std::variant<
                    ::TelegramBotAPI::Type::InputFile,
                    std::string
                >{
                    ::TelegramBotAPI::Type::InputFile::FromFile(
                        TELEGRAM_E2E_TEST_IMAGE_PATH
                    )
                }
            );

        /*
         * Extract the FileID returned by Telegram.
         */

        const std::string LocalFileID =
            ExtractPhotoFileID(
                LocalPhotoMessage
            );

        std::cout
            << " PASS\n";

        PrintMessageID(LocalPhotoMessage);

        std::cout
            << "        file_id: "
            << LocalFileID
            << '\n';

        /*
         * ------------------------------------------------------------
         * 5. sendPhoto using FileID
         * ------------------------------------------------------------
         *
         * Reuse the FileID obtained from step 4.
         *
         * No TELEGRAM_TEST_FILE_ID environment variable is required.
         * ------------------------------------------------------------
         */

        std::cout
            << "[5/5] sendPhoto FileID..."
            << std::flush;

        const auto FileIDPhotoMessage =
            Client.SendPhoto(
                std::variant<long long, std::string>{
                    ChatID
                },
                std::variant<
                    ::TelegramBotAPI::Type::InputFile,
                    std::string
                >{
                    ::TelegramBotAPI::Type::InputFile::FromFileID(
                        LocalFileID
                    )
                }
            );

        std::cout
            << " PASS\n";

        PrintMessageID(FileIDPhotoMessage);

        /*
         * ------------------------------------------------------------
         * Complete
         * ------------------------------------------------------------
         */

        std::cout
            << "\nE2E TEST COMPLETED\n";

        return 0;
    }

    catch (
        const ::TelegramBotAPI::TelegramAPIException &Exception
    ) {
        std::cerr
            << "\nE2E TEST FAILED\n"
            << "Telegram API error:\n"
            << "  code: "
            << Exception.GetErrorCode()
            << '\n'
            << "  message: "
            << Exception.what()
            << '\n';

        return 1;
    }

    catch (const std::exception &Exception) {
        std::cerr
            << "\nE2E TEST FAILED\n"
            << "Exception:\n"
            << "  "
            << Exception.what()
            << '\n';

        return 1;
    }
}
