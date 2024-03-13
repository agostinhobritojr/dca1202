#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
  int *x, nelem = 10, i, *y;
//  size_t tam;
//  tam = LONG_MAX;
//  x = (int*) malloc(tam);
  x = (int*) malloc(nelem * sizeof(int));
  y = x;
//  y = NULL;
  if(x == NULL){
    printf("Erro na alocação de memória\n");
    exit(1);
  }
  printf("&x = %p\n", &x);
  printf("x  = %p\n", x);
  printf("*x = %d\n", *x);
  for(i=0; i<nelem; i++){
    x[i] = i;
  }
  for(i=0; i<nelem; i++){
    printf("%d, ",x[i]);
  }
  printf("\n");
  free(x); // libera a memória alocada
  x = NULL;
  printf("passou 1\n");
  free(y); // libera a memória alocada
  printf("passou 2\n");
}




