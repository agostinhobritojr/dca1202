#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;
using std::string;
using std::cout;
using std::endl;


int main() {
  io_service io;
  tcp::resolver resolver(io);
  tcp::resolver::query query("www.baidu.com", "80");
  tcp::resolver::iterator iter = resolver.resolve(query);
  tcp::socket socket(io);
  boost::asio::connect(socket, iter);
  string request = "GET / HTTP/1.1\r\nHost: www.baidu.com\r\nConnection: close\r\n\r\n";
  boost::asio::write(socket, boost::asio::buffer(request));
  boost::asio::streambuf response;
  boost::asio::read_until(socket, response, "\r\n");
  cout << &response << endl;
  boost::asio::read_until(socket, response, "\r\n\r\n");
  cout << &response << endl;
  boost::system::error_code ec;
  while (boost::asio::read(socket, response, boost::asio::transfer_at_least(1), ec)) {
    cout << &response;
  }
  if (ec != boost::asio::error::eof) {
    throw boost::system::system_error(ec);
  }
  return 0;
}