#include "TelegramBotAPI/Types/CallbackQuery.HPP"

int main()
{
    TelegramBotAPI::Type::CallbackQuery CallbackQuery;

    CallbackQuery.ID = "123456789";
    CallbackQuery.From.ID = 10001;
    CallbackQuery.From.FirstName = "Test";
    CallbackQuery.Data = "test_data";

    return 0;
}