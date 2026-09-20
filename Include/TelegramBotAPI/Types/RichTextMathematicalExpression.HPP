#ifndef TELEGRAMBOTAPI_RICHTEXTMATHEMATICALEXPRESSION_HPP
#define TELEGRAMBOTAPI_RICHTEXTMATHEMATICALEXPRESSION_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct RichTextMathematicalExpression {
    std::string Type;
    std::string Expression;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTMATHEMATICALEXPRESSION_HPP
