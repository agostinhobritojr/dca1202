#include <iostream>
#include "vetor2d.h"

//using std::cout;

int main(){
    Vetor2d v1(1,2), v2(3,4), v3;
    
    v3 = v2 + v1;
   // v3 = v1.operator+(v2);
    v3.print(); std::cout << std::endl;
    v3 = 4*v3;
    std::cout << v3 << std::endl;
    return 0;
}












