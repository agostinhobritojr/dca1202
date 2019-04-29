#ifndef VETOR_H
#define VETOR_H
#include <iostream>

// NEVER!
// using namespace std;

class Vetor{
  float x, y;
public:
  Vetor(float _x=0, float _y=0);
  friend std::ostream
  &operator<<(std::ostream &os, Vetor &v);

  friend std::istream
  &operator>>(std::istream &is, Vetor &v);
};


#endif // VETOR_H
