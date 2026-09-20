#ifndef TELEGRAMBOTAPI_METHOD_SAVEPREPAREDKEYBOARDBUTTON_HPP
#define TELEGRAMBOTAPI_METHOD_SAVEPREPAREDKEYBOARDBUTTON_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/KeyboardButton.HPP"
#include "TelegramBotAPI/Types/PreparedKeyboardButton.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Stores a keyboard button that can be used by a user within a Mini App. Returns a PreparedKeyboardButton object.

class savePreparedKeyboardButton {
    public:
        struct Parameters {
            // A JSON-serialized object describing the button to be saved. The button must be of the type request_users, request_chat, or request_managed_bot.
            ::TelegramBotAPI::Type::KeyboardButton Button;

            // Unique identifier of the target user that can use the button
            long long UserID;

            Parameters(const ::TelegramBotAPI::Type::KeyboardButton &ButtonValue, const long long &UserIDValue)
                : Button(ButtonValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["button"] = JSON::ToJson(Button);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(Button) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "button",
                    Button);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit savePreparedKeyboardButton(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::PreparedKeyboardButton SavePreparedKeyboardButton(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::PreparedKeyboardButton>("savePreparedKeyboardButton",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::PreparedKeyboardButton>("savePreparedKeyboardButton",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::PreparedKeyboardButton SavePreparedKeyboardButton(::TelegramBotAPI::Type::KeyboardButton Button, long long UserID) {
            Parameters ParametersValue(
                Button,
                UserID
            );

            return SavePreparedKeyboardButton(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SAVEPREPAREDKEYBOARDBUTTON_HPP
