#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>

using namespace std;

int main(){
  vector<FiguraGeometrica*> figuras;
  FiguraGeometrica *pf;
  Reta r;
  Retangulo rt;
  Circulo c;

  // ponteiro pf apontando para r
  pf = new Reta();
  figuras.push_back(pf);

  pf = new Retangulo();
  figuras.push_back(pf);

  figuras.push_back(new Circulo());

  for(int i=0; i<figuras.size(); i++){
    figuras[i]->draw();
  }




  return 0;
}

