#include <stdlib.h>
#include <stdio.h>

int main(void){
  int nl=4, nc=5, i, j;
  int **x, **y;
  // aloca array auxiliar
  x = (int**) malloc(nl * sizeof(int*));
  for(i=0; i<nl; i++){
    // aloca as linhas da matriz
    x[i] = (int*)  malloc(nc * sizeof(int));
  }
  // aloca array auxiliar
  y = (int**) malloc(nl * sizeof(int*));
  for(i=0; i<nl; i++){
    // aloca as linhas da matriz
    y[i] = (int*) malloc(nc * sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }
  // NAO EH UMA COHPIA
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }

  x[1][2]=3;
  for(i=0; i<nl; i++){
    // libera linhas da matriz
    free (x[i]);
  }
  // libera array auxiliar
  free (x);
  for(i=0; i<nl; i++){
    // libera linhas da matriz
    free (y[i]);
  }
  // libera array auxiliar
  free (y);
}