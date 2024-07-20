#include "cubo.h"
#include <iostream>

Cubo::Cubo(float cx, float cy, float lado) {
    this->cx = cx;
    this->cy = cy;
    this->lado = lado;
}

void Cubo::draw(){
    // (3,4): 5
    std::cout << "draw Cubo     : (" << cx << "," << cy << "): ";
    std::cout << lado << "\n";
}
