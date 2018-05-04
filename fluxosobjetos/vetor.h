#ifndef VETOR_H
#define VETOR_H

#include <ostream>
#include <istream>

using namespace std;

class Vetor
{
  float x, y;
public:
  Vetor(float _x, float _y);
  friend ostream& operator<<(ostream &os, Vetor&v);
  friend istream& operator>>(istream &is, Vetor&v);
};

#endif // VETOR_H
