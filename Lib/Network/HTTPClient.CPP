#include "TelegramBotAPI/Network/HTTPClient.HPP"

#include <openssl/ssl.h>

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/beast/version.hpp>

#include <string>

#include "TelegramBotAPI/Network/HTTPException.HPP"

namespace TelegramBotAPI::Network {
    namespace
    {
        namespace Beast = boost::beast;
        namespace HTTP = boost::beast::http;
        namespace Net = boost::asio;

        HTTP::verb GetHTTPVerb(
            const std::string& Method
        )
        {
            if (Method == "GET")
            {
                return HTTP::verb::get;
            }

            if (Method == "POST")
            {
                return HTTP::verb::post;
            }

            if (Method == "PUT")
            {
                return HTTP::verb::put;
            }

            if (Method == "DELETE")
            {
                return HTTP::verb::delete_;
            }

            if (Method == "PATCH")
            {
                return HTTP::verb::patch;
            }

            throw HTTPException(
                HTTPErrorType::HTTP,
                "Unsupported HTTP method: " + Method
            );
        }
    }

    HTTPClient::HTTPClient()
        : Timeout(std::chrono::seconds(30))
    {
    }

    HTTPClient::HTTPClient(
        std::chrono::seconds TimeoutValue
    )
        : Timeout(TimeoutValue)
    {
    }

    HTTPResponse HTTPClient::PerformHTTPS(
        const HTTPRequest& Request
    )
    {
        if (Request.Host.empty())
        {
            throw HTTPException(
                HTTPErrorType::HTTP,
                "HTTP request host cannot be empty"
            );
        }

        if (Request.Target.empty())
        {
            throw HTTPException(
                HTTPErrorType::HTTP,
                "HTTP request target cannot be empty"
            );
        }

        if (Request.Method.empty())
        {
            throw HTTPException(
                HTTPErrorType::HTTP,
                "HTTP request method cannot be empty"
            );
        }

        Net::io_context IOContext;

        Net::ssl::context SSLContext(
            Net::ssl::context::tls_client
        );

        try
        {
            SSLContext.set_default_verify_paths();
        }
        catch (const boost::system::system_error& Exception)
        {
            throw HTTPException(
                HTTPErrorType::TLS,
                "Failed to load system TLS certificates: " +
                std::string(Exception.what())
            );
        }

        SSLContext.set_verify_mode(
            Net::ssl::verify_peer
        );

        Net::ip::tcp::resolver Resolver(
            IOContext
        );

        Net::ssl::stream<
            Beast::tcp_stream
        > Stream(
            IOContext,
            SSLContext
        );

        /*
         * Enable SNI.
         *
         * Boost.Asio's SSL stream ultimately uses OpenSSL.
         * SNI is required by modern HTTPS servers such as
         * api.telegram.org.
         */
        if (!SSL_set_tlsext_host_name(
                Stream.native_handle(),
                Request.Host.c_str()
            ))
        {
            throw HTTPException(
                HTTPErrorType::TLS,
                "Failed to configure TLS SNI for host: " +
                Request.Host
            );
        }

        try
        {
            Beast::get_lowest_layer(Stream).expires_after(
                Timeout
            );

            Net::ip::tcp::resolver::results_type Results =
                Resolver.resolve(
                    Request.Host,
                    "443"
                );

            Beast::get_lowest_layer(Stream).connect(
                Results
            );
        }
        catch (const boost::system::system_error& Exception)
        {
            const boost::system::error_code ErrorCode =
                Exception.code();

            if (ErrorCode == Net::error::timed_out ||
                ErrorCode == Beast::error::timeout)
            {
                throw HTTPException(
                    HTTPErrorType::Timeout,
                    "HTTPS connection timed out: " +
                    std::string(Exception.what())
                );
            }

            if (ErrorCode.category() ==
                Net::error::get_system_category())
            {
                throw HTTPException(
                    HTTPErrorType::Connection,
                    "HTTPS connection failed: " +
                    std::string(Exception.what())
                );
            }

            throw HTTPException(
                HTTPErrorType::DNS,
                "Failed to resolve host: " +
                Request.Host +
                ": " +
                std::string(Exception.what())
            );
        }

        try
        {
            Beast::get_lowest_layer(Stream).expires_after(
                Timeout
            );

            Stream.handshake(
                Net::ssl::stream_base::client
            );
        }
        catch (const boost::system::system_error& Exception)
        {
            const boost::system::error_code ErrorCode =
                Exception.code();

            if (ErrorCode == Net::error::timed_out ||
                ErrorCode == Beast::error::timeout)
            {
                throw HTTPException(
                    HTTPErrorType::Timeout,
                    "TLS handshake timed out: " +
                    std::string(Exception.what())
                );
            }

            throw HTTPException(
                HTTPErrorType::TLS,
                "TLS handshake failed: " +
                std::string(Exception.what())
            );
        }

        HTTP::request<
            HTTP::string_body
        > HTTPRequestObject;

        HTTPRequestObject.version(11);

        HTTPRequestObject.method(
            GetHTTPVerb(Request.Method)
        );

        HTTPRequestObject.target(
            Request.Target
        );

        /*
         * Host is set explicitly here.
         *
         * HTTPClient also allows callers to supply arbitrary
         * headers through HTTPRequest::Headers.
         */
        HTTPRequestObject.set(
            HTTP::field::host,
            Request.Host
        );

        for (const HTTPHeader& Header : Request.Headers)
        {
            /*
             * Avoid sending a duplicate Host header.
             * Host is controlled by HTTPRequest::Host.
             */
            if (Header.Name == "Host" ||
                Header.Name == "host")
            {
                continue;
            }

            HTTPRequestObject.set(
                Header.Name,
                Header.Value
            );
        }

        HTTPRequestObject.body() =
            Request.Body;

        /*
         * Automatically generates Content-Length when
         * using string_body.
         */
        HTTPRequestObject.prepare_payload();

        Beast::flat_buffer ReadBuffer;

        HTTP::response<
            HTTP::string_body
        > HTTPResponseObject;

        try
        {
            Beast::get_lowest_layer(Stream).expires_after(
                Timeout
            );

            HTTP::write(
                Stream,
                HTTPRequestObject
            );
        }
        catch (const boost::system::system_error& Exception)
        {
            const boost::system::error_code ErrorCode =
                Exception.code();

            if (ErrorCode == Net::error::timed_out ||
                ErrorCode == Beast::error::timeout)
            {
                throw HTTPException(
                    HTTPErrorType::Timeout,
                    "HTTPS request write timed out: " +
                    std::string(Exception.what())
                );
            }

            throw HTTPException(
                HTTPErrorType::Write,
                "Failed to write HTTPS request: " +
                std::string(Exception.what())
            );
        }

        try
        {
            Beast::get_lowest_layer(Stream).expires_after(
                Timeout
            );

            HTTP::read(
                Stream,
                ReadBuffer,
                HTTPResponseObject
            );
        }
        catch (const boost::system::system_error& Exception)
        {
            const boost::system::error_code ErrorCode =
                Exception.code();

            if (ErrorCode == Net::error::timed_out ||
                ErrorCode == Beast::error::timeout)
            {
                throw HTTPException(
                    HTTPErrorType::Timeout,
                    "HTTPS response read timed out: " +
                    std::string(Exception.what())
                );
            }

            throw HTTPException(
                HTTPErrorType::Read,
                "Failed to read HTTPS response: " +
                std::string(Exception.what())
            );
        }

        HTTPResponse Response;

        Response.StatusCode =
            HTTPResponseObject.result_int();

        Response.ReasonPhrase =
            std::string(
                HTTPResponseObject.reason()
            );

        for (const auto& Field : HTTPResponseObject.base())
        {
            Response.Headers.push_back(
                HTTPHeader{
                    std::string(Field.name_string()),
                    std::string(Field.value())
                }
            );
        }

        Response.Body =
            HTTPResponseObject.body();

        /*
         * Gracefully shut down TLS.
         *
         * Some servers close the TCP connection without completing
         * a TLS shutdown. That situation is not treated as an HTTP
         * request failure.
         */
        try
        {
            Beast::get_lowest_layer(Stream).expires_after(
                Timeout
            );

            boost::system::error_code ShutdownError;

            Stream.shutdown(
                ShutdownError
            );

            if (ShutdownError &&
                ShutdownError !=
                    Net::error::eof &&
                ShutdownError !=
                    Net::ssl::error::stream_truncated)
            {
                /*
                 * The response has already been completely received.
                 *
                 * Do not discard a valid HTTP response merely because
                 * the peer closed the TLS session in a non-standard way.
                 */
            }
        }
        catch (const boost::system::system_error&)
        {
            /*
             * TLS shutdown errors after a complete HTTP response
             * are intentionally ignored.
             */
        }

        return Response;
    }
} // namespace TelegramBotAPI::Network