#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
  int nl=5, nc=4, i, j;
  int **x, **y;
  // aloca array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca o bloco de elementos da matriz
  x[0] = (int*) malloc (nl * nc * sizeof(int));
  // fixar os ponteiros para as linhas
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  // aloca array auxiliar
  y = (int**) malloc(nl*sizeof(int*));
  // aloca o bloco de elementos da matriz
  y[0] = (int*) malloc (nl * nc * sizeof(int));
  // fixar os ponteiros para as linhas
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }

  // inicia a SEMENTE do gerador de números aleatórios
 // srand(time(NULL));
  // usar
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand() % 100;
    }
  }
  // experimentos
  x[3][2] = -1;
  x[0][14] = -1;
  x[1][10] = -1;
  x[4][-2] = -3;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }

  memcpy(y[0], x[0], nl*nc*sizeof(int));

  // imprimir
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }
  // libera a matriz
  // libera o bloco de elementos
  free(x[0]);
  // libera o array auxiliar
  free(x);
}