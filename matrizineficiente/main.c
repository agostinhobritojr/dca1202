#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **m;
  int i, j, nlinhas, ncolunas;
  nlinhas = 3; ncolunas = 4;

  // aloca a matriz auxiliar
  m = (int **) malloc(nlinhas * sizeof(int *));
  // aloca as linhas da matriz
  for (i = 0; i < nlinhas; i++){
    m[i] = (int *) malloc(ncolunas * sizeof(int));
  }
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      m[i][j] = i+j;
    }
  }
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  // libera a matriz auxiliar
  for (i = 0; i < nlinhas; i++){
    free(m[i]);
  }
  free(m);
}

