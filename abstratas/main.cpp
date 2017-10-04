#include <iostream>
#include "figurageometrica.h"
#include "circulo.h"
#include "retangulo.h"
#include "reta.h"
#include <vector>

using namespace std;


int main(){
  vector <FiguraGeometrica*> figuras;

  FiguraGeometrica *pfig;
  Circulo circ, *pcirc;
  Retangulo ret;
  Reta r;
 // fig.draw();
  circ.draw();
  pfig = &circ;
  cout << "executando draw para pfig\n";
  pfig->draw();
  pfig = &ret;
  pfig->draw();
  // ponteiros da classe derivada
  // nao podem apontar para objetos
  // da classe base
  // pcirc = &fig;
  return 0;
}

