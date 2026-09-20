#ifndef TELEGRAMBOTAPI_MULTIPARTFORM_HPP
#define TELEGRAMBOTAPI_MULTIPARTFORM_HPP

#include <string>
#include <vector>

#include "MultipartPart.HPP"

namespace TelegramBotAPI::Network::Multipart
{
    class MultipartForm
    {
        public:
            MultipartForm();

            explicit MultipartForm(
                const std::string &BoundaryValue
            );

            void AddField(
                const std::string &Name,
                const std::string &Value
            );

            void AddFile(
                const std::string &Name,
                const std::string &FileName,
                const std::string &ContentType,
                const std::string &Content
            );

            [[nodiscard]]
            const std::string &GetBoundary() const noexcept;

            [[nodiscard]]
            const std::vector<MultipartPart> &
            GetParts() const noexcept;

            [[nodiscard]]
            std::string Build() const;

            [[nodiscard]]
            std::string GetContentType() const;

        private:
            static void ValidateBoundary(
                const std::string &Boundary
            );

            static void ValidateHeaderValue(
                const std::string &Value,
                const char *FieldName
            );

            static std::string EscapeHeaderValue(
                const std::string &Value
            );

            std::string Boundary;
            std::vector<MultipartPart> Parts;
    };
}

#endif // TELEGRAMBOTAPI_MULTIPARTFORM_HPP