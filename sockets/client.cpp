#include <iostream>
#include <boost/asio.hpp>
#include <string>

std::string read_(boost::asio::ip::tcp::socket & socket) {
  boost::asio::streambuf buf;
  boost::asio::read_until(socket, buf, "\n" );
  std::string data = boost::asio::buffer_cast<const char*>(buf.data());
  return data;
}

void send_(boost::asio::ip::tcp::socket & socket, const std::string& message) {
  const std::string msg = message + "\n";
  boost::asio::write( socket, boost::asio::buffer(message) );
}

int main() { 
  boost::asio::io_service io_service;
  //socket creation
  boost::asio::ip::tcp::socket socket(io_service);
  //connection
  socket.connect( boost::asio::ip::tcp::endpoint(    boost::asio::ip::address::from_string("127.0.0.1"), 1234 ));
  // request/message from client
  try{
    while(1){
      std::string msg;
      std::cin >> msg;
      msg = msg + "\n";
      boost::system::error_code error;
      boost::asio::write( socket, boost::asio::buffer(msg), error );
      if( !error ) {
        std::cout << "Client sent hello message!" << std::endl;
      }
      else {
        std::cout << "send failed: " << error.message() << std::endl;
      }
      // getting response from server
      //     boost::asio::streambuf receive_buffer;
      //boost::asio::read(socket, receive_buffer, boost::asio::transfer_all(), error);
      std::string message = read_(socket);
      std::cout << message << std::endl;
    }
  }
  catch (std::exception &e){
    std::cerr << "Erro: " << e.what() << std::endl;
  }
  return 0;
}
