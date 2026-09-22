#ifndef TELEGRAMBOTAPI_TRAITS_HPP
#define TELEGRAMBOTAPI_TRAITS_HPP

#include <memory>
#include <optional>
#include <string>
#include <type_traits>
#include <vector>

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"
#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include "TelegramBotAPI/Types/PollAnswer.HPP"
#include "TelegramBotAPI/Types/PollOption.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/Update.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include "TelegramBotAPI/Types/ResponseParameters.HPP"

namespace TelegramBotAPI::JSON::Detail {
/**
 * @brief Type trait to remove const, volatile, and reference qualifiers.
 * @brief 移除 const、volatile 和引用限定符的类型特征。
 */
    template <typename Type>
    using RemoveCVRefT = std::remove_cv_t<std::remove_reference_t<Type>>;

/**
 * @brief Type trait to check if a type is bool.
 * @brief 检查类型是否为 bool 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsBooleanV = std::is_same_v<RemoveCVRefT<Type>, bool>;

/**
 * @brief Type trait to check if a type is an integer (excluding bool).
 * @brief 检查类型是否为整数（不包括 bool）的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsIntegerV =
        std::is_integral_v<RemoveCVRefT<Type>> && !IsBooleanV<Type>;

/**
 * @brief Type trait to check if a type is a floating-point number.
 * @brief 检查类型是否为浮点数的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsFloatingPointV =
        std::is_floating_point_v<RemoveCVRefT<Type>>;

/**
 * @brief Type trait to check if a type is std::string.
 * @brief 检查类型是否为 std::string 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsStringV =
        std::is_same_v<RemoveCVRefT<Type>, std::string>;

/**
 * @brief Type trait to check if a type is std::vector.
 * @brief 检查类型是否为 std::vector 的类型特征。
 */
    template <typename Type> struct IsVector : std::false_type {};

    template <typename ElementType>
    struct IsVector<std::vector<ElementType>> : std::true_type {};

/**
 * @brief Variable template for IsVector trait.
 * @brief IsVector 特征的变量模板。
 */
    template <typename Type>
    inline constexpr bool IsVectorV = IsVector<RemoveCVRefT<Type>>::value;

/**
 * @brief Type trait to extract the element type from std::vector.
 * @brief 从 std::vector 提取元素类型的类型特征。
 */
    template <typename Type> struct VectorElement;

    template <typename ElementType>
    struct VectorElement<std::vector<ElementType>> {
            using Type = ElementType;
    };

/**
 * @brief Type trait to check if a type is std::optional.
 * @brief 检查类型是否为 std::optional 的类型特征。
 */
    template <typename Type> struct IsOptional : std::false_type {};

    template <typename ValueType>
    struct IsOptional<std::optional<ValueType>> : std::true_type {};

/**
 * @brief Variable template for IsOptional trait.
 * @brief IsOptional 特征的变量模板。
 */
    template <typename Type>
    inline constexpr bool IsOptionalV = IsOptional<RemoveCVRefT<Type>>::value;

/**
 * @brief Type trait to extract the value type from std::optional.
 * @brief 从 std::optional 提取值类型的类型特征。
 */
    template <typename Type> struct OptionalValue;

    template <typename ValueType>
    struct OptionalValue<std::optional<ValueType>> {
            using Type = ValueType;
    };

/**
 * @brief Type trait to check if a type is std::shared_ptr.
 * @brief 检查类型是否为 std::shared_ptr 的类型特征。
 */
    template <typename Type> struct IsSharedPtr : std::false_type {};

    template <typename ValueType>
    struct IsSharedPtr<std::shared_ptr<ValueType>> : std::true_type {};

/**
 * @brief Variable template for IsSharedPtr trait.
 * @brief IsSharedPtr 特征的变量模板。
 */
    template <typename Type>
    inline constexpr bool IsSharedPtrV = IsSharedPtr<RemoveCVRefT<Type>>::value;

/**
 * @brief Type trait to extract the value type from std::shared_ptr.
 * @brief 从 std::shared_ptr 提取值类型的类型特征。
 */
    template <typename Type> struct SharedPtrValue;

