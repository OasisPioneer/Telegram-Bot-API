#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <variant>

#include "TelegramBotAPI/Methods/sendPhoto.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/Network/Multipart/MultipartPart.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"

class MockHTTPClient final
    : public TelegramBotAPI::Network::IHTTPClient {
public:
    TelegramBotAPI::Network::HTTPRequest LastRequest{};
    int RequestCount{0};

    TelegramBotAPI::Network::HTTPResponse PerformHTTPS(
        const TelegramBotAPI::Network::HTTPRequest &Request
    ) override {
        LastRequest = Request;
        ++RequestCount;

        TelegramBotAPI::Network::HTTPResponse Response;

        Response.StatusCode = 200;
        Response.Reason = "OK";
        Response.ReasonPhrase = "OK";

        Response.Body = R"json(
{
    "ok": true,
    "result": {
        "message_id": 1,
        "date": 1700000000,
        "chat": {
            "id": 12345,
            "type": "private",
            "first_name": "Test"
        }
    }
}
)json";

        return Response;
    }
};


namespace
{
    constexpr const char *TestFilePath =
        "telegram_multipart_test.jpg";

    constexpr const char *TestFileContent =
        "fake-jpeg-content";

    std::string ExtractMultipartBoundary(
        const std::vector<
            TelegramBotAPI::Network::HTTPHeader
        > &Headers
    )
    {
        constexpr const char *Prefix =
            "multipart/form-data; boundary=\"";

        const std::string PrefixString(Prefix);

        for (const auto &Header : Headers) {
            if (Header.Name != "Content-Type") {
                continue;
            }

            assert(
                Header.Value.rfind(
                    PrefixString,
                    0
                ) == 0
            );

            assert(Header.Value.size() > PrefixString.size());
            assert(Header.Value.back() == '"');

            const std::size_t Start =
                PrefixString.size();

            const std::size_t Length =
                Header.Value.size() -
                Start -
                1;

            const std::string Boundary =
                Header.Value.substr(
                    Start,
                    Length
                );

            assert(!Boundary.empty());

            return Boundary;
        }

        assert(false && "Content-Type header not found");

        return {};
    }


    void CreateTestFile()
    {
        std::ofstream File(
            TestFilePath,
            std::ios::binary
        );

        assert(File);

        File.write(
            TestFileContent,
            static_cast<std::streamsize>(
                std::string(TestFileContent).size()
            )
        );

        assert(File);
    }


    void RemoveTestFile()
    {
        std::remove(TestFilePath);
    }
}


