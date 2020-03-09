#include <stdio.h>
#include <stdlib.h>

int main()
{
  // nl: nlinhas
  // nc: ncolunas
  int nl, nc, i, j;
  nl = 6; nc = 5;
  int **x;

  // passo 1 - alocar array auxiliar
  x = (int**) malloc(nl*sizeof(int*));

  // passo 2 - alocar as linhas da matriz
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof (int));
  }

  // passo 3 - usar a matriz
  x[3][3] = 6;

  // passo 4 - liberar a memoria
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);

  return 0;
}
