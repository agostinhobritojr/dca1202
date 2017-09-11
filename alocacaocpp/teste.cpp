#include "teste.h"
#include <iostream>

using namespace std;
Teste::Teste(){
  cout << "construtor teste\n";
}

Teste::Teste(int x){
  cout << "construtor x = " << x << endl;
}

Teste::~Teste(){
  cout << "destrutor teste\n";
}

void Teste::alo(){
  cout << "alo, mundo\n";
}
