#include <stdio.h>
#include <stdlib.h>

int main(){
  char **x;
  int nl=3, nc=4, i, j;
  // aloca vetor auxiliar
  x = (char**) malloc(nl * sizeof(char*));
  // aloca matriz e guarda seu endereco em x[0]
  x[0] = (char*) malloc (nl * nc * sizeof(char));

  // ajustes dos enderecos no vetor auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = 0;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");

//  x[1][0] = -1;
//  x[0][4] = -1;
//  x[2][-4] = -1;
//  x[-1][] = -1;

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

  free(x[0]);
  free(x);

  return 0;
}
