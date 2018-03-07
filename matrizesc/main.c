#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // x eh um ponteiro para ponteiro
  // para inteiro
  int **x;
  int **y;
  int nl, nc, i, j;
  nl = 3; nc = 4;
  srand(time(0));
  // array auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  for(i=0; i<nl; i++){
    // aloca as linhas
    x[i]= (int*) malloc(nc*sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%(20-3+1)+3;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ",x[i][j]);
    }
    printf("\n");
  }
  y = (int**) malloc(nc*sizeof(int*));
  for(i=0; i<nc; i++){
    y[i] = (int*) malloc(nl*sizeof(int));
  }
  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      y[i][j] = x[j][i];
    }
  }

  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);

  for(i=0; i<nc; i++){
    free(y[i]);
  }
  free(y);

  return 0;
}
