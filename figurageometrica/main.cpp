#include <iostream>
#include "figurageometrica.h"
#include "quadrado.h"
#include "circulo.h"
#include "triangulo.h"
#include "batata.h"

int main(){
    FiguraGeometrica *pfig;
    FiguraGeometrica *figs[100];
    Circulo circ, *pcirc;
    Quadrado quad;
    Triangulo tri;

    // POLIMORFISMO
//    pfig = &circ;
  //  pfig->draw();

    figs[0] = new Circulo(3,4,10);
    figs[1] = new Quadrado();
    figs[2] = new Triangulo;
    figs[3] = new Batata;
    figs[4] = new Quadrado();
    figs[5] = new Circulo();

    for(int i=0; i<6; i++){
        figs[i]->draw();
    }

    for(int i=0; i<6; i++){
        delete figs[i];
    }

    std::cout << "passou\n";
 //   pcirc = &fig; ILEGAL
 //   pcirc->draw();

    return 0;
}





