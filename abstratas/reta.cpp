#include "reta.h"
#include <iostream>

Reta::Reta(int x, int y, int xend, int yend){
    this->x = x; this->y = y;
    this->xend = xend; this->yend = yend;
}

void Reta::draw(std::ostream &os){
    os << "Reta: (" << x << ", " << y << ") -> ";
    os << "(" << xend << "," << yend << ")\n";
}
