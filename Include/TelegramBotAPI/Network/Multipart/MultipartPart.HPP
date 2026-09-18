#ifndef TELEGRAMBOTAPI_MULTIPARTPART_HPP
#define TELEGRAMBOTAPI_MULTIPARTPART_HPP

#include <string>

namespace TelegramBotAPI::Network::Multipart {
    class MultipartPart {
        public:
            enum class Type { Field, File };

            static MultipartPart CreateField(const std::string &Name,
                                             const std::string &Value) {
                return MultipartPart(Type::Field, Name, {}, {}, Value);
            }

            static MultipartPart CreateFile(const std::string &Name,
                                            const std::string &FileName,
                                            const std::string &ContentType,
                                            const std::string &Content) {
                return MultipartPart(Type::File, Name, FileName, ContentType,
                                     Content);
            }

            Type GetType() const noexcept { return PartType; }

            const std::string &GetName() const noexcept { return Name; }

            const std::string &GetFileName() const noexcept { return FileName; }

            const std::string &GetContentType() const noexcept {
                return ContentType;
            }

            const std::string &GetContent() const noexcept { return Content; }

        private:
            MultipartPart(Type PartTypeValue, const std::string &NameValue,
                          const std::string &FileNameValue,
                          const std::string &ContentTypeValue,
                          const std::string &ContentValue)
                : PartType(PartTypeValue), Name(NameValue),
                  FileName(FileNameValue), ContentType(ContentTypeValue),
                  Content(ContentValue) {}

            Type PartType;

            std::string Name;
            std::string FileName;
            std::string ContentType;
            std::string Content;
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_MULTIPARTPART_HPP