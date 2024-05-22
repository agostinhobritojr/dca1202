#include "circulo.h"
#include <iostream>

Circulo::Circulo(float _x, float _y, float _raio) {
    x = _x; y = _y; raio=_raio;
}

void Circulo::draw(){
    std::cout << "draw Circulo (";
    std::cout << x << "," << y << "):" << raio << "\n";
}
