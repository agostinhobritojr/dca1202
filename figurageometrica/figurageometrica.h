#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>

class FiguraGeometrica{
  float are;
  float xcenter, ycenter;
  float r,g,b,a;
public:  
  FiguraGeometrica();
  virtual void draw(){
    std::cout << "draw figurageometrica\n";
  }
  void area(){
    std::cout << "area figurageometrica\n";
  }
  void posicao(){
    std::cout << "posicao figurageometrica\n";
  }
};

#endif // FIGURAGEOMETRICA_H
