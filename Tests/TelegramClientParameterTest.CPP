#include <cstdlib>
#include <iostream>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/JSON/Json.HPP"

int main()
{
    std::cout
        << "TelegramClientParameterTest started"
        << std::endl;

    const char* BotTokenEnvironment =
        std::getenv("TELEGRAM_BOT_TOKEN");

    if (BotTokenEnvironment == nullptr)
    {
        std::cerr
            << "TELEGRAM_BOT_TOKEN is not set"
            << std::endl;

        return 1;
    }

    try
    {
        TelegramBotAPI::TelegramClient Client(
            BotTokenEnvironment
        );

        TelegramBotAPI::JSON::Object Parameters;

        Parameters["chat_id"] =
            static_cast<std::int64_t>(123456789);

        /*
         * 暂时不能直接调用私有的 Call<T>()。
         *
         * 这里先说明下一步：
         * 我们需要通过一个具体的 Telegram API 方法
         * 来验证参数化 Call<T>()。
         */
        std::cout
            << "Parameters:"
            << std::endl;

        std::cout
            << boost::json::serialize(Parameters)
            << std::endl;
    }
    catch (const TelegramBotAPI::TelegramAPIException& Exception)
    {
        std::cerr
            << "Telegram API error"
            << std::endl;

        std::cerr
            << "ErrorCode: "
            << Exception.GetErrorCode()
            << std::endl;

        std::cerr
            << "Description: "
            << Exception.GetDescription()
            << std::endl;

        return 1;
    }
    catch (const std::exception& Exception)
    {
        std::cerr
            << "Unexpected error: "
            << Exception.what()
            << std::endl;

        return 1;
    }

    std::cout
        << "TelegramClientParameterTest finished"
        << std::endl;

    return 0;
}