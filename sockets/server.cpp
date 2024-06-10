#include <iostream>
#include <boost/asio.hpp>
#include <thread>

void handleClient(boost::asio::ip::tcp::socket&& socket) {
  try {
    // buffer para receber a mensagem do cliente
    boost::asio::streambuf buffer;
    std::cout << "Cliente conectado: " << std::this_thread::get_id() << std::endl;
    std::cout << "Endereco remoto: " << socket.remote_endpoint().address() << std::endl;
    while(true){
      // le do socket ateh encontrar o enter
      size_t bytes_read = boost::asio::read_until(socket, buffer, "\n");
      // se nao leu nada, eh porque o cliente fechou a conexao
      if(bytes_read == 0) {
        break;
      }
      // converte o buffer para string
      std::string message(boost::asio::buffers_begin(buffer.data()), boost::asio::buffers_end(buffer.data()));
      // limpa o buffer
      buffer.consume(buffer.size());
      // imprime a mensagem recebida e o id da thread que esta tratando o cliente
      std::cout << "Mensagem recebida: " << std::this_thread::get_id() << ":" << message << std::endl;
      // envia mensagem ao cliente informando que a mensagem chegou corretamente
      std::string response = "Servidor recebeu sua mensagem.\n";
      boost::asio::write(socket, boost::asio::buffer(response));
    }
  } catch (std::exception& e) {
    std::cerr << "Erro: " << e.what() << std::endl;
  }
}

int main() {
  try {
    // cria o contexto de I/O
    boost::asio::io_context ioContext;

    // cria o acceptor de conexoes
    // para ip v4, porta 1234
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::tcp::v4(), 1234);

    // apenas para localhost
    // boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 1234);

    boost::asio::ip::tcp::acceptor acceptor(ioContext, endpoint);

    while (true) {
      // espera por uma conexao
      boost::asio::ip::tcp::socket socket(ioContext);

      // aceita a conexao
      acceptor.accept(socket);
      
      // transfere a conexao para uma thread para tratar o cliente
      // note que a conexao eh movida para a thread com std::move, que invoca o
      // construtor de movimentacao
      std::thread clientThread(handleClient, std::move(socket));

      // detach() eh necessario para que a thread nao seja destruida ao sair do 
      // escopo, visto que clientThread eh uma variavel local
      clientThread.detach();
    }
  } catch (std::exception& e) {
    std::cerr << "Erro: " << e.what() << std::endl;
  }  
  return 0;
}
