#ifndef TELEGRAMBOTAPI_MULTIPARTFORM_HPP
#define TELEGRAMBOTAPI_MULTIPARTFORM_HPP

#include <string>
#include <vector>

#include "MultipartPart.HPP"

namespace TelegramBotAPI::Network::Multipart {
    class MultipartForm {
        public:
            MultipartForm();

            explicit MultipartForm(const std::string &BoundaryValue);

            void AddField(const std::string &Name, const std::string &Value);

            void AddFile(const std::string &Name, const std::string &FileName,
                         const std::string &ContentType,
                         const std::string &Content);

            const std::string &GetBoundary() const noexcept;

            const std::vector<MultipartPart> &GetParts() const noexcept;

            std::string Build() const;

            std::string GetContentType() const;

        private:
            std::string                Boundary;
            std::vector<MultipartPart> Parts;
    };
} // namespace TelegramBotAPI::Network::Multipart

#endif // TELEGRAMBOTAPI_MULTIPARTFORM_HPP