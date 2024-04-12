#include <iostream>
#include "vetor2d.h"


int main(void){
    Vetor2d v;
//    v.x = 4;
    int x;
    v.setX(3); v.setY(4);
    v.print();
    std::cout << "norma  = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.angulo() << std::endl;
}
