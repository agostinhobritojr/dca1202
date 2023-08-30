#include <stdio.h>
#include <stdlib.h> // malloc()
#include <string.h> // memcpy()

int main(void){
  int **x, **y;
  int i, j, nl=2, nc=3;

  // Aloca array auxiliar
  x = (int**) malloc(nl * sizeof(int*));
  // aloca a matriz e guarda endereco em x[0]
  x[0] = (int*) malloc(nl*nc*sizeof(int));
  // fixa os ponteiros das linhas na matriz auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  // copia x -> y

  y = (int**) malloc(nl * sizeof(int*));
  // aloca a matriz e guarda endereco em x[0]
  y[0] = (int*) malloc(nl*nc*sizeof(int));
  // fixa os ponteiros das linhas na matriz auxiliar
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }
  x[0][0] = 1 ;  x[0][1] = 2;  x[0][2] = 4;
  x[1][0] = -1;  x[1][1] = 0;  x[1][2] = 3;

  printf("valor = %d\n", x[1][-1]);
  
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d,", x[i][j]);
    }
    printf("\n");
  }

  
  
  memcpy(y[0], x[0], nl*nc*sizeof(int));

  // libera a matriz de dados
  free(x[0]);
  // libera a matrix auxiliar
  free(x);
  x = NULL;

  // libera a matriz de dados
  free(y[0]);
  // libera a matrix auxiliar
  free(y);
  y = NULL;
  free(y);
}