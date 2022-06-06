#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>

// classe abstrata pois contem
// PELO MENOS uma funcao virtual pura
class FiguraGeometrica{
  float are;
  float xcenter, ycenter;
  float r,g,b,a;
public:  
  FiguraGeometrica();
  // funcao virtual pura
  virtual void draw()=0;

  void area(){
    std::cout << "area figurageometrica\n";
  }
  void posicao(){
    std::cout << "posicao figurageometrica\n";
  }
};

#endif // FIGURAGEOMETRICA_H
