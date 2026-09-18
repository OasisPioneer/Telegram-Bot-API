#ifndef TELEGRAMBOTAPI_SENDPHOTO_HPP
#define TELEGRAMBOTAPI_SENDPHOTO_HPP

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"

namespace TelegramBotAPI::Methods {
    class sendPhoto {
        public:
            struct Parameters {
                    long long                  ChatID = 0;
                    Type::InputFile            Photo;
                    std::string                Caption{};
                    std::optional<std::string> ParseMode;
                    std::optional<std::vector<Type::MessageEntity>>
                        CaptionEntities;

                    Parameters(long long              ChatIDValue,
                               const Type::InputFile &PhotoValue)
                        : ChatID(ChatIDValue), Photo(PhotoValue) {}

                    JSON::Object ToJson() const {
                        JSON::Object ParametersObject;

                        ParametersObject["chat_id"] = ChatID;

                        if (Photo.IsFileID() || Photo.IsURL()) {
                            ParametersObject["photo"] = Photo.GetValue();
                        }

                        if (!Caption.empty()) {
                            ParametersObject["caption"] = Caption;
                        }

                        if (ParseMode.has_value()) {
                            ParametersObject["parse_mode"] = ParseMode.value();
                        }

                        if (CaptionEntities.has_value()) {
                            ParametersObject["caption_entities"] =
                                JSON::ToJson(CaptionEntities.value());
                        }

                        return ParametersObject;
                    }
            };

            explicit sendPhoto(TelegramClient &ClientValue)
                : Client(ClientValue) {}

            Type::Message Send(const Parameters &ParametersValue) {
                if (!ParametersValue.Photo.IsLocalFile()) {
                    return Client.Call<Type::Message>("sendPhoto",
                                                      ParametersValue.ToJson());
                }

                return SendLocalFile(ParametersValue);
            }

        private:
            TelegramClient &Client;

            Type::Message SendLocalFile(const Parameters &ParametersValue) {
                const std::filesystem::path FilePath =
                    ParametersValue.Photo.GetValue();

                if (!std::filesystem::exists(FilePath)) {
                    throw TelegramAPIException(
                        0, "Photo file does not exist: " + FilePath.string());
                }

                if (!std::filesystem::is_regular_file(FilePath)) {
                    throw TelegramAPIException(
                        0, "Photo path is not a regular file: " +
                               FilePath.string());
                }

                const std::uintmax_t FileSize =
                    std::filesystem::file_size(FilePath);

                if (FileSize > 10ULL * 1024ULL * 1024ULL) {
                    throw TelegramAPIException(
                        0, "Photo file exceeds Telegram's 10 MB limit: " +
                               FilePath.string());
                }

                std::ifstream File(FilePath, std::ios::binary);

                if (!File.is_open()) {
                    throw TelegramAPIException(
                        0, "Failed to open photo file: " + FilePath.string());
                }

                std::string Content{std::istreambuf_iterator<char>(File),
                                    std::istreambuf_iterator<char>()};

                if (Content.empty()) {
                    throw TelegramAPIException(0, "Photo file is empty: " +
                                                      FilePath.string());
                }

                Network::Multipart::MultipartForm Form;

                Form.AddField("chat_id",
                              std::to_string(ParametersValue.ChatID));

                if (!ParametersValue.Caption.empty()) {
                    Form.AddField("caption", ParametersValue.Caption);
                }

                if (ParametersValue.ParseMode.has_value()) {
                    Form.AddField("parse_mode",
                                  ParametersValue.ParseMode.value());
                }

                if (ParametersValue.CaptionEntities.has_value()) {
                    Form.AddField(
                        "caption_entities",
                        boost::json::serialize(
                            JSON::ToJson(ParametersValue.CaptionEntities.value())
                        )
                    );
                }

                Form.AddFile("photo", FilePath.filename().string(),
                             GetContentType(FilePath), Content);

                return Client.CallMultipart<Type::Message>("sendPhoto", Form);
            }

            static std::string
            GetContentType(const std::filesystem::path &FilePath) {
                const std::string Extension = FilePath.extension().string();

                if (Extension == ".jpg" || Extension == ".jpeg") {
                    return "image/jpeg";
                }

                if (Extension == ".png") {
                    return "image/png";
                }

                if (Extension == ".webp") {
                    return "image/webp";
                }

                if (Extension == ".gif") {
                    return "image/gif";
                }

                return "application/octet-stream";
            }
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_SENDPHOTO_HPP