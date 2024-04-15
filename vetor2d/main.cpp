#include <iostream>
#include "vetor2d.h"


int main(void){
    Vetor2d v(1,3), v1(2,3), v2(5,6), v3;//, v3[10];
    v3 = v1.soma(v2);
    v3.print();
/*
    v.print();
    v1.print();
    int x;
//    v.x = 4;
    v.setX(3); v.setY(4);
    v.print();
    std::cout << "norma  = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.angulo() << std::endl;
*/
}
