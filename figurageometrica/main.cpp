#include <iostream>
#include "figurageometrica.h"
#include "reta.h"

int main(){
  FiguraGeometrica f, *pf;
  Reta r;
  f.draw();
  r.draw();
  pf = &r;
  pf->draw();
  return 0;
}
