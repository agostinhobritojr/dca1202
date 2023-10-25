#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include <vector>
#include <fstream>
#include <string>

int main(){
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figs;
    std::ifstream fin;

    fin.open("/home/ambj/workspace/dca1202/classeabstrata/figura.txt");
    if(!fin.is_open()){
        return 0;
    }
    while(fin.good()){
        std::string s;
        // le o primeiro elemento da linha
        fin >> s;
        if(s.compare("reta") == 0){
            float x0, y0, x1, y1;
            fin >> x0 >> y0 >> x1 >> y1;
            figs.push_back(new Reta(x0, y0, x1, y1));
        }
        else if(s.compare("retangulo") == 0){
            float x0, y0, l, h;
            fin >> x0 >> y0 >> l >> h;
            figs.push_back(new Retangulo(x0, y0, l, h));
        }
        else if(s.compare("circulo") == 0){
            float x0, y0, raio;
            fin >> x0 >> y0 >> raio;
            figs.push_back(new Circulo(x0, y0, raio));
        }
//       std::cout << s << std::endl;
    }



    // FABRICA ABSTRATA
 /*   figs.push_back(new Reta(10,10,15,20));
    figs.push_back(new Retangulo(10,10,15,20));
    figs.push_back(new Circulo(10,10,20));*/

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }

    std::cout << "passou\n";
/*    Reta r;
    Retangulo ret;
    // pfig aponta para r
    pfig = &r;
    pfig->draw();

    pfig = &ret;
    pfig->draw();

    fig.draw();
    r.draw();
    r.FiguraGeometrica::draw();
*/
    return 0;
}
