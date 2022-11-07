#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>


int main(){
  std::vector<FiguraGeometrica*> figs;
  std::vector<FiguraGeometrica*>::iterator itf;

  Reta r(0,0,3,3,1,1,1);


  figs.push_back(new Reta(0,0,3,3,1,1,1));
  figs.push_back(new Retangulo);
  figs.push_back(new Circulo);
  figs.push_back(new Reta(1,2,3,4,1,0,1));
  figs.push_back(new Circulo);

  for(auto it: figs){
    it->draw();
  }

  for(itf = figs.begin(); itf!=figs.end(); itf++){
    delete *itf;
  }
/*
 *Reta r;
  Circulo c;
  Retangulo ret;
  FiguraGeometrica *f;

  f = new Reta;
  f->draw();
  delete f;

  f = &r;
  f->draw();
  f = &c;
  f->draw();
  f = &ret;
  f->draw();
*/
  return 0;
}
