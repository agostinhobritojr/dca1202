#include <stdio.h>
#include <stdlib.h>

int main(){
  // x eh um ponteiro para ponteiro
  // para inteiro
  int **x;
  int nl, nc, i, j;
  nl = 3; nc = 4;
  // array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  for(i=0; i<nl; i++){
    // aloca as linhas
    x[i]= (int*) malloc(nc*sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);


  return 0;
}
