#ifndef TELEGRAMBOTAPI_TRAITS_HPP
#define TELEGRAMBOTAPI_TRAITS_HPP

#include <memory>
#include <optional>
#include <string>
#include <type_traits>
#include <vector>

#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"

namespace TelegramBotAPI::JSON::Detail {
    template <typename Type>
    using RemoveCVRefT = std::remove_cv_t<std::remove_reference_t<Type>>;

    template <typename Type>
    inline constexpr bool IsBooleanV = std::is_same_v<RemoveCVRefT<Type>, bool>;

    template <typename Type>
    inline constexpr bool IsIntegerV =
        std::is_integral_v<RemoveCVRefT<Type>> && !IsBooleanV<Type>;

    template <typename Type>
    inline constexpr bool IsFloatingPointV =
        std::is_floating_point_v<RemoveCVRefT<Type>>;

    template <typename Type>
    inline constexpr bool IsStringV =
        std::is_same_v<RemoveCVRefT<Type>, std::string>;

    template <typename Type> struct IsVector : std::false_type {};

    template <typename ElementType>
    struct IsVector<std::vector<ElementType>> : std::true_type {};

    template <typename Type>
    inline constexpr bool IsVectorV = IsVector<RemoveCVRefT<Type>>::value;

    template <typename Type> struct VectorElement;

    template <typename ElementType>
    struct VectorElement<std::vector<ElementType>> {
            using Type = ElementType;
    };

    template <typename Type> struct IsOptional : std::false_type {};

    template <typename ValueType>
    struct IsOptional<std::optional<ValueType>> : std::true_type {};

    template <typename Type>
    inline constexpr bool IsOptionalV = IsOptional<RemoveCVRefT<Type>>::value;

    template <typename Type> struct OptionalValue;

    template <typename ValueType>
    struct OptionalValue<std::optional<ValueType>> {
            using Type = ValueType;
    };

    template <typename Type> struct IsSharedPtr : std::false_type {};

    template <typename ValueType>
    struct IsSharedPtr<std::shared_ptr<ValueType>> : std::true_type {};

    template <typename Type>
    inline constexpr bool IsSharedPtrV = IsSharedPtr<RemoveCVRefT<Type>>::value;

    template <typename Type> struct SharedPtrValue;

    template <typename ValueType>
    struct SharedPtrValue<std::shared_ptr<ValueType>> {
            using Type = ValueType;
    };

    template <typename Type>
    inline constexpr bool IsUserV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::User>;

    template <typename Type>
    inline constexpr bool IsCallbackQueryV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::CallbackQuery>;

    template <typename Type>
    inline constexpr bool IsChatV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Chat>;

    template <typename Type>
    inline constexpr bool IsMessageEntityV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::MessageEntity>;

    template <typename Type>
    inline constexpr bool IsPhotoSizeV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::PhotoSize>;

    template <typename Type>
    inline constexpr bool IsAudioV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Audio>;

    template <typename Type>
    inline constexpr bool IsDocumentV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Document>;

    template <typename Type>
    inline constexpr bool IsStickerV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Sticker>;

    template <typename Type>
    inline constexpr bool IsVideoV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Video>;

    template <typename Type>
    inline constexpr bool IsVoiceV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Voice>;

    template <typename Type>
    inline constexpr bool IsContactV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Contact>;

    template <typename Type>
    inline constexpr bool IsLocationV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Location>;

    template <typename Type>
    inline constexpr bool IsVenueV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Venue>;

    template <typename Type>
    inline constexpr bool IsFileV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::File>;

    template <typename Type>
    inline constexpr bool IsInlineQueryV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::InlineQuery>;

    template <typename Type>
    inline constexpr bool IsChosenInlineResultV =
        std::is_same_v<RemoveCVRefT<Type>,
                       TelegramBotAPI::Type::ChosenInlineResult>;

    template <typename Type>
    inline constexpr bool IsMessageV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Message>;
} // namespace TelegramBotAPI::JSON::Detail

#endif // TELEGRAMBOTAPI_TRAITS_HPP