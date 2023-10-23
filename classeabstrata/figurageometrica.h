#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};
    // funcao virtual pura
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
