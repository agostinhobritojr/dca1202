#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

int main(){
  std::vector<FiguraGeometrica*> figs;
  std::vector<FiguraGeometrica*>::iterator itf;

  std::ifstream fin;

  fin.open("/home/ambj/workspace/dca1202/"
           "figurageometrica/figura.txt");

  if(!fin.is_open()){
    std::cout << "nao abriu arquivo figura\n";
    exit(EXIT_FAILURE);
  }

  std::string s;
  float r, g, b;
  while(fin.good()){
    // processa a linha
    fin >> s;
    if(!fin.good())
      break;
    std::cout << "leu " << s << std::endl;
    if(s.compare("reta")==0){
      int x0, y0, x1, y1;
      fin >> x0 >> y0 >> x1 >> y1;
      fin >> r >> g >> b;
      figs.push_back(new Reta(x0,y0,x1,y1,r,g,b));
    }
    if(s.compare("retangulo")==0){
      int x0, y0, x1, y1;
      fin >> x0 >> y0 >> x1 >> y1;
      fin >> r >> g >> b;
      figs.push_back(new Retangulo(x0,y0,x1,y1,r,g,b));
    }
    if(s.compare("circulo")==0){
      int x0, y0, raio;
      fin >> x0 >> y0 >> raio;
      fin >> r >> g >> b;
      figs.push_back(new Circulo(x0,y0,raio,r,g,b));
    }
  }


/*  figs.push_back(new Reta(0,0,3,3,1,1,1));
  figs.push_back(new Retangulo);
  figs.push_back(new Circulo);
  figs.push_back(new Reta(1,2,3,4,1,0,1));
  figs.push_back(new Circulo);
*/

  for(auto it: figs){
    it->draw();
  }

  for(itf = figs.begin(); itf!=figs.end(); itf++){
    delete *itf;
  }
/*
 *Reta r1;
  Reta r(0,0,3,3,1,1,1);
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
