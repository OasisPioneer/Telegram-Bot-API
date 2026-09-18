#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"

#include <iomanip>
#include <random>
#include <sstream>
#include <stdexcept>

namespace TelegramBotAPI::Network::Multipart {
    namespace {
        std::string GenerateBoundary() {
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

        std::string EscapeHeaderValue(
            const std::string &Value
        ) {
            std::string Result;

            Result.reserve(Value.size());

            for (char Character : Value) {
                if (Character == '\\' ||
                    Character == '"') {
                    Result.push_back('\\');
                }

                if (Character == '\r' ||
                    Character == '\n') {
                    throw std::invalid_argument(
                        "Multipart header value contains invalid characters"
                    );
                }

                Result.push_back(Character);
            }

            return Result;
        }
    }

    MultipartForm::MultipartForm()
        : Boundary(GenerateBoundary()) {}

    MultipartForm::MultipartForm(
        const std::string &BoundaryValue
    )
        : Boundary(BoundaryValue) {
        if (Boundary.empty()) {
            throw std::invalid_argument(
                "Multipart boundary cannot be empty"
            );
        }

        if (Boundary.find('\r') != std::string::npos ||
            Boundary.find('\n') != std::string::npos) {
            throw std::invalid_argument(
                "Multipart boundary contains invalid characters"
            );
        }
    }

    void MultipartForm::AddField(
        const std::string &Name,
        const std::string &Value
    ) {
        if (Name.empty()) {
            throw std::invalid_argument(
                "Multipart field name cannot be empty"
            );
        }

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
    ) {
        if (Name.empty()) {
            throw std::invalid_argument(
                "Multipart file name cannot be empty"
            );
        }

        if (FileName.empty()) {
            throw std::invalid_argument(
                "Multipart file name cannot be empty"
            );
        }

        if (ContentType.empty()) {
            throw std::invalid_argument(
                "Multipart content type cannot be empty"
            );
        }

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
    MultipartForm::GetBoundary() const noexcept {
        return Boundary;
    }

    const std::vector<MultipartPart> &
    MultipartForm::GetParts() const noexcept {
        return Parts;
    }

    std::string MultipartForm::Build() const {
        std::string Body;

        for (const MultipartPart &Part : Parts) {
            Body += "--";
            Body += Boundary;
            Body += "\r\n";

            Body += "Content-Disposition: form-data; name=\"";
            Body += EscapeHeaderValue(Part.GetName());
            Body += "\"";

            if (Part.GetType() ==
                MultipartPart::Type::File) {
                Body += "; filename=\"";
                Body += EscapeHeaderValue(
                    Part.GetFileName()
                );
                Body += "\"";
            }

            Body += "\r\n";

            if (Part.GetType() ==
                MultipartPart::Type::File) {
                Body += "Content-Type: ";
                Body += Part.GetContentType();
                Body += "\r\n";
            }

            Body += "\r\n";
            Body += Part.GetContent();
            Body += "\r\n";
        }

        Body += "--";
        Body += Boundary;
        Body += "--\r\n";

        return Body;
    }

    std::string MultipartForm::GetContentType() const {
        return "multipart/form-data; boundary=\"" +
               EscapeHeaderValue(Boundary) +
               "\"";
    }
}