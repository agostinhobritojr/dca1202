#include <stdio.h>
#include <stdlib.h>

int main()
{
  // nl: nlinhas
  // nc: ncolunas
  int nl, nc, i, j;
  nl = 6; nc = 5;
  int **x;
  int y[6][5];

  // passo 1 - alocar array auxiliar
  x = (int**) malloc(nl*sizeof(int*));

  // passo 2 - alocar as linhas da matriz
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof (int));
  }

  for(int i=1; i<nl; i++){
	printf("diff = %4ld | ", (long int)x[i]- (long int) x[i-1]);
  }
  printf("\n");
  printf("%ld\n", (long int)&x[0][1]-(long int)&x[0][0]);
  printf("%ld\n", (long int)&x[1][0]-(long int)&x[0][4]); 
  printf("\n");
  
  for(int i=1; i<nl; i++){
	printf("diff = %4ld | ", (long int)y[i]- (long int) y[i-1]);
  }
  printf("\n");
 
  // passo 3 - usar a matriz
  x[3][3] = 6;

  // passo 4 - liberar a memoria
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);

  return 0;
}
