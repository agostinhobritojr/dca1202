#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};
    // funcao virtual pura (cria uma classe ABSTRATA)
    virtual void draw(void)=0;
};

#endif // FIGURAGEOMETRICA_H
