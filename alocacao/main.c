#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int *x, *y;
  int n, i;
  n = 4;
  // aloca array de n inteiros
  x = (int*) malloc(n*sizeof(int));
  y = (int*) malloc(n*sizeof(int));

  x[0]=5;  x[1]=3;  x[2]=-1;  x[3]=0;

  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  //  y = x; PROIBIDO!!!
  for(i=0; i<n; i++){
    y[i] = x[i];
  }
  memcpy(y, x, n*sizeof(int));
  for(i=0; i<n; i++){
    printf("%d, ", y[i]);
  }
  free(x);
  free(y);
  return 0;
}
