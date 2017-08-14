#include <stdio.h>

int main(void){
  int **x, i;
  int nlin, ncol; // numero de linhas e colunas

  nlin = 3;
  ncol = 4;

  // aloca-se array auxiliar
  x = (int**) malloc(nlin * sizeof(int*));

  for(i=0; i<nlin; i++){
    // aloca-se os arrays de cada linha
    x[i] = (int*) malloc(ncol * sizeof(int));
  }
  x[2][2] = -3;

  for(i=0; i<nlin; i++){
    free(x[i]);
  }
  free(x);
  return 0;
}

