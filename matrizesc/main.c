#include <stdio.h>
#include <stdlib.h>

int main(void){
  int nlinhas, ncolunas;
  int **x;
  int **y;

  int i, j;
  nlinhas = 4;
  ncolunas = 3;
  // aloca o array auxiliar
  x = (int**) malloc(nlinhas * sizeof(int*));

  // aloca as linhas da matriz e guarda os
  // enderecos de cada uma no array auxiliar
  for(i=0; i<nlinhas; i++){
    x[i] = (int*) malloc(ncolunas*sizeof(int));
  }

  y = (int**) malloc(ncolunas * sizeof(int*));

  for(i=0; i<ncolunas; i++){
    y[i] = (int*) malloc(nlinhas*sizeof(int));
  }


  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<ncolunas; i++){
    for(j=0; j<nlinhas; j++){
      y[i][j] = x[j][i];
    }
  }

  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      printf("%3d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0; i<ncolunas; i++){
    for(j=0; j<nlinhas; j++){
      printf("%3d ", y[i][j]);
    }
    printf("\n");
  }

  // primeiramente, libera-se as linhas alocadas
  for(i=0; i<nlinhas; i++){
    free(x[i]);
  }
  // em seguida, libera-se o array auxiliar
  free(x);

  for(i=0; i<ncolunas; i++){
    free(y[i]);
  }
  // em seguida, libera-se o array auxiliar
  free(y);

  return 0;
}

