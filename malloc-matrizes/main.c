#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int **x, **y;
  int nl=3, nc=4, i, j;
  x=(int**) malloc(nl*sizeof(int*));
  y=(int**) malloc(nc*sizeof(int*));
  for(i=0; i<nl; i++){
    x[i]=(int*) malloc(nc*sizeof(int));
  }
  for(i=0; i<nc; i++){
    y[i]=(int*) malloc(nl*sizeof(int));
  }
  srand(time(0));

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%10;
    }
  }
  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      y[i][j] = x[j][i];
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0; i<nc; i++){
    for(j=0; j<nl; j++){
      printf("%2d ", *(*(y+i)+j));
    }
    printf("\n");
  }
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  for(i=0; i<nc; i++){
    free(y[i]);
  }
  free(x);
  free(y);
  return 0;
}





