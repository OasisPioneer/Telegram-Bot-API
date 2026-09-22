#ifndef TELEGRAMBOTAPI_MULTIPARTFORM_HPP
#define TELEGRAMBOTAPI_MULTIPARTFORM_HPP

#include <string>
#include <vector>

#include "MultipartPart.HPP"

namespace TelegramBotAPI::Network::Multipart
{
/**
 * @brief Builder for multipart/form-data requests.
 * @brief multipart/form-data 请求的构建器。
 *
 * Constructs multipart/form-data encoded requests for file uploads.
 * Generates a random boundary and encodes fields and files according to RFC 7578.
 * 构造用于文件上传的 multipart/form-data 编码请求。
 * 生成随机边界并按照 RFC 7578 编码字段和文件。
 */
    class MultipartForm
    {
        public:
/**
 * @brief Constructs a form with a randomly generated boundary.
 * @brief 构造具有随机生成边界的表单。
 */
            MultipartForm();

/**
 * @brief Constructs a form with a custom boundary.
 * @brief 构造具有自定义边界的表单。
 *
 * @param BoundaryValue Custom boundary string.
 *                    自定义边界字符串。
 */
            explicit MultipartForm(
                const std::string &BoundaryValue
            );

/**
 * @brief Adds a text field to the form.
 * @brief 向表单添加文本字段。
 *
 * @param Name  Field name.
 *              字段名称。
 * @param Value Field value.
 *              字段值。
 */
            void AddField(
                const std::string &Name,
                const std::string &Value
            );

/**
 * @brief Adds a file to the form.
 * @brief 向表单添加文件。
 *
 * @param Name        Form field name for the file.
 *                    文件的表单字段名称。
 * @param FileName    Original filename.
 *                    原始文件名。
 * @param ContentType MIME content type of the file.
 *                    文件的 MIME 内容类型。
 * @param Content     File content.
 *                    文件内容。
 */
            void AddFile(
                const std::string &Name,
                const std::string &FileName,
                const std::string &ContentType,
                const std::string &Content
            );

/**
 * @brief Returns the boundary string.
 * @brief 返回边界字符串。
 *
 * @return Boundary string.
 *         边界字符串。
 */
            [[nodiscard]]
            const std::string &GetBoundary() const noexcept;

/**
 * @brief Returns the list of multipart parts.
 * @brief 返回 multipart 部分列表。
 *
 * @return List of parts.
 *         部分列表。
 */
            [[nodiscard]]
            const std::vector<MultipartPart> &
            GetParts() const noexcept;

/**
 * @brief Builds the complete multipart/form-data body.
 * @brief 构建完整的 multipart/form-data 请求体。
 *
 * @return Encoded multipart body.
 *         编码的 multipart 请求体。
 */
            [[nodiscard]]
            std::string Build() const;

/**
 * @brief Returns the Content-Type header value for the form.
 * @brief 返回表单的 Content-Type 头值。
 *
 * @return Content-Type header value (e.g., "multipart/form-data; boundary=...").
 *         Content-Type 头值（例如 "multipart/form-data; boundary=..."）。
 */
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