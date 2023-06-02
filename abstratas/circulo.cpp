#include "circulo.h"
#include <iostream>

Circulo::Circulo(int x, int y, int raio){
    this->x = x; this->y = y;
    this->raio = raio;
}

void Circulo::draw(std::ostream &os){
    os << "Circulo: (" << x << ", " << y << "): ";
    os << raio << std::endl;
}
