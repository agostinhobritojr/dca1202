#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl=3, nc=4, i, j;
  x = (int**) malloc(nl*sizeof(int*));
  x[0] = (int*) malloc(nl*nc*sizeof(int));
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10;
    }
  }
  // libera a memoria alocada
  free(x[0]);
  free(x);
  return 0;
}
