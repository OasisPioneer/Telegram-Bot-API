#ifndef TELEGRAMBOTAPI_BUSINESSOPENINGHOURS_HPP
#define TELEGRAMBOTAPI_BUSINESSOPENINGHOURS_HPP

#include "TelegramBotAPI/Types/BusinessOpeningHoursInterval.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct BusinessOpeningHours {
    std::string TimeZoneName;
    std::vector<::TelegramBotAPI::Type::BusinessOpeningHoursInterval> OpeningHours;
};

}

#endif // TELEGRAMBOTAPI_BUSINESSOPENINGHOURS_HPP
