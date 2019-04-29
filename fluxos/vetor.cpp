#include "vetor.h"

Vetor::Vetor(float _x, float _y)
{
   x=_x; y=_y;
}

std::ostream
&operator<<(std::ostream &os, Vetor &v)
{
   os << "(" << v.x << "," <<
         v.y << ")";
   return os;
}

std::istream
&operator>>(std::istream &is, Vetor &v){
  is >> v.x >> v.y;
  return is;
}
