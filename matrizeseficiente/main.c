#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl=3, nc=4;
  int i, j;

  // alocam a matriz e seu vetor auxiliar
  x = (int**) malloc(nl*sizeof (int*));
  x[0] = (int*) malloc(nl*nc*sizeof (int));

  // ajusta os enderecos no array auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  x[0][0]=3; x[0][1]=4;
  x[0][2]=1; x[0][3]=2;

  x[1][0]=5;  x[1][1]=6;
  x[1][2]=-1; x[1][3]=9;

  x[2][0]=7; x[2][1]=8;
  x[2][2]=3; x[2][3]=3;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  x[2][-2] = 8;
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }

  free(x[0]);
  free(x);

  return 0;
}
