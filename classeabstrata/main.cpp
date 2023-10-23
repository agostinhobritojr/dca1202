#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include <vector>


int main(){
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figs;

    // FABRICA ABSTRATA
    figs.push_back(new Reta);
    figs.push_back(new Retangulo);

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
