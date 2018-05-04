#include <iostream>
#include "figurageometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "ponto.h"

#include <vector>

using namespace std;

int main(){
//  FiguraGeometrica f;
  FiguraGeometrica *pf;
  Circulo c, *pc;
  Reta rt;
  Retangulo ro;
  vector<FiguraGeometrica*> figuras;

  figuras.push_back(new Reta);
  figuras.push_back(new Retangulo);
  figuras.push_back(new Circulo);
  figuras.push_back(new Ponto);

  for(int i=0; i<figuras.size(); i++){
    figuras[i]->draw();
  }

  for(int i=0; i<figuras.size(); i++){
    delete figuras[i];
  }








  // ponteiros de uma classe herdeira
  // nao podem apontar para objetos de uma
  // classe derivada
  // pc = &f;
  /*
  f.draw();
  c.draw();
  pf = &c;
  pf->draw();
  pf = &rt;
  pf->draw();
  pf = &ro;
  pf->draw();
  */
  return 0;
}
