#include <iostream>
#include <ostream>
#include "vetor2d.h"

int main(){
    Vetor2d v1(3,4), v2(2,-1), v3;
    v3 = v1.soma(v2);
    v3.print(); std::cout << "\n";
//    v3 = v1.operator+(v2);
//    v3 = v1+v2;
    v3 = v1*4;
    v3.print(); std::cout << "\n";
    v3 = 4*v1;
    v3.print(); std::cout << "\n";

    std::cout << "v3 = " << v3 << "\n";

    return 0;
}



