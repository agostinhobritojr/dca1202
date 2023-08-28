#include <stdlib.h>
#include <stdio.h>

int main(void){
  int nl=4, nc=5, i, j;
  int **x, **y; // y = x (transposta)
  x = (int**) malloc(nl * sizeof(int*));
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc * sizeof(int));
  }

  y = (int**) malloc(nl * sizeof(int*));
  for(i=0; i<nl; i++){
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

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }
  // libera blocos com as linhas
  for(i=0; i<nl; i++){
    free (x[i]);
  }
  // libera bloco de ponteiros auxiliares
  free (x);

  for(i=0; i<nl; i++){
    free (y[i]);
  }
  free (y);
}