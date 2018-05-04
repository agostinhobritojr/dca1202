#include "vetor.h"

Vetor::Vetor(float _x, float _y)
{
  x = _x;
  y = _y;
}

ostream& operator<<(ostream &os, Vetor &v)
{
  os << "(" << v.x << "," << v.y << ")";
  return os;
}

istream& operator>>(istream &is, Vetor &v)
{
  is >> v.x >> v.y;
  return is;
}

