#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float cx, float cy, float largura, float altura) {
    this->cx = cx;
    this->cy = cy;
    this->largura = largura;
    this->altura = altura;
}

void Retangulo::draw(){
    std::cout << "draw Retangulo: (" << cx << "," << cy << "): ";
    std::cout << largura << " x " << altura << "\n";
}
