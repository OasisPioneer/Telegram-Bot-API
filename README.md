<p align="center">
    <img src="LOGO.png" alt="Telegram Bot API LOGO" width="300"/>
</p>

<h1 align="center">
    Telegram Bot API
</h1>

<hr/>

<p align="center">
    <a href="README.md">
        <img src="https://img.shields.io/badge/English-README-2F80ED?style=for-the-badge" alt="English README">
    </a>
    <a href="README.zh-CN.md">
        <img src="https://img.shields.io/badge/中文-README-EA4335?style=for-the-badge" alt="中文 README">
    </a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white" alt="C++17">
  <img src="https://img.shields.io/badge/Boost-1.85%2B-00599C?logo=boost&logoColor=white" alt="Boost">
  <img src="https://img.shields.io/badge/OpenSSL-3.x-721412?logo=openssl&logoColor=white" alt="OpenSSL">
  <img src="https://img.shields.io/badge/CMake-Build-064F8C?logo=cmake&logoColor=white" alt="CMake">
</p>

<hr/>

## Overview

This project provides a modern C++17 interface to the Telegram Bot API.

The public API is generated from the Telegram Bot API schema. The generator produces:

* Telegram Bot API types
* Telegram Bot API methods
* JSON serialization and deserialization
* `TelegramClient` convenience methods
* Recursive type and union support
* Multipart file upload support

The current schema is Telegram Bot API **10.3** and generates:

* **379** types
* **23** unions
* **185** methods

The library uses Boost.JSON for JSON processing, OpenSSL for TLS support, and a small HTTP abstraction that can be replaced for testing or custom transports.

## Requirements

* C++17-compatible compiler
* CMake 3.20 or newer
* Boost with:

    * `system`
    * `json`
* OpenSSL
* Threads

The generator requires:

* Python 3.11 or newer
* PyYAML

## Build

Clone the repository and configure the project:

```bash
cmake -S . -B build
```

Build the library:

```bash
cmake --build build -j
```

The static library is produced as:

```text
build/libTelegramBotAPI.a
```

### Build options

Tests and examples are enabled by default.

Disable tests:

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=OFF
```

Disable examples:

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=OFF
```

Both can be configured together:

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=OFF \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=OFF
```

## Installation

Install the library to a custom prefix:

```bash
cmake --install build --prefix /usr/local
```

The installation provides:

* Public headers
* Static library
* CMake package configuration
* Exported `TelegramBotAPI::TelegramBotAPI` target

A consumer project can use:

```cmake
find_package(TelegramBotAPI CONFIG REQUIRED)

target_link_libraries(MyApplication
    PRIVATE
        TelegramBotAPI::TelegramBotAPI
)
```

For a custom installation prefix:

```bash
cmake -S . -B build \
    -DCMAKE_PREFIX_PATH=/path/to/telegram-bot-api/install
```

## Basic Usage

Include the main public header:

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>
```

Create a client using a Telegram bot token:

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>

int main() {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Me = Client.GetMe();

    return 0;
}
```

`GetMe()` returns a `TelegramBotAPI::Type::User`.

For applications using the higher-level runtime, the underlying client is available through `API()`:

```cpp
TelegramBotAPI::TelegramBotAPI Bot("YOUR_BOT_TOKEN");
const auto Me = Bot.API().GetMe();
```

`API()` returns a reference to the underlying `TelegramClient`.

### Sending a message

`ChatID` accepts either a numeric chat ID or a string such as `@channelusername`.

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>

int main() {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Message = Client.SendMessage(
        123456789LL,
        "Hello from C++!"
    );

    return 0;
}
```

A username can also be used:

```cpp
const auto Message = Client.SendMessage(
    std::string("@my_channel"),
    "Hello from C++!"
);
```

### Sending a photo by URL

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>

int main() {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Message = Client.SendPhoto(
        123456789LL,
        TelegramBotAPI::Type::InputFile::FromURL(
            "https://example.com/image.jpg"
        )
    );

    return 0;
}
```

### Sending a local file

`InputFile::FromFile()` marks the file as a local upload. The HTTP layer sends it using multipart/form-data.

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>

int main() {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Message = Client.SendPhoto(
        123456789LL,
        TelegramBotAPI::Type::InputFile::FromFile(
            "/path/to/image.jpg"
        )
    );

    return 0;
}
```

### Using an existing Telegram file ID

```cpp
const auto Message = Client.SendPhoto(
    123456789LL,
    TelegramBotAPI::Type::InputFile::FromFileID(
        "AgACAg..."
    )
);
```

`InputFile` supports three source types:

| Factory        | Telegram representation     |
| -------------- | --------------------------- |
| `FromFileID()` | Existing Telegram `file_id` |
| `FromURL()`    | HTTP/HTTPS URL              |
| `FromFile()`   | Local filesystem path       |

## TelegramClient Configuration

The client provides several constructors.

### Custom API URL

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    "https://api.telegram.org"
);
```

### Custom timeout

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    std::chrono::seconds(30)
);
```

### Custom API URL and timeout

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    "https://api.telegram.org",
    std::chrono::seconds(30)
);
```

### Custom HTTP client

The client can also receive an implementation of `Network::IHTTPClient`. This is useful for testing and for applications that need to control the underlying HTTP transport.

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    MyHTTPClient
);
```

## Generated API

The generator exposes all Telegram Bot API methods through `TelegramClient`.

For methods with parameters, the generated parameter structure is placed directly in the corresponding method header:

