#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(){

}

Retangulo::~Retangulo()
{
  cout << "destrutor retangulo\n";
}

void Retangulo::draw(){
  cout << "draw retangulo\n";
}
