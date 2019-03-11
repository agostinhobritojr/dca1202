#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nlin, ncol;
  int i, j;

  nlin=3; ncol=4;

  x = malloc(nlin*sizeof(int*));

  x[0]= malloc(nlin*ncol*sizeof(int));

  for(i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }

  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }

  free(x[0]);
  free(x);
  return 0;
}
