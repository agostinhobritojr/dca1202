#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream saida;
  ifstream entrada;
  float x;

  entrada.open("/home/ambj/entrada.txt");
  if(entrada.is_open()){
    entrada >> x;
    cout << "x = " << x << endl;
    entrada.close();
  }

  saida.open("/home/ambj/saida.txt");
  if(saida.is_open()){
    saida << "Agostinho Brito\n";
    saida << x << endl;
    saida.close();
  }
  return 0;
}

