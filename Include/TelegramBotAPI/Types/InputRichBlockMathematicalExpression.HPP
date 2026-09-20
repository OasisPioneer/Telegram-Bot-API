#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKMATHEMATICALEXPRESSION_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKMATHEMATICALEXPRESSION_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockMathematicalExpression {
    std::string Type;
    std::string Expression;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKMATHEMATICALEXPRESSION_HPP
