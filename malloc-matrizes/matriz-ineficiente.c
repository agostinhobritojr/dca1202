#include <stdlib.h>
#include <stdio.h>

int main(void){
  int nl=4, nc=5, i, j;
  int **x, **y;
  x = malloc(nl * sizeof(int*));
  for(i=0; i<nl; i++){
    x[i] = malloc(nc * sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }
  y = x;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<nl; i++){
    free (x[i]);
  }
  free (x);
}