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

## 项目简介

本项目提供一个现代化的 **C++17 Telegram Bot API 库**。

项目的公共 API 根据 Telegram Bot API Schema 自动生成。代码生成器负责生成：

* Telegram Bot API 类型
* Telegram Bot API 方法
* JSON 序列化与反序列化
* `TelegramClient` 便捷方法
* 递归类型与 Union 类型支持
* Multipart 文件上传支持

当前使用的 Telegram Bot API Schema 版本为 **10.3**，生成：

* **379** 个类型
* **23** 个 Union
* **185** 个方法

底层使用 Boost.JSON 进行 JSON 处理，使用 OpenSSL 提供 TLS 支持，并提供一个轻量级 HTTP 抽象层，可以替换为自定义实现，也方便进行单元测试。

## 环境要求

### C++ 库

* 支持 C++17 的编译器
* CMake 3.20 或更高版本
* Boost，包含：

    * `system`
    * `json`
* OpenSSL
* Threads

### 代码生成器

代码生成器需要：

* Python 3.11 或更高版本
* PyYAML

## 构建

克隆仓库后配置项目：

```bash
cmake -S . -B build
```

构建库：

```bash
cmake --build build -j
```

默认生成静态库：

```text
build/libTelegramBotAPI.a
```

### 构建选项

测试和示例默认启用。

禁用测试：

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=OFF
```

禁用示例：

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=OFF
```

同时禁用测试和示例：

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=OFF \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=OFF
```

## 安装

可以将库安装到指定目录：

```bash
cmake --install build --prefix /usr/local
```

安装内容包括：

* 公共头文件
* 静态库
* CMake Package 配置
* 导出的 `TelegramBotAPI::TelegramBotAPI` Target

其他 CMake 项目可以使用：

```cmake
find_package(TelegramBotAPI CONFIG REQUIRED)

target_link_libraries(MyApplication
    PRIVATE
        TelegramBotAPI::TelegramBotAPI
)
```

如果安装到了自定义路径，可以通过 `CMAKE_PREFIX_PATH` 指定：

```bash
cmake -S . -B build \
    -DCMAKE_PREFIX_PATH=/path/to/telegram-bot-api/install
```

## 基本用法

包含主公共头文件：

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>
```

使用 Telegram Bot Token 创建客户端：

```cpp
#include <TelegramBotAPI/TelegramBotAPI.HPP>

int main() {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Me = Client.GetMe();

    return 0;
}
```

`GetMe()` 返回：

```text
TelegramBotAPI::Type::User
```

如果使用更高层的 `TelegramBotAPI` Runtime，可以通过 `API()` 访问底层 `TelegramClient`：

```cpp
TelegramBotAPI::TelegramBotAPI Bot("YOUR_BOT_TOKEN");
const auto Me = Bot.API().GetMe();
```

`API()` 返回底层 `TelegramClient` 的引用。

### 发送消息

`ChatID` 支持数字类型的 Chat ID，也支持类似 `@channelusername` 的字符串用户名。

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

也可以使用用户名：

```cpp
const auto Message = Client.SendMessage(
    std::string("@my_channel"),
    "Hello from C++!"
);
```

### 通过 URL 发送图片

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

### 发送本地文件

`InputFile::FromFile()` 用于指定本地文件。

HTTP 层会通过 `multipart/form-data` 上传该文件。

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

### 使用已有的 Telegram File ID

如果已经拥有 Telegram 返回的 `file_id`，可以直接使用：

```cpp
const auto Message = Client.SendPhoto(
    123456789LL,
    TelegramBotAPI::Type::InputFile::FromFileID(
        "AgACAg..."
    )
);
```

`InputFile` 支持三种来源：

| 工厂方法           | Telegram 表示形式           |
| -------------- | ----------------------- |
| `FromFileID()` | 已存在的 Telegram `file_id` |
| `FromURL()`    | HTTP/HTTPS URL          |
| `FromFile()`   | 本地文件系统路径                |

## TelegramClient 配置

`TelegramClient` 提供多个构造函数，可以配置 API 地址、请求超时时间以及 HTTP 客户端。

### 自定义 API URL

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    "https://api.telegram.org"
);
```

### 自定义请求超时时间

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    std::chrono::seconds(30)
);
```

### 同时自定义 API URL 和超时时间

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    "https://api.telegram.org",
    std::chrono::seconds(30)
);
```

### 自定义 HTTP Client

`TelegramClient` 也可以接收 `Network::IHTTPClient` 的实现。

这对于测试以及需要控制底层 HTTP Transport 的应用非常有用。

```cpp
TelegramBotAPI::TelegramClient Client(
    "YOUR_BOT_TOKEN",
    MyHTTPClient
);
```

## 自动生成的 API

代码生成器会将 Telegram Bot API 的全部方法暴露到 `TelegramClient`。

对于带参数的方法，对应的参数结构体会直接生成在该 Method 的头文件中：

```cpp
#include <TelegramBotAPI/Methods/sendMessage.HPP>

TelegramBotAPI::Methods::sendMessageParameters Parameters;
Parameters.ChatID = 123456789LL;
Parameters.Text = "Hello";