```cpp
#include <TelegramBotAPI/Methods/sendMessage.HPP>

TelegramBotAPI::Methods::sendMessageParameters Parameters;
Parameters.ChatID = 123456789LL;
Parameters.Text = "Hello";

const auto Message = Client.SendMessage(Parameters);
```

The method class also keeps the compatibility alias `using Parameters = sendMessageParameters;`, so `TelegramBotAPI::Methods::sendMessage::Parameters` remains valid. There is no separate `MethodParameters/` header tree; each method's parameter structure and method class are generated together in `Include/TelegramBotAPI/Methods/<method>.HPP`.

For methods with no required parameters, a zero-argument convenience overload is generated. Methods with required parameters also expose convenience overloads for the required arguments.

For example:

```cpp
Client.GetMe();

Client.GetChat(123456789LL);

Client.SendMessage(
    123456789LL,
    "Hello"
);

Client.SendPhoto(
    123456789LL,
    TelegramBotAPI::Type::InputFile::FromFile(
        "/tmp/photo.jpg"
    )
);
```

The generated method names use PascalCase while following the corresponding Telegram Bot API method names.

The lower-level generated method classes are also available under:

```text
Include/TelegramBotAPI/Methods/
```

Generated Telegram types are available under:

```text
Include/TelegramBotAPI/Types/
```

JSON support is available under:

```text
Include/TelegramBotAPI/JSON/
```

## Runtime and Long Polling

`TelegramBotAPI::TelegramBotAPI` provides a higher-level long-polling runtime:

```cpp
TelegramBotAPI::TelegramBotAPI Bot("YOUR_BOT_TOKEN");
Bot.Run();
```

Call `Bot.Stop()` to stop polling. The runtime advances the update offset after each processed update, and an exception from an individual update handler does not terminate the long-polling loop. Transport/API failures from `getUpdates` are still propagated to the caller.

## Error Handling

Telegram API failures and client-side errors are represented by the library's exception types.

Applications should handle exceptions around API calls when failure needs to be recovered or reported:

```cpp
try {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Me = Client.GetMe();
}
catch (const std::exception &Error) {
    // Handle API, HTTP, JSON, or client errors.
}
```

See:

```text
Include/TelegramBotAPI/TelegramAPIException.HPP
```

for the library's Telegram API exception type.

## Code Generation

The C++ API is generated from the Telegram Bot API schema.

The generator is located under:

```text
Scripts/
```

Generate the current API:

```bash
python3 Scripts/Generate.py
```

The schema is stored at:

```text
Scripts/schema/telegram-bot-api.yaml
```

The generator produces the public headers under:

```text
Include/TelegramBotAPI/
```

Generation is deterministic and is tested for idempotency.

After modifying the schema or generator, regenerate the API and verify the generated tree:

```bash
python3 Scripts/Generate.py
git status --short
```

The Python project metadata is defined in:

```text
pyproject.toml
```

The project uses Python 3.11 or newer.

## Testing

Configure and build the test suite:

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=ON

cmake --build build -j
```

Run all tests:

```bash
ctest --test-dir build --output-on-failure
```

The test suite covers:

* JSON serialization and deserialization
* HTTP request construction
* Runtime behavior
* Multipart requests
* Telegram client behavior
* Generator model validation
* Generated code validation
* Union handling
* Full generation
* Generation idempotency
* Telegram API end-to-end behavior

Current Schema 10.3 validation baseline: **11** CTest tests discovered, **10** passed, **1** E2E test skipped without real bot credentials, and **0** failed.

## End-to-End Testing

The Telegram E2E test requires a real Telegram bot token and a chat ID.

Set the credentials in the environment:

```bash
export TELEGRAM_BOT_TOKEN="YOUR_BOT_TOKEN"
export TELEGRAM_CHAT_ID="YOUR_CHAT_ID"
```

Then run:

```bash
ctest --test-dir build \
    -R TelegramE2ETest \
    --output-on-failure
```

The E2E test exercises real Telegram API operations including:

* `getMe`
* `sendMessage`
* `sendPhoto` using a URL
* `sendPhoto` using a local file upload

Do not commit bot tokens or other credentials to the repository.

## Examples

The repository contains two example applications:

```text
Examples/EchoBot/
Examples/KeyboardBot/
```

`EchoBot` demonstrates a minimal message-handling bot. `KeyboardBot` demonstrates inline keyboards, reply keyboards, `CallbackQuery` handling, `AnswerCallbackQuery`, `API()`, and long polling with `Run()`.

Build it with:

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=ON

cmake --build build -j
```

## Project Structure

```text
.
├── CMakeLists.txt
├── Examples/
│   ├── EchoBot/
│   └── KeyboardBot/
├── Include/
│   └── TelegramBotAPI/
│       ├── JSON/
│       ├── Methods/
│       ├── Network/
│       ├── Types/
│       ├── TelegramAPIException.HPP
│       ├── TelegramBotAPI.HPP
│       ├── TelegramClient.HPP
│       └── TelegramClientMethods.TPP
├── Scripts/
│   ├── schema/
│   ├── Generate.py
│   ├── Model.py
│   ├── SchemaToModel.py
│   ├── TypeGraph.py
│   └── ...
├── Src/
│   ├── Network/
│   ├── TelegramBotAPI.CPP
│   └── TelegramClient.CPP
├── Tests/
├── cmake/
├── LICENSE
├── LOGO.png
├── pyproject.toml
└── README.md
```

## License

See [LICENSE](LICENSE) for the project license.
