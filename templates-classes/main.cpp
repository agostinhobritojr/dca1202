#include <iostream>
#include "alo.h"

int main(){
    Alo<int> aloInt(3);
    Alo<float> aloFloat(3.5);
    int a = aloInt.getX();
    std::cout << "a =" << a <<  "\n";
    float x = aloFloat.getX();
    std::cout << "x =" << x <<  "\n";
}
