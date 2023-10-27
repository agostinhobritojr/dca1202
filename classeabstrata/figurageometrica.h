#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
protected:
    float r, g, b, a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){}
    // funcao virtual pura
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
