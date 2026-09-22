#ifndef TELEGRAMBOTAPI_MULTIPARTPART_HPP
#define TELEGRAMBOTAPI_MULTIPARTPART_HPP

#include <string>

namespace TelegramBotAPI::Network::Multipart {
/**
 * @brief Represents a single part in a multipart/form-data request.
 * @brief 表示 multipart/form-data 请求中的单个部分。
 *
 * Can be either a text field or a file upload.
 * 可以是文本字段或文件上传。
 */
    class MultipartPart {
        public:
/**
 * @brief Type of multipart part.
 * @brief multipart 部分的类型。
 */
            enum class Type { Field, File };

/**
 * @brief Creates a text field part.
 * @brief 创建文本字段部分。
 *
 * @param Name  Field name.
 *              字段名称。
 * @param Value Field value.
 *              字段值。
 * @return MultipartPart representing the field.
 *         表示字段的 MultipartPart。
 */
            static MultipartPart CreateField(const std::string &Name,
                                             const std::string &Value) {
                return MultipartPart(Type::Field, Name, {}, {}, Value);
            }

/**
 * @brief Creates a file upload part.
 * @brief 创建文件上传部分。
 *
 * @param Name        Form field name for the file.
 *                    文件的表单字段名称。
 * @param FileName    Original filename.
 *                    原始文件名。
 * @param ContentType MIME content type of the file.
 *                    文件的 MIME 内容类型。
 * @param Content     File content.
 *                    文件内容。
 * @return MultipartPart representing the file.
 *         表示文件的 MultipartPart。
 */
            static MultipartPart CreateFile(const std::string &Name,
                                            const std::string &FileName,
                                            const std::string &ContentType,
                                            const std::string &Content) {
                return MultipartPart(Type::File, Name, FileName, ContentType,
                                     Content);
            }

/**
 * @brief Returns the part type.
 * @brief 返回部分类型。
 *
 * @return Part type (Field or File).
 *         部分类型（Field 或 File）。
 */
            Type GetType() const noexcept { return PartType; }

/**
 * @brief Returns the field name.
 * @brief 返回字段名称。
 *
 * @return Field name.
 *         字段名称。
 */
            const std::string &GetName() const noexcept { return Name; }

/**
 * @brief Returns the filename (only for File type).
 * @brief 返回文件名（仅用于 File 类型）。
 *
 * @return Filename.
 *         文件名。
 */
            const std::string &GetFileName() const noexcept { return FileName; }

/**
 * @brief Returns the content type (only for File type).
 * @brief 返回内容类型（仅用于 File 类型）。
 *
 * @return Content type.
 *         内容类型。
 */
            const std::string &GetContentType() const noexcept {
                return ContentType;
            }

/**
 * @brief Returns the content (field value or file content).
 * @brief 返回内容（字段值或文件内容）。
 *
 * @return Content.
 *         内容。
 */
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