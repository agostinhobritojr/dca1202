#include "elipse.h"
#include <iostream>

Elipse::Elipse(float cx, float cy, float raiox, float raioy) {
    this->cx = cx;
    this->cy = cy;
    this->raiox = raiox;
    this->raioy = raioy;
}

void Elipse::draw(){
    // draw Elipse: (3,4): 4 x 5
    std::cout << "draw Elipse   : (" << cx << "," << cy << "): ";
    std::cout << raiox << " x " << raioy << "\n";
}
