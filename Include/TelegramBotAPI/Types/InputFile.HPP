#ifndef TELEGRAMBOTAPI_INPUTFILE_HPP
#define TELEGRAMBOTAPI_INPUTFILE_HPP

#include <stdexcept>
#include <string>

namespace TelegramBotAPI::Type {
    class InputFile {
        public:
            enum class SourceType { FileID, URL, LocalFile };

            static InputFile FromFileID(const std::string &FileID) {
                return InputFile(SourceType::FileID, FileID);
            }

            static InputFile FromURL(const std::string &URL) {
                return InputFile(SourceType::URL, URL);
            }

            static InputFile FromFile(const std::string &FilePath) {
                return InputFile(SourceType::LocalFile, FilePath);
            }

            SourceType GetSourceType() const noexcept { return Source; }

            const std::string &GetValue() const noexcept { return Value; }

            bool IsFileID() const noexcept {
                return Source == SourceType::FileID;
            }

            bool IsURL() const noexcept { return Source == SourceType::URL; }

            bool IsLocalFile() const noexcept {
                return Source == SourceType::LocalFile;
            }

        private:
            InputFile(SourceType SourceValue, const std::string &ValueValue)
                : Source(SourceValue), Value(ValueValue) {
                if (Value.empty()) {
                    throw std::invalid_argument(
                        "InputFile value cannot be empty");
                }
            }

            SourceType  Source;
            std::string Value;
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_INPUTFILE_HPP