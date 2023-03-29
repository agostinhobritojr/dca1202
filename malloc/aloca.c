#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int *x, i, N=10;
  int *y;
//  int y, z[10];
  //sizeof() eh um operador
//  printf("sizeof(int) = %lu\n", sizeof(z));
// aloca a memoria dinamicamente
  printf("digite quantos elementos: ");
  scanf("%d", &N);
  x = malloc(N * sizeof(int)); 
  y = malloc(N * sizeof(int));
  for(i=0; i<N; i++){  
    x[i] = i;
  }

  // memcpy(destino, origem, nbytes);
  memcpy(y, x, N * sizeof(int));

  for(i=0; i<N; i++){  
    y[i] = x[i];
  }

  for(i=0; i<N; i++){  
    printf("y[%d] = %d\n", i, y[i]);
  }

  if(x == NULL){
    printf("memoria nao alocada");
    exit(0);
  }
  printf("&x= %p\n", &x);
  printf(" x= %p\n", x);
  x[3] = 4;
  for(i=0; i<N; i++){  
    printf("x[%d] = %d\n", i, x[i]);
  }
  // libera a memoria alocada
  free(x);
  x = NULL;
  free(y);
  y = NULL;
//  free(x);
/*  printf("--------\n");
  x[3] = 4;
  for(i=0; i<N; i++){  
    printf("x[%d] = %d\n", i, x[i]);
  }
  */
}
