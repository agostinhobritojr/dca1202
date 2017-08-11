#include <stdio.h>

int main(void){
  int **x, i;
  int nl, nc; // numero de linhas e colunas

  nl = 3;
  nc = 4;

  // aloca-se array auxiliar
  x = (int**) malloc(nl * sizeof(int*));

  for(i=0; i<nl; i++){
    // aloca-se os arrays de cada linha
    x[i] = (int*) malloc(nc * sizeof(int));
  }
  x[2][2] = -3;

  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
  return 0;
}

