#ifndef TELEGRAMBOTAPI_METHOD_GETFORUMTOPICICONSTICKERS_HPP
#define TELEGRAMBOTAPI_METHOD_GETFORUMTOPICICONSTICKERS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to get custom emoji stickers, which can be used as a forum topic icon by any user. Requires no parameters. Returns an Array of Sticker objects.

struct getForumTopicIconStickersParameters {
    JSON::Object ToJson() const {
        JSON::Object Object;

        return Object;
    }

    bool RequiresMultipart() const {
        return false;
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        return Form;
    }

};

class getForumTopicIconStickers {
public:
    using Parameters = getForumTopicIconStickersParameters;
    using ReturnType = std::vector<::TelegramBotAPI::Type::Sticker>;

    static constexpr const char *Name() noexcept {
        return "getForumTopicIconStickers";
    }

    explicit getForumTopicIconStickers(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::vector<::TelegramBotAPI::Type::Sticker> GetForumTopicIconStickers(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::Sticker>>(
                "getForumTopicIconStickers",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::vector<::TelegramBotAPI::Type::Sticker>>(
            "getForumTopicIconStickers",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETFORUMTOPICICONSTICKERS_HPP
