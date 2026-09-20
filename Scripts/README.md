# Telegram Bot API — Final Code Generation System

This package freezes the generator/runtime boundary for the Telegram Bot API C++17 project.

## Architecture

```text
schema/telegram-bot-api.yaml
        |
        v
   Generate.py
        |
        +--> semantic model
        +--> union resolution
        +--> recursive type graph
        |
        +--> Include/TelegramBotAPI/Types/*.HPP
        +--> Include/TelegramBotAPI/JSON/Serializer.HPP
        +--> Include/TelegramBotAPI/JSON/Deserializer.HPP
        +--> Include/TelegramBotAPI/JSON/Request.HPP
        +--> Include/TelegramBotAPI/Methods/*.HPP
```

There is no `.generated/CompileInclude` tree and no generated RequestEncoder layer.

## Run

From the project root:

```bash
python3 Generator/Generate.py
```

Or explicitly:

```bash
python3 Generator/Generate.py --project /path/to/Telegram-Bot-API
```

Optional CMake validation:

```bash
python3 Generator/Generate.py --project /path/to/Telegram-Bot-API --build
```

## Frozen contracts

- C++17.
- JSON runtime namespace: `TelegramBotAPI::JSON`.
- Serializer implementation namespace: `TelegramBotAPI::JSON::Detail`.
- Generated methods call the public `TelegramClient::Call` / `CallMultipart` API.
- `InputFile` remains a handwritten transport type.
- Named recursive unions use one stable public alias; recursive alternatives use `std::shared_ptr`.
- Multipart request handling is a small stable JSON request helper, not a giant generated RequestEncoder.
- A manifest records exactly which files the generator owns and allows safe cleanup on the next generation.

## Current schema validation

The included Telegram Bot API 10.3 schema resolves to:

- 379 schema types
- 23 named unions
- 185 methods
- 11 recursive types
- 1 recursive named union

The final generator writes 589 generated headers because `InputFile.HPP` is retained as a handwritten type.

## Validation performed

With the included project:

- generator/model pipeline: PASS
- generated Types C++17 compile: PASS
- generated Serializer/Deserializer compile: PASS
- all 185 generated Methods compile: PASS

A full CMake build depends on the host having the project's Boost/OpenSSL dependencies installed.
