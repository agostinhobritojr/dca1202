#include <iostream>
#include "figurageometrica.h"
#include "cubo.h"
#include "elipse.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    FiguraGeometrica *pfig;
  // Elipse elipse, *pe;
  //  Retangulo ret;
  //  Cubo cub;
    std::ifstream fin;
    std::vector<FiguraGeometrica*> figs;
    std::string s;

    fin.open("/home/ambj/figuras.txt");
    if(!fin.is_open()){
        exit(0);
    }

    while(fin.good()){
        fin >> s;
        if(!fin.good())
            break;
      //  std::cout << s << std::endl;

        if(s.compare("elipse")==0){
            float cx, cy, raiox, raioy;
            fin >> cx >> cy >> raiox >> raioy;
            figs.push_back(new Elipse(cx, cy, raiox, raioy));
        }
        else if(s.compare("cubo")==0){
            float cx, cy, lado;
            fin >> cx >> cy >> lado;
            figs.push_back(new Cubo(cx, cy, lado));
        }
        else if(s.compare("retangulo")==0){
            float cx, cy, largura, altura;
            fin >> cx >> cy >> largura >> altura;
            figs.push_back(new Retangulo(cx, cy, largura, altura));
        }
    }

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    std::random_shuffle(figs.begin(), figs.end());
    std::cout << std::endl;

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }

    std::cout << "passou\n";

    //    fig.draw();
//    pfig = &fig;
//    pfig->draw();

//    elipse.draw();
//    pfig = &elipse;
//    pfig->draw();

//   pe = &fig;

//   ret.draw();
//   cub.draw();

    return 0;
}
