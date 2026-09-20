#ifndef TELEGRAMBOTAPI_RICHBLOCKMATHEMATICALEXPRESSION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKMATHEMATICALEXPRESSION_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockMathematicalExpression {
    std::string Type;
    std::string Expression;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKMATHEMATICALEXPRESSION_HPP
