#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, *y;
  x = (int*) malloc(10*sizeof(int));

  printf("endereco de y: %p\n", &y);
  printf("endereco de x: %p\n", &x);
  printf("   valor de x: %p\n", x);

  x[1] = 4;
  y = x;
  y[1] = 3;
  printf("   valor de y: %p\n", y);
  printf("x[1] = %d\n", x[1]);
  printf("y[1] = %d\n", y[1]);
  //free(x);
  free(y);
 // x[1] = 8; // erro!!!
  return 0;
}