    template <typename ValueType>
    struct SharedPtrValue<std::shared_ptr<ValueType>> {
            using Type = ValueType;
    };

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::User.
 * @brief 检查类型是否为 TelegramBotAPI::Type::User 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsUserV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::User>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::CallbackQuery.
 * @brief 检查类型是否为 TelegramBotAPI::Type::CallbackQuery 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsCallbackQueryV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::CallbackQuery>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Chat.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Chat 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsChatV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Chat>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::MessageEntity.
 * @brief 检查类型是否为 TelegramBotAPI::Type::MessageEntity 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsMessageEntityV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::MessageEntity>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::PhotoSize.
 * @brief 检查类型是否为 TelegramBotAPI::Type::PhotoSize 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPhotoSizeV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::PhotoSize>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Animation.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Animation 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsAnimationV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Animation>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Audio.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Audio 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsAudioV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Audio>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Document.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Document 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsDocumentV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Document>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::LivePhoto.
 * @brief 检查类型是否为 TelegramBotAPI::Type::LivePhoto 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsLivePhotoV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::LivePhoto>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Sticker.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Sticker 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsStickerV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Sticker>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Video.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Video 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsVideoV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Video>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Voice.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Voice 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsVoiceV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Voice>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Contact.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Contact 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsContactV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Contact>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Location.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Location 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsLocationV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Location>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Venue.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Venue 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsVenueV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Venue>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::File.
 * @brief 检查类型是否为 TelegramBotAPI::Type::File 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsFileV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::File>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::InlineQuery.
 * @brief 检查类型是否为 TelegramBotAPI::Type::InlineQuery 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsInlineQueryV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::InlineQuery>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::ChosenInlineResult.
 * @brief 检查类型是否为 TelegramBotAPI::Type::ChosenInlineResult 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsChosenInlineResultV =
        std::is_same_v<RemoveCVRefT<Type>,
                       TelegramBotAPI::Type::ChosenInlineResult>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Message.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Message 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsMessageV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Message>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Update.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Update 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsUpdateV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Update>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::ShippingAddress.
 * @brief 检查类型是否为 TelegramBotAPI::Type::ShippingAddress 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsShippingAddressV =
        std::is_same_v<RemoveCVRefT<Type>,
                       TelegramBotAPI::Type::ShippingAddress>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::ShippingQuery.
 * @brief 检查类型是否为 TelegramBotAPI::Type::ShippingQuery 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsShippingQueryV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::ShippingQuery>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::OrderInfo.
 * @brief 检查类型是否为 TelegramBotAPI::Type::OrderInfo 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsOrderInfoV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::OrderInfo>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::PreCheckoutQuery.
 * @brief 检查类型是否为 TelegramBotAPI::Type::PreCheckoutQuery 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPreCheckoutQueryV =
        std::is_same_v<RemoveCVRefT<Type>,
                       TelegramBotAPI::Type::PreCheckoutQuery>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::PollOption.
 * @brief 检查类型是否为 TelegramBotAPI::Type::PollOption 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPollOptionV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::PollOption>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Poll.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Poll 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPollV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Poll>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::PollAnswer.
 * @brief 检查类型是否为 TelegramBotAPI::Type::PollAnswer 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPollAnswerV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::PollAnswer>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::Link.
 * @brief 检查类型是否为 TelegramBotAPI::Type::Link 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsLinkV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::Link>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::PollMedia.
 * @brief 检查类型是否为 TelegramBotAPI::Type::PollMedia 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsPollMediaV =
        std::is_same_v<RemoveCVRefT<Type>, TelegramBotAPI::Type::PollMedia>;

/**
 * @brief Type trait to check if a type is TelegramBotAPI::Type::ResponseParameters.
 * @brief 检查类型是否为 TelegramBotAPI::Type::ResponseParameters 的类型特征。
 */
    template <typename Type>
    inline constexpr bool IsResponseParametersV =
        std::is_same_v<RemoveCVRefT<Type>,
                       TelegramBotAPI::Type::ResponseParameters>;

} // namespace TelegramBotAPI::JSON::Detail

#endif // TELEGRAMBOTAPI_TRAITS_HPP