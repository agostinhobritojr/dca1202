#include <iostream>
#include "figurageometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main(){
  FiguraGeometrica *f[4], *tmp;
  FiguraGeometrica fig;
  Reta r;
  f[0] = new Reta();
  f[1] = new Circulo;
  f[2] = new Retangulo;
  f[3] = new Reta;
  for (int i=0; i<4; i++) {
    f[i]->draw();
  }
  // trocando o circulo com o retangulo
  tmp = f[1];
  f[1] = f[2];
  f[2] = tmp;

  cout << "\n";
  for (int i=0; i<4; i++) {
    f[i]->draw();
  }

  return 0;
}



