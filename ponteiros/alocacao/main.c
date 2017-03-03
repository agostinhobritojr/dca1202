#include <stdio.h>
#include <stdlib.h> // malloc()/free()

int main(void){
  int *x, *y;
//  int y[10];
  int n, i;
  n = 5;
  x = (int*)malloc(n*sizeof(int));
  if( x == NULL){
    exit(0);
  }

  printf("tam y = %ld\n", sizeof(y));
  printf("tam x = %ld\n", sizeof(x));

  for(i=0; i<n; i++){
    x[i] = i+1;
  }

  y = (int*)malloc(2*n*sizeof(int));
  if( y == NULL){
    exit(0);
  }

  for(i=0; i<2*n; i++){
    y[i] = 0;
  }

  for(i=0; i<n; i++){
    y[i] = x[i];
  }

  free(x);

  x = y;

  for(i=0; i<2*n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  free(y);

  for(i=0; i<2*n; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");


  return 0;
}

