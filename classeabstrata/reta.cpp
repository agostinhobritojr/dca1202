#include "reta.h"
#include <iostream>

Reta::Reta(float x0_, float y0_, float x1_, float y1_){
    x0 = x0_; y0 = y0_;
    x1 = x1_; y1 = y1_;
}

void Reta::draw(){
    std::cout << "draw Reta:";
    std::cout << "(" << x0 << "," << y0 << ")->";
    std::cout << "(" << x1 << "," << y1 << ")\n";
}
