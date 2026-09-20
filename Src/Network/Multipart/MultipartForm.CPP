#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"

#include <iomanip>
#include <random>
#include <sstream>
#include <stdexcept>
#include <string>

namespace TelegramBotAPI::Network::Multipart
{
    namespace
    {
        std::string GenerateBoundary()
        {
            std::random_device RandomDevice;

            std::mt19937_64 Generator(
                RandomDevice()
            );

            std::uniform_int_distribution<unsigned long long>
                Distribution;

            std::ostringstream Stream;

            Stream
                << "--------------------------"
                << std::hex
                << std::setfill('0')
                << std::setw(16)
                << Distribution(Generator)
                << std::setw(16)
                << Distribution(Generator);

            return Stream.str();
        }
    }

    MultipartForm::MultipartForm()
        : Boundary(GenerateBoundary())
    {
    }

    MultipartForm::MultipartForm(
        const std::string &BoundaryValue
    )
        : Boundary(BoundaryValue)
    {
        ValidateBoundary(Boundary);
    }

    void MultipartForm::ValidateBoundary(
        const std::string &BoundaryValue
    )
    {
        if (BoundaryValue.empty())
        {
            throw std::invalid_argument(
                "Multipart boundary cannot be empty"
            );
        }

        /*
         * Boundary is used directly inside the HTTP Content-Type
         * header and multipart delimiters.
         *
         * Reject CR/LF to prevent header injection and malformed
         * multipart delimiters.
         */
        for (const char Character : BoundaryValue)
        {
            if (Character == '\r' ||
                Character == '\n')
            {
                throw std::invalid_argument(
                    "Multipart boundary contains invalid characters"
                );
            }
        }
    }

    void MultipartForm::ValidateHeaderValue(
        const std::string &Value,
        const char *FieldName
    )
    {
        for (const char Character : Value)
        {
            if (Character == '\r' ||
                Character == '\n')
            {
                throw std::invalid_argument(
                    std::string("Multipart ") +
                    FieldName +
                    " contains invalid characters"
                );
            }
        }
    }

    std::string MultipartForm::EscapeHeaderValue(
        const std::string &Value
    )
    {
        /*
         * CR/LF must already have been rejected by
         * ValidateHeaderValue().
         *
         * Escape characters which have special meaning inside
         * a quoted MIME parameter.
         */
        std::string Result;

        Result.reserve(Value.size());

        for (const char Character : Value)
        {
            if (Character == '\\' ||
                Character == '"')
            {
                Result.push_back('\\');
            }

            Result.push_back(Character);
        }

        return Result;
    }

    void MultipartForm::AddField(
        const std::string &Name,
        const std::string &Value
    )
    {
        if (Name.empty())
        {
            throw std::invalid_argument(
                "Multipart field name cannot be empty"
            );
        }

        ValidateHeaderValue(
            Name,
            "field name"
        );

        Parts.emplace_back(
            MultipartPart::CreateField(
                Name,
                Value
            )
        );
    }

    void MultipartForm::AddFile(
        const std::string &Name,
        const std::string &FileName,
        const std::string &ContentType,
        const std::string &Content
    )
    {
        if (Name.empty())
        {
            throw std::invalid_argument(
                "Multipart file name cannot be empty"
            );
        }

        if (FileName.empty())
        {
            throw std::invalid_argument(
                "Multipart file name cannot be empty"
            );
        }

        if (ContentType.empty())
        {
            throw std::invalid_argument(
                "Multipart content type cannot be empty"
            );
        }

        ValidateHeaderValue(
            Name,
            "file field name"
        );

        ValidateHeaderValue(
            FileName,
            "file name"
        );

        ValidateHeaderValue(
            ContentType,
            "content type"
        );

        Parts.emplace_back(
            MultipartPart::CreateFile(
                Name,
                FileName,
                ContentType,
                Content
            )
        );
    }

    const std::string &
    MultipartForm::GetBoundary() const noexcept
    {
        return Boundary;
    }

    const std::vector<MultipartPart> &
    MultipartForm::GetParts() const noexcept
    {
        return Parts;
    }

    std::string MultipartForm::Build() const
    {
        std::string Body;

        /*
         * Reserve a little space up front. This is deliberately
         * conservative; multipart parts may contain arbitrary
         * binary data and their final size is not necessarily
         * known cheaply.
         */
        Body.reserve(
            Parts.size() * (
                Boundary.size() +
                128
            )
        );

        for (const MultipartPart &Part : Parts)
        {
            Body += "--";
            Body += Boundary;
            Body += "\r\n";

            Body += "Content-Disposition: form-data; name=\"";
            Body += EscapeHeaderValue(
                Part.GetName()
            );
            Body += "\"";

            if (Part.GetType() ==
                MultipartPart::Type::File)
            {
                Body += "; filename=\"";
                Body += EscapeHeaderValue(
                    Part.GetFileName()
                );
                Body += "\"";
            }

            Body += "\r\n";

            if (Part.GetType() ==
                MultipartPart::Type::File)
            {
                Body += "Content-Type: ";
                Body += Part.GetContentType();
                Body += "\r\n";
            }

            Body += "\r\n";

            /*
             * std::string is binary-safe, so NUL bytes and other
             * arbitrary bytes in file content are preserved.
             */
            Body += Part.GetContent();

            Body += "\r\n";
        }

        Body += "--";
        Body += Boundary;
        Body += "--\r\n";

        return Body;
    }

    std::string MultipartForm::GetContentType() const
    {
        return "multipart/form-data; boundary=\"" +
               EscapeHeaderValue(Boundary) +
               "\"";
    }
}