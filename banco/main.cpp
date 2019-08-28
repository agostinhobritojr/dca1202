#include <iostream>
using namespace std;
class Banco {
public:
  int valor;
  Banco( int quantidade ) {
    valor = quantidade;
    cout << "Valor " << valor << endl;
  }
  ~Banco() {
    cout << " Voce matou: " << valor << endl;
  }
};
class Cliente {
public :
  Banco dado;
  // Cliente(int A) {
  //   dado = A;
  Cliente(int A) : dado(A) {
    cout << "Novo Objeto\n";
  }
  Cliente( const Cliente& X ) :
    dado(X.dado.valor + 10) {
    cout << "Especialidade da casa\n";
  }
};
void Desafio(Cliente porque){
  Cliente Jaco(porque);
  cout << "Depois de Jaco\n";
}
int main(){
  Cliente Resposta(1);
  cout << "Chama Desafio\n";
  Desafio(Resposta);
  cout << "terminou..." << endl;
}
