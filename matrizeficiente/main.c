#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
  clock_t t;
  int **x, **y;
  int nl, nc, i, j;
  nl=1000;
  nc=1000;
  // aloca o array auxiliar
  x = (int**)malloc(nl*sizeof(int*));

  // aloca toda a matriz em um unico array
  x[0] = (int*)malloc(nl*nc*sizeof(int));

  for(i=1; i<nl; i++){
    x[i] = x[i-1]+nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<nl*nc; i++){
    x[0][i] = i;
  }
/*
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ",x[i][j]);
    }
    printf("\n");
  }
*/
  // aloca o array auxiliar
  y = (int**)malloc(nl*sizeof(int*));

  // aloca toda a matriz em um unico array
  y[0] = (int*)malloc(nl*nc*sizeof(int));

  for(i=1; i<nl; i++){
    y[i] = y[i-1]+nc;
  }
  // matrizes x e y prontas para uso
  // copiar x -> y

  t = clock();
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      y[i][j] = x[i][j];
    }
  }
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",
          t,((float)t)/CLOCKS_PER_SEC);

  // metodo 2
  t = clock();
  for(i=0; i<nl*nc; i++){
    y[0][i] = x[0][i];
  }
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",
          t,((float)t)/CLOCKS_PER_SEC);


  // metodo 3
  t = clock();
  memcpy(y[0], x[0], nl*nc*sizeof(int));
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",
          t,((float)t)/CLOCKS_PER_SEC);
/*
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ",y[i][j]);
    }
    printf("\n");
  }
*/
  free(y[0]);
  free(y);

  free(x[0]);
  free(x);

  return 0;
}
