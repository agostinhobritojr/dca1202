#include "matriz.h"

Matriz::Matriz(int _nl, int _nc){
  nl = _nl;
  nc = _nc;

  x = new float*[nl];
  x[0] = new float[nl*nc];
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
}
