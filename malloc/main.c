#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int x, int y){
  return x+y;
}

int main(){
  int *x, *y;
  int n, i;

  n = 13;

  i = f(4,5);

  x = (int*) malloc(n*sizeof(int));
  y = (int*) malloc(n*sizeof(int));
  for(i=0; i<n; i++){
    x[i] = i;
  }
  /*
  for(i=0; i<n; i++){
    y[i] = x[i];
  }
  */
  memcpy(y, x, n*sizeof(int));

  for(i=0; i<n; i++){
    printf("%d,", y[i]);
  }
  printf("\n");
  free(x);
  free(y);
  return 0;
}
