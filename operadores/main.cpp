#include <iostream>
#include "vetor2d.h"


int main(void){
    Vetor2d v(1,1), v1(2,3), v2(5,6), v3;//, v3[10];
 //   v3 = v1 + v2;
  //  v3 = v3.operator +(v2);
 //   v3.print();
    v3 = 2*v1;
    v3.print();




//    std::cout << "agostinho\n";
//    std::cout.operator << ("agostinho\n");
//   std::cout << 38;
//   std::cout.operator << (38);
//    std::cout << "\n";
    // subtracao de vetores
    v3 = v1 - v2;
    float x;
    x = v1*v2;
    v3 = v1 * 4;
//    v3 = 4 * v1;

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
