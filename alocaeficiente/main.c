#include <stdio.h>

int main()
{
  int **x;
  int nl, nc;
  int i, j;

  nl = 3;
  nc = 4;

  x = (int**) malloc(nl*sizeof(int*));
  x[0] = (int*) malloc(nc*nl*sizeof(int));
  //x[1] = x[0] + nc;
  //x[2] = x[1] + nc;
  // ajuste dos enderecos no array aux
  for(i=1; i<nl; i++){
    x[i] = x[i-1]+nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i*(nl+1) + j+1;
    }
  }
  printf("tahdah = %d\n", x[1][4]);

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

  return 0;
}