const auto Message = Client.SendMessage(Parameters);
```

Method 类同时保留兼容性别名 `using Parameters = sendMessageParameters;`，因此 `TelegramBotAPI::Methods::sendMessage::Parameters` 仍然有效。当前不再生成独立的 `MethodParameters/` 头文件目录；每个方法的参数结构体和 Method 类会一起生成到 `Include/TelegramBotAPI/Methods/<method>.HPP`。

对于没有必填参数的方法，会生成无参数便捷重载；对于存在必填参数的方法，也会生成只接收必填参数的便捷重载。

例如：

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

生成的方法名称采用 PascalCase，并对应 Telegram Bot API 的原始方法名称。

例如：

```text
getMe        → GetMe()
getChat      → GetChat()
sendMessage  → SendMessage()
sendPhoto    → SendPhoto()
```

底层生成的 Method 类也可以直接使用，位于：

```text
Include/TelegramBotAPI/Methods/
```

生成的 Telegram API 类型位于：

```text
Include/TelegramBotAPI/Types/
```

JSON 相关组件位于：

```text
Include/TelegramBotAPI/JSON/
```

## Runtime 与 Long Polling

`TelegramBotAPI::TelegramBotAPI` 提供更高层的 Long Polling Runtime：

```cpp
TelegramBotAPI::TelegramBotAPI Bot("YOUR_BOT_TOKEN");
Bot.Run();
```

可以调用 `Bot.Stop()` 停止轮询。Runtime 会在每个 Update 处理后推进 Offset；单个 Update 的处理器抛出异常时，不会因此终止整个 Long Polling 循环。`getUpdates` 的网络/API 错误仍会向外抛出。

## 错误处理

Telegram API 错误以及客户端内部错误通过库提供的异常类型表示。

如果应用程序需要处理 API 调用失败，可以在 API 调用外围捕获异常：

```cpp
try {
    TelegramBotAPI::TelegramClient Client("YOUR_BOT_TOKEN");

    const auto Me = Client.GetMe();
}
catch (const std::exception &Error) {
    // 处理 API、HTTP、JSON 或客户端错误。
}
```

Telegram API 异常类型位于：

```text
Include/TelegramBotAPI/TelegramAPIException.HPP
```

## 代码生成

C++ API 根据 Telegram Bot API Schema 自动生成。

代码生成器位于：

```text
Scripts/
```

生成当前 Schema 对应的 C++ API：

```bash
python3 Scripts/Generate.py
```

Schema 文件位于：

```text
Scripts/schema/telegram-bot-api.yaml
```

生成器会生成：

```text
Include/TelegramBotAPI/
```

下的公共头文件。

代码生成具有确定性，并且通过幂等性测试。

修改 Schema 或生成器之后，可以重新生成并检查生成结果：

```bash
python3 Scripts/Generate.py
git status --short
```

Python 项目元数据位于：

```text
pyproject.toml
```

代码生成器要求 Python 3.11 或更高版本。

## 测试

配置并构建测试：

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_TESTS=ON

cmake --build build -j
```

运行全部测试：

```bash
ctest --test-dir build --output-on-failure
```

测试套件覆盖：

* JSON 序列化与反序列化
* HTTP 请求构造
* Runtime 行为
* Multipart 请求
* Telegram Client 行为
* Generator Model 验证
* 生成代码验证
* Union 类型处理
* 完整代码生成
* 代码生成幂等性
* Telegram API 端到端测试

当前 Schema 10.3 的验证基线：**11** 个 CTest 测试，**10** 个通过，未配置真实 Bot 凭据时 **1** 个 E2E 测试跳过，**0** 个失败。

## 端到端测试

Telegram E2E 测试需要一个真实的 Telegram Bot Token 和 Chat ID。

将凭据设置为环境变量：

```bash
export TELEGRAM_BOT_TOKEN="YOUR_BOT_TOKEN"
export TELEGRAM_CHAT_ID="YOUR_CHAT_ID"
```

然后运行：

```bash
ctest --test-dir build \
    -R TelegramE2ETest \
    --output-on-failure
```

E2E 测试会执行真实的 Telegram API 操作，包括：

* `getMe`
* `sendMessage`
* 使用 URL 的 `sendPhoto`
* 使用本地文件上传的 `sendPhoto`

**不要将 Bot Token 或其他敏感凭据提交到 Git 仓库。**

如果没有设置 E2E 环境变量，测试会被自动跳过，而不是导致整个测试套件失败。

## 示例

项目包含两个示例：

```text
Examples/EchoBot/
Examples/KeyboardBot/
```

`EchoBot` 展示最小化的消息处理 Bot。`KeyboardBot` 展示 Inline Keyboard、Reply Keyboard、`CallbackQuery`、`AnswerCallbackQuery`、`API()` 以及 `Run()` Long Polling。

启用示例并构建：

```bash
cmake -S . -B build \
    -DTELEGRAM_BOT_API_BUILD_EXAMPLES=ON

cmake --build build -j
```

## 项目结构

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

项目许可证请参阅：

See [LICENSE](LICENSE) for the project license.