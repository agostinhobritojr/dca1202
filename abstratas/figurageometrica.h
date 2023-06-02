#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <fstream>
#include <iostream>

// classe abstrata eh uma classe
// que possui PELO MENOS uma
// funcao virtual pura
class FiguraGeometrica{
protected:
    int x, y;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    // funcao virtual pura
    // FORCA que cada subclasse
    // implemente o metodo draw
    virtual void draw(std::ostream &os)=0;
};

#endif // FIGURAGEOMETRICA_H
