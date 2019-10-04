#include <iostream>
#include <vector>
#include "figurageometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main(){
  vector<FiguraGeometrica*> f;
//  FiguraGeometrica fig;

  f.push_back(new Reta);
  f.push_back(new Circulo);
  f.push_back(new Retangulo);
  f.push_back(new Reta);
  for (int i=0; i<f.size(); i++) {
    f[i]->draw();
  }

  cout << "\n";
  for (int i=0; i<4; i++) {
    delete f[i];
  }

  return 0;
}



