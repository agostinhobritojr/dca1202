#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>

int main(){
  std::vector<FiguraGeometrica*> figs;

  figs.push_back(new Reta);
  figs.push_back(new Retangulo);
  figs.push_back(new Circulo);

  for(int i=0; i<figs.size(); i++){
    figs[i]->draw();
  }

  /*
  FiguraGeometrica *pf;
  Reta r;
  Retangulo ret;
  Circulo c;
  r.draw();
  pf = &r;
  pf->draw();
  pf = &ret;
  pf->draw();
  pf = &c;
  pf->draw();
  */
  return 0;
}
