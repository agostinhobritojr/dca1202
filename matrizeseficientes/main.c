#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int **x, **y;
  // nl: numero de linhas
  // nc: numero de colunas
  int nl, nc, i, j;
  nl=4; nc=3;
  // alocacao do array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  y = (int**) malloc(nc*sizeof(int*));

  // alocacao da matriz de elementos
  x[0] = malloc(nc*nl*sizeof(int));
  y[0] = malloc(nc*nl*sizeof(int));

  // ajuste de endereços
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(i=1; i<nc; i++){
    y[i] = y[i-1] + nl;
  }

  for(i=0; i<nl*nc; i++){
    x[0][i] = i+1;
  }

  //  usa-se a matriz....
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      y[i][j] = x[j][i];
    }
  }

  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  // int **y;

//  memcpy(y[0], x[0], nl*nc*sizeof(int));

  // liberando a memoria alocada
  free(y[0]);
  free(y);

  free(x[0]);
  free(x);


  return 0;
}



