#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* realoca(int* x, int nold, int nnew){
  int *y;
  if(nold == nnew){
    return x;
  }
  y = (int*) calloc(nnew, sizeof (int));
  if(nold < nnew){
    memcpy(y, x, nold*sizeof (int));
  }
  else {
    memcpy(y, x, nnew*sizeof (int));
  }
  free(x);
  return y;
}

int main(){
  int *x;
  int n=40;
  x = (int*) malloc(n*sizeof (int));
  x = realoca(x, 40, 60);
  x = realoca(x, 60, 30);
  return 0;
}
