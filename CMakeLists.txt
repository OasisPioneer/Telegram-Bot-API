cmake_minimum_required(VERSION 3.20)
project(TelegramBotAPI VERSION 1.0.0 DESCRIPTION "Modern C++ Telegram Bot API Library" LANGUAGES CXX)

include(GNUInstallDirs)

find_package(Boost REQUIRED CONFIG COMPONENTS system json)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)

add_library(${PROJECT_NAME} STATIC
        Src/TelegramBotAPI.CPP
        Src/TelegramClient.CPP
        Src/Network/HTTPClient.CPP
)
add_library(TelegramBotAPI::TelegramBotAPI ALIAS ${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_EXTENSIONS OFF
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/Include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(${PROJECT_NAME} PUBLIC
        Boost::system
        Boost::json
        OpenSSL::SSL
        OpenSSL::Crypto
        Threads::Threads
)

add_subdirectory(Examples/EchoBot)