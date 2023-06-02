#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "estrela.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    FiguraGeometrica *pf;
    std::vector<FiguraGeometrica*> figs;

    std::ifstream fin;
    std::ofstream fout;
    std::string s;

    fin.open("/home/ambj/figura.txt");
    fout.open("/home/ambj/desenhosaida.txt");

    while(fin.good()){
        fin >> s;
        if(fin.good()){
            if(s.compare("circulo")==0){
                std::cout << "circulo\n";
                int x, y, raio;
                fin >> x >> y >> raio;
                figs.push_back(new Circulo(x,y,raio));
            }
            if(s.compare("reta")==0){
                std::cout << "reta\n";
                int x, y, xend, yend;
                fin >> x >> y >> xend >> yend;
                figs.push_back(new Reta(x,y,xend,yend));
            }
            if(s.compare("estrela")==0){
                std::cout << "estrela\n";
                int x, y, raio, npontas;
                fin >> x >> y >> raio >> npontas;
                figs.push_back(new Estrela(x,y,raio,npontas));
            }
        }
    }

    for(auto fig:figs){
        fig->draw(fout);
    }
    fout.close();
    std::cout << "\n";

    for(auto fig:figs){
        delete fig;
    }


    std::cout << "fim\n";
//    Circulo c; Reta r;    Estrela e;
//    pf = &c;    // POLIMORFISMO (MUITAS FORMAS)
//    pf->draw();
    return 0;
}
