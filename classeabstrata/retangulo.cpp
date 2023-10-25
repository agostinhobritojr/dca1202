#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float x0_, float y0_, float l_, float h_){
    x0 = x0_; y0 = y0_;
    l = l_; h = h_;
}

void Retangulo::draw(){
    std::cout << "draw Retangulo:";
    std::cout << "(" << x0 << "," << y0 << ")->";
    std::cout << l << "x" << h << "\n";

}
