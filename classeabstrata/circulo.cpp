#include "circulo.h"
#include <iostream>

Circulo::Circulo(float x0_, float y0_, float raio_){
    x0 = x0_; y0 = y0_; raio = raio_;
}

void Circulo::draw(){
    std::cout << "draw Circulo:";
    std::cout << "(" << x0 << "," << y0 << "):";
    std::cout << raio << "\n";
}
