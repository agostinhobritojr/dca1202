#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl=3, nc=4, i;
  // aloca matriz auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca as linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof(int));
  }
  // usa a matriz
  x[1][2] = 1;
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);

  return 0;
}
