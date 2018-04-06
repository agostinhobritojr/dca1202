#include "teste.h"
#include <iostream>

using namespace std;

Teste::Teste(){
  x = 0;
  cout << "construtor padrao\n";
}

Teste::Teste(int a){
  x = a;
  cout << "construtor com argumentos\n";
}

Teste::~Teste(){
  cout << "destrutor\n";
}

void Teste::alo(){
  cout << "alo teste" << endl;
}
