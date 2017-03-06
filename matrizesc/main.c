#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int nlinhas, ncolunas;
  int **x;
  int i, j;
  nlinhas = 4;
  ncolunas = 3;

  x = (int**) malloc(nlinhas * sizeof(int*));

  for(i=0; i<nlinhas; i++){
    x[i] = malloc(ncolunas*sizeof(int));
  }
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      x[i][j] = i+j;
    }
  }
  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      printf("%3d ", x[i][j]);
    }
    printf("\n");
  }

  // primeiramente, libera-se as linhas alocadas
  for(i=0; i<nlinhas; i++){
    free(x[i]);
  }
  // em seguida, libera-se o array auxiliar
  free(x);

  return 0;
}

