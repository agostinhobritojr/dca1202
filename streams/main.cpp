#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream saida; // arquivo de SAIDA
  ifstream entrada; // arquivo de ENTRADA
  float x;

  entrada.open("/home/ambj/entrada.txt");
  if(entrada.is_open()){
    entrada >> x;
    cout << "x = " << x << endl;
    entrada.close();
  }

  char c;
  entrada.open("/home/ambj/entrada.txt");
  saida.open("/home/ambj/clone.txt");
  if(entrada.is_open()){
    while(entrada.get(c)){
      cout << "leu: " << c << endl;
      saida.put(c);
    }
    entrada.close();
    saida.close();
  }

  entrada.open("/home/ambj/nome.txt");
  char nome[40];
  if(entrada.is_open()){
    entrada.getline(nome,40);
    cout << nome << endl;
  }

  saida.open("/home/ambj/saida.txt");
  if(saida.is_open()){
    saida << "Agostinho Brito\n";
    saida << x << endl;
    saida.close();
  }
  return 0;
}

