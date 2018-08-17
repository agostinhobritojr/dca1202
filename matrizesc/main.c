#include <stdio.h>
#include <stdlib.h>

int main(){
  int **y, **z;
  int nl, nc, i, j;
  nl = 3;
  nc = 4;
  y = (int**)malloc(nl*sizeof(int*));
  for(i=0; i<nl; i++){
    y[i]=(int*)malloc(nc*sizeof(int));
  }

  z = (int**)malloc(nc*sizeof(int*));
  for(i=0; i<nc; i++){
    z[i]=(int*)malloc(nl*sizeof(int));
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = rand()%10;
    }
  }
  // calcula a transposta
  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      z[i][j] = y[j][i];
    }
  }
//  memcpy(destino, origem, tamanho);
  for(i=0; i<nc; i++){
    free(z[i]);
  }

  for(i=0; i<nl; i++){
    free(y[i]);
  }
  free(y);
  free(z);

  return 0;
}
