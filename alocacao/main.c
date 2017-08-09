#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
  int *x, *z;
  int y[10];
  int n;
  int i;
  printf("digite n: ");
  scanf("%d", &n);
  // malloc aloca uma quantidade de bytes
  // determinada no parametro passado
  // e retorna um ponteiro para o inicio
  // do bloco de memoria alocado
  x = (int*) malloc(n * sizeof(int));
  z = (int*) malloc(n * sizeof(int));

  printf("&y = %p\n", y);
  printf("x  = %p\n", x);

  srand(time(0));
  for(i=0; i<n; i++){
    x[i] = rand()%100;
  }

//  for(i=0; i<n; i++){
//    z[i] = x[i];
//  }
  // #include <string.h>

  memcpy(z, x, n *sizeof(int));

  for(i=0; i<n; i++){
    printf("%3d, ", x[i]);
  }
  printf("\n");
  for(i=0; i<n; i++){
    printf("%3d, ", z[i]);
  }
  printf("\n");

  x[0] = 1;

  for(i=0; i<n; i++){
    printf("%3d, ", x[i]);
  }
  printf("\n");
  for(i=0; i<n; i++){
    printf("%3d, ", z[i]);
  }
  printf("\n");

  // libera a memoria alocada pelo malloc
  free(x);
  free(z);

  return 0;
}

