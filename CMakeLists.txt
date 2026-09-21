cmake_minimum_required(VERSION 3.20)

project(
        TelegramBotAPI
        VERSION 1.0.0
        DESCRIPTION "Modern C++ Telegram Bot API Library"
        LANGUAGES CXX
)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

find_package(Boost REQUIRED CONFIG COMPONENTS system json)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)

option(
        TELEGRAM_BOT_API_BUILD_TESTS
        "Build TelegramBotAPI tests"
        ON
)

option(
        TELEGRAM_BOT_API_BUILD_EXAMPLES
        "Build TelegramBotAPI examples"
        ON
)

add_library(${PROJECT_NAME} STATIC
        Src/TelegramBotAPI.CPP
        Src/TelegramClient.CPP
        Src/Network/HTTPClient.CPP
        Src/Network/Multipart/MultipartForm.CPP
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

if(TELEGRAM_BOT_API_BUILD_EXAMPLES)
    add_subdirectory(Examples/EchoBot)
    add_subdirectory(Examples/KeyboardBot)
endif()

if(TELEGRAM_BOT_API_BUILD_TESTS)
    enable_testing()
    add_subdirectory(Tests)
endif()

# ---------------------------------------------------------------------------
# Installation
# ---------------------------------------------------------------------------

install(
        TARGETS ${PROJECT_NAME}
        EXPORT TelegramBotAPITargets
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
        DIRECTORY Include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
        EXPORT TelegramBotAPITargets
        FILE TelegramBotAPITargets.cmake
        NAMESPACE TelegramBotAPI::
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/TelegramBotAPI
)

configure_package_config_file(
        ${PROJECT_SOURCE_DIR}/cmake/TelegramBotAPIConfig.cmake.in
        ${PROJECT_BINARY_DIR}/TelegramBotAPIConfig.cmake
        INSTALL_DESTINATION
        ${CMAKE_INSTALL_LIBDIR}/cmake/TelegramBotAPI
)

write_basic_package_version_file(
        ${PROJECT_BINARY_DIR}/TelegramBotAPIConfigVersion.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY SameMajorVersion
)

install(
        FILES
        ${PROJECT_BINARY_DIR}/TelegramBotAPIConfig.cmake
        ${PROJECT_BINARY_DIR}/TelegramBotAPIConfigVersion.cmake
        DESTINATION
        ${CMAKE_INSTALL_LIBDIR}/cmake/TelegramBotAPI
)