#include <iostream>
#include "figurageometrica.h"
#include "reta.h"

using namespace std;

int main(){
  Reta r;
  FiguraGeometrica *fig;
  r.draw();
  fig= &r;

  fig = new Reta();
  fig->draw();
  delete fig;

  return 0;
}
