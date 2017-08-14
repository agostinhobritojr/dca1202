#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int **x, **y;
  int nlin, ncol, i, j;
  nlin = 3;
  ncol = 4;

  // aloca array auxiliar
  x = (int**) malloc (nlin*sizeof(int*));
  y = (int**) malloc (nlin*sizeof(int*));

  // aloca array para armazenar as linhas
  // da matriz, linha apos linha
  x[0] = (int*) malloc (nlin*ncol*sizeof(int));
  y[0] = (int*) malloc (nlin*ncol*sizeof(int));

  printf("endereco de x[0] = %p\n", x[0]);
  // organizacao dos enderecos das linhas
  for(i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
    y[i] = y[i-1] + ncol;
    printf("endereco de x[%d] = %p\n", i, x[i]);
  }

  for(i=0; i<nlin*ncol; i++){
    x[0][i] = i+1;
  }

  // copia todo o bloco da matriz "x" para a
  // matriz "y"
  memcpy(y[0], x[0], nlin*ncol*sizeof(int));

  for(i=0; i<nlin; i++){
    for(j=0; j<ncol; j++){
//      y[i][j] = x[i][j];
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  // primeiro libera o array de inteiros
  free(x[0]);

  // depois libera o array auxiliar
  free(x);



  return 0;
}






