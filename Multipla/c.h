#ifndef C_H
#define C_H
#include "a.h"
#include "b.h"

class C : public A, public B{
public:
  C();
  void printC();
};

#endif // C_H
