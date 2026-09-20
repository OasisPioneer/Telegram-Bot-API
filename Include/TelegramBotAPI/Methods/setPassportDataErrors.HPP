#ifndef TELEGRAMBOTAPI_METHOD_SETPASSPORTDATAERRORS_HPP
#define TELEGRAMBOTAPI_METHOD_SETPASSPORTDATAERRORS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorDataField.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFrontSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorReverseSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorSelfie.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorUnspecified.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Informs a user that some of the Telegram Passport elements they provided contains errors. The user will not be able to re-submit their Passport to you until the errors are fixed (the contents of the field for which you returned the error must change). Returns True on success.
        // Use this if the data submitted by the user doesn't satisfy the standards your service requires for any reason. For example, if a birthday date seems invalid, a submitted document is blurry, a scan shows evidence of tampering, etc. Supply some details in the error message to make sure the user knows how to correct the issues.

class setPassportDataErrors {
    public:
        struct Parameters {
            // A JSON-serialized Array describing the errors
            std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> Errors;

            // User identifier
            long long UserID;

            Parameters(const std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> &ErrorsValue, const long long &UserIDValue)
                : Errors(ErrorsValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["errors"] = JSON::ToJson(Errors);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(Errors) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "errors",
                    Errors);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit setPassportDataErrors(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetPassportDataErrors(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setPassportDataErrors",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setPassportDataErrors",
                                      ParametersValue.ToJson());
        }

        bool SetPassportDataErrors(std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> Errors, long long UserID) {
            Parameters ParametersValue(
                Errors,
                UserID
            );

            return SetPassportDataErrors(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETPASSPORTDATAERRORS_HPP
