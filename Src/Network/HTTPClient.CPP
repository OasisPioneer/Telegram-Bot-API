#include "TelegramBotAPI/Network/HTTPClient.HPP"

#include <string>

#include <openssl/err.h>
#include <openssl/ssl.h>

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/ssl.hpp>

#include "TelegramBotAPI/Network/HTTPException.HPP"

namespace TelegramBotAPI::Network {
    HTTPClient::HTTPClient() : Timeout(std::chrono::seconds(30)) {}

    HTTPClient::HTTPClient(std::chrono::seconds TimeoutValue)
        : Timeout(TimeoutValue) {}

    HTTPResponse HTTPClient::PerformHTTPS(const HTTPRequest &Request) {
        if (Request.Scheme != "http" && Request.Scheme != "https") {
            throw HTTPException(HTTPException::ErrorType::UnsupportedScheme,
                                "Unsupported HTTP scheme: " + Request.Scheme);
        }

        if (Request.Host.empty()) {
            throw HTTPException(HTTPException::ErrorType::InvalidRequest,
                                "HTTP request host cannot be empty");
        }

        if (Request.Target.empty()) {
            throw HTTPException(HTTPException::ErrorType::InvalidRequest,
                                "HTTP request target cannot be empty");
        }

        try {
            boost::asio::io_context IOContext;

            boost::asio::ip::tcp::resolver Resolver(IOContext);

            boost::asio::ip::tcp::resolver::results_type Results =
                Resolver.resolve(Request.Host, Request.Port);

            if (Request.Scheme == "http") {
                boost::beast::tcp_stream Stream(IOContext);

                Stream.expires_after(Timeout);

                Stream.connect(Results);

                boost::beast::http::request<boost::beast::http::string_body>
                    HTTPRequestValue(
                        boost::beast::http::string_to_verb(Request.Method),
                        Request.Target, 11);

                for (const HTTPHeader &Header : Request.Headers) {
                    HTTPRequestValue.set(Header.Name, Header.Value);
                }

                HTTPRequestValue.body() = Request.Body;

                HTTPRequestValue.prepare_payload();

                boost::beast::http::write(Stream, HTTPRequestValue);

                boost::beast::flat_buffer Buffer;

                boost::beast::http::response<boost::beast::http::string_body>
                    HTTPResponseValue;

                boost::beast::http::read(Stream, Buffer, HTTPResponseValue);

                HTTPResponse Response;

                Response.StatusCode = HTTPResponseValue.result_int();

                Response.Reason =
                    std::string(HTTPResponseValue.reason().data(),
                                HTTPResponseValue.reason().size());

                Response.ReasonPhrase = Response.Reason;

                for (const auto &Header : HTTPResponseValue.base()) {
                    Response.Headers.push_back(
                        HTTPHeader{std::string(Header.name_string().data(),
                                               Header.name_string().size()),
                                   std::string(Header.value().data(),
                                               Header.value().size())});
                }

                Response.Body = HTTPResponseValue.body();

                boost::beast::error_code ErrorCode;

                Stream.socket().shutdown(
                    boost::asio::ip::tcp::socket::shutdown_both, ErrorCode);

                return Response;
            }

            boost::asio::ssl::context SSLContext(
                boost::asio::ssl::context::tls_client);

            SSLContext.set_default_verify_paths();

            SSLContext.set_verify_mode(boost::asio::ssl::verify_peer);

            boost::beast::ssl_stream<boost::beast::tcp_stream> Stream(
                IOContext, SSLContext);

            boost::beast::get_lowest_layer(Stream).expires_after(Timeout);

            boost::beast::get_lowest_layer(Stream).connect(Results);

            if (!SSL_set_tlsext_host_name(Stream.native_handle(),
                                          Request.Host.c_str())) {
                boost::beast::error_code ErrorCode(
                    static_cast<int>(::ERR_get_error()),
                    boost::asio::error::get_ssl_category());

                throw HTTPException(HTTPException::ErrorType::SSL,
                                    ErrorCode.message());
            }

            Stream.handshake(boost::asio::ssl::stream_base::client);

            boost::beast::http::request<boost::beast::http::string_body>
                HTTPRequestValue(
                    boost::beast::http::string_to_verb(Request.Method),
                    Request.Target, 11);

            for (const HTTPHeader &Header : Request.Headers) {
                HTTPRequestValue.set(Header.Name, Header.Value);
            }

            HTTPRequestValue.body() = Request.Body;

            HTTPRequestValue.prepare_payload();

            boost::beast::http::write(Stream, HTTPRequestValue);

            boost::beast::flat_buffer Buffer;

            boost::beast::http::response<boost::beast::http::string_body>
                HTTPResponseValue;

            boost::beast::http::read(Stream, Buffer, HTTPResponseValue);

            HTTPResponse Response;

            Response.StatusCode = HTTPResponseValue.result_int();

            Response.Reason = std::string(HTTPResponseValue.reason().data(),
                                          HTTPResponseValue.reason().size());

            Response.ReasonPhrase = Response.Reason;

            for (const auto &Header : HTTPResponseValue.base()) {
                Response.Headers.push_back(HTTPHeader{
                    std::string(Header.name_string().data(),
                                Header.name_string().size()),
                    std::string(Header.value().data(), Header.value().size())});
            }

            Response.Body = HTTPResponseValue.body();

            boost::beast::error_code ErrorCode;

            Stream.shutdown(ErrorCode);

            return Response;
        } catch (const HTTPException &) {
            throw;
        } catch (const boost::system::system_error &Exception) {
            throw HTTPException(Exception.code().message());
        }
    }
} // namespace TelegramBotAPI::Network