int main()
{
    using namespace TelegramBotAPI;
    using namespace TelegramBotAPI::Methods;
    using namespace TelegramBotAPI::Type;
    using namespace TelegramBotAPI::Network::Multipart;

    /*
     * ---------------------------------------------------------
     * 1. Create a deterministic local test file.
     * ---------------------------------------------------------
     */

    CreateTestFile();


    /*
     * ---------------------------------------------------------
     * 2. Verify InputFile itself.
     * ---------------------------------------------------------
     */

    const InputFile LocalFile =
        InputFile::FromFile(TestFilePath);

    assert(LocalFile.IsLocalFile());
    assert(!LocalFile.IsFileID());
    assert(!LocalFile.IsURL());

    assert(
        LocalFile.GetValue() ==
        TestFilePath
    );


    /*
     * ---------------------------------------------------------
     * 3. Construct sendPhoto parameters.
     * ---------------------------------------------------------
     */

    sendPhoto::Parameters Parameters(
        std::variant<long long, std::string>{
            12345LL
        },
        std::variant<InputFile, std::string>{
            LocalFile
        }
    );


    /*
     * ---------------------------------------------------------
     * 4. Local InputFile must require multipart.
     * ---------------------------------------------------------
     */

    assert(
        Parameters.RequiresMultipart()
    );


    /*
     * ---------------------------------------------------------
     * 5. Inspect generated MultipartForm.
     *
     * This is a separate form from the one generated internally
     * by sendPhoto::SendPhoto(). Therefore its boundary must NOT
     * be compared with the HTTP request boundary later.
     * ---------------------------------------------------------
     */

    const auto Form =
        Parameters.ToMultipart();

    assert(
        !Form.GetBoundary().empty()
    );

    const auto &Parts =
        Form.GetParts();

    assert(
        Parts.size() == 2
    );


    /*
     * ---------------------------------------------------------
     * 6. Validate chat_id multipart field.
     * ---------------------------------------------------------
     */

    {
        const auto &Part = Parts[0];

        assert(
            Part.GetType() ==
            MultipartPart::Type::Field
        );

        assert(
            Part.GetName() ==
            "chat_id"
        );

        assert(
            Part.GetFileName().empty()
        );

        assert(
            Part.GetContentType().empty()
        );

        assert(
            Part.GetContent() ==
            "12345"
        );
    }


    /*
     * ---------------------------------------------------------
     * 7. Validate photo multipart file.
     * ---------------------------------------------------------
     */

    {
        const auto &Part = Parts[1];

        assert(
            Part.GetType() ==
            MultipartPart::Type::File
        );

        assert(
            Part.GetName() ==
            "photo"
        );

        assert(
            Part.GetFileName() ==
            TestFilePath
        );

        assert(
            !Part.GetContentType().empty()
        );

        assert(
            Part.GetContent() ==
            TestFileContent
        );
    }


    /*
     * ---------------------------------------------------------
     * 8. Validate standalone MultipartForm::Build().
     * ---------------------------------------------------------
     */

    {
        const std::string Body =
            Form.Build();

        const std::string Boundary =
            Form.GetBoundary();

        assert(
            Body.find(
                "--" + Boundary
            ) != std::string::npos
        );

        assert(
            Body.find(
                "name=\"chat_id\""
            ) != std::string::npos
        );

        assert(
            Body.find(
                "name=\"photo\""
            ) != std::string::npos
        );

        assert(
            Body.find(
                "filename=\"" +
                std::string(TestFilePath) +
                "\""
            ) != std::string::npos
        );

        assert(
            Body.find(
                TestFileContent
            ) != std::string::npos
        );

        assert(
            Body.find(
                "--" + Boundary + "--"
            ) != std::string::npos
        );
    }


    /*
     * ---------------------------------------------------------
     * 9. Execute the complete TelegramClient multipart path.
     * ---------------------------------------------------------
     */

    MockHTTPClient HTTPClient;

    TelegramClient Client(
        "123456:TEST_TOKEN",
        "https://api.telegram.org",
        HTTPClient
    );

    sendPhoto Method(Client);

    const Type::Message Message =
        Method.SendPhoto(
            Parameters
        );


    /*
     * ---------------------------------------------------------
     * 10. Verify exactly one HTTP request.
     * ---------------------------------------------------------
     */

    assert(
        HTTPClient.RequestCount == 1
    );


    const auto &Request =
        HTTPClient.LastRequest;


    /*
     * ---------------------------------------------------------
     * 11. Verify HTTP request metadata.
     * ---------------------------------------------------------
     */

    assert(
        Request.Scheme ==
        "https"
    );

    assert(
        Request.Host ==
        "api.telegram.org"
    );

    assert(
        Request.Port ==
        "443"
    );

    assert(
        Request.Target ==
        "/bot123456:TEST_TOKEN/sendPhoto"
    );

    assert(
        Request.Method ==
        "POST"
    );


    /*
     * ---------------------------------------------------------
     * 12. Extract the boundary from the ACTUAL HTTP request.
     *
     * This is the boundary generated inside:
     *
     *     sendPhoto::SendPhoto()
     *         -> ToMultipart()
     *
     * and therefore is intentionally different from Form above.
     * ---------------------------------------------------------
     */

    const std::string RequestBoundary =
        ExtractMultipartBoundary(
            Request.Headers
        );

    assert(
        !RequestBoundary.empty()
    );


    /*
     * ---------------------------------------------------------
     * 13. Verify actual Content-Type header.
     * ---------------------------------------------------------
     */

    bool FoundContentType = false;

    for (const auto &Header : Request.Headers) {
        if (Header.Name != "Content-Type") {
            continue;
        }

        FoundContentType = true;

        assert(
            Header.Value.find(
                "multipart/form-data"
            ) == 0
        );

        assert(
            Header.Value.find(
                RequestBoundary
            ) != std::string::npos
        );
    }

    assert(
        FoundContentType
    );


    /*
     * ---------------------------------------------------------
     * 14. Verify actual HTTP multipart body.
     * ---------------------------------------------------------
     */

    assert(
        Request.Body.find(
            "--" + RequestBoundary
        ) != std::string::npos
    );

    assert(
        Request.Body.find(
            "name=\"chat_id\""
        ) != std::string::npos
    );

    assert(
        Request.Body.find(
            "name=\"photo\""
        ) != std::string::npos
    );

    assert(
        Request.Body.find(
            "filename=\"" +
            std::string(TestFilePath) +
            "\""
        ) != std::string::npos
    );

    assert(
        Request.Body.find(
            TestFileContent
        ) != std::string::npos
    );

    assert(
        Request.Body.find(
            "--" +
            RequestBoundary +
            "--"
        ) != std::string::npos
    );


    /*
     * ---------------------------------------------------------
     * 15. Verify multipart body does NOT accidentally use the
     * standalone Form boundary.
     * ---------------------------------------------------------
     */

    assert(
        Request.Body.find(
            "--" + Form.GetBoundary()
        ) == std::string::npos
    );


    /*
     * ---------------------------------------------------------
     * 16. Verify Telegram response deserialization.
     * ---------------------------------------------------------
     */

    assert(
        Message.MessageID == 1
    );

    assert(
        Message.Chat.ID == 12345
    );


    /*
     * ---------------------------------------------------------
     * 17. Cleanup.
     * ---------------------------------------------------------
     */

    RemoveTestFile();


    std::cout
        << "multipart runtime test: PASS\n";

    return 0;
}
