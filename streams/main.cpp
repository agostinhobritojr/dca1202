#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  // ostream representa fluxos de saida
  // para arquivos
  ofstream saida;
  string s;

  // ifstream representa fluxos de entrada
  // oriunda de arquivos
  ifstream entrada;
  char c;
  int x;

  entrada.open("/home/ambj/entrada.txt");
  if(entrada.is_open()){
    cout << "abriu arquivo de entrada\n";
  }
  else{
    cout << "nao abriu arquivo\n";
  }

  saida.open("/tmp/saida.txt");
  while(entrada.good()){
    c = entrada.get();
    if(entrada.good()){
      saida.put(c);
    }
  }
  entrada.close();
  saida.close();

  entrada.open("/home/ambj/entrada.txt");
  getline(entrada, s);
  cout << "s = " << s << endl;

/*


  //
  entrada >> x;
  if(entrada.good())
    cout << "leu o valor " << x << endl;
  entrada >> x;
  if(entrada.good())
    cout << "leu o valor " << x << endl;
  entrada >> x;
  if(entrada.good())
    cout << "leu o valor " << x << endl;


  // conecta um fluxo de saida com uma
  // variavel (objeto)
  saida.open("/etc/fstab");

  // verifica se o fluxo estah aberto
  if(saida.is_open()){
    cout << "abriu o arquivo\n";
  }
  else{
    cout << "nao abriu o arquivo\n";
  }
  saida << "Agostinho Brito\n";

  // fecha o fluxo
  saida.close();
*/
  return 0;
}

