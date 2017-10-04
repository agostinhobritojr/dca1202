#include <iostream>
#include "figurageometrica.h"
#include "circulo.h"
#include "retangulo.h"
#include "reta.h"
#include <vector>

using namespace std;


int main(){
  vector <FiguraGeometrica*> figuras;
  vector <FiguraGeometrica*>::iterator it;
//  Circulo *c;
//  c = new Circulo;
//  figuras.push_back(c);
  figuras.push_back(new Circulo);
  figuras.push_back(new Circulo);
  figuras.push_back(new Reta);
  figuras.push_back(new Retangulo);
  figuras.push_back(new Reta);

  for(int i=0; i<figuras.size(); i++){
    figuras[i]->draw();
  }
  cout << "--- usando iteradores--- \n";
  for(it=figuras.begin(); it!=figuras.end(); it++){
    (*it)->draw();
  }


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

