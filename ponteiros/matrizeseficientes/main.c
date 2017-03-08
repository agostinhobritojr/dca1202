#include <stdio.h>
#include <stdlib.h>

int main(void){
  int nlinhas, ncolunas;
  int **x;
  int **y;

  int i, j;
  nlinhas = 3;
  ncolunas = 4;
  // aloca o array auxiliar
  x = (int**) malloc(nlinhas * sizeof(int*));

  // aloca um unico array para armazenar toda a
  // matriz
  x[0] = (int*) malloc(nlinhas*ncolunas*sizeof(int));

  // alinhamento dos enderecos no array auxiliar
  // coloca em cada elemento desse array o
  // ponteiro para o inicio da linha correspondente
  for(i = 1; i<nlinhas; i++){
    x[i] = x[i-1] + ncolunas;
  }

  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      x[i][j] = i+j;
    }
  }

  for(i=0; i<nlinhas*ncolunas; i++){
    x[0][i] = 7;
  }

  for(i=0; i<nlinhas; i++){
    for(j=0; j<ncolunas; j++){
      printf("%3d ", x[i][j]);
    }
    printf("\n");
  }

  printf("x[0][8] = %d\n", x[0][8]);
  printf("x[1][6] = %d\n", x[1][6]);
  printf("x[1][-1] = %d\n", x[1][-1]);

  // libera a memoria alocada para os valores
  // da matriz
  free(x[0]);
  // libera o array auxiliar
  free(x);

  return 0;
}







