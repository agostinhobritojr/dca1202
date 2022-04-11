#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, n, i, *y;
  printf("digite o tamanho: ");
  scanf("%d", &n);
  x = (int*) malloc(n*sizeof(int));
  y = (int*) malloc(n*sizeof(int));
  for(i=0; i<n; i++){
    x[i] = i;
  }

  memcpy(y, x, n*sizeof(int));

  for(i=0; i<n; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  free(x);
  free(y);
  return 0;
}
