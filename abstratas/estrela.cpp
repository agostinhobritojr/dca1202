#include "estrela.h"
#include <iostream>

Estrela::Estrela(int x, int y, int raio, int npontas){
    this->x = x; this->y = y;
    this->raio = raio; this->npontas = npontas;
}

Estrela::~Estrela()
{
    std::cout << "destrutor estrela\n";
}

void Estrela::draw(std::ostream &os){
    os << "Estrela: (" << x << "," << y << ")";
    os << "(" << raio << ") ->";
    for(int i=0; i<npontas; i++){
        os << "*";
    }
    os << std::endl;
}
