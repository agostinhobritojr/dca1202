#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    float cx, cy, largura, altura;
public:
    Retangulo(float cx, float cy, float largura, float altura);
    void draw();
};

#endif // RETANGULO_H
