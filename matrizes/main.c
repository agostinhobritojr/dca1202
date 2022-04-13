#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl, nc, i, j;
  printf("digite nl: ");
  scanf("%d", &nl);
  printf("digite nc: ");
  scanf("%d", &nc);

  // aloca vetor auxiliar
  x = malloc(nl * sizeof(int*));
  // aloca memoria das linhas
  for(i=0; i<nl; i++){
    x[i] = malloc(nc * sizeof(int));
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%100;
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

  // libera a memoria alocada para
  // as linhas
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  // libera o vetor auxiliar
  free(x);
  return 0;
}



