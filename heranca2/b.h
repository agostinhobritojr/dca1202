#ifndef B_H
#define B_H
#include "a.h"

class B : public A{
  int bx, by;
public:
  B();
  B(int _x, int _y);
  ~B();
  void print();
};

#endif // B_H
