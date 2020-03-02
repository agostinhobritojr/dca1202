#include <stdio.h>

void ordena(int *x, int *y, int *z){
  int tmp;
  if(*y < *x){
    // troca x<->y
    tmp = *y;
    *y = *x;
    *x = tmp;
  }
  if(*z < *x){
    // troca x<->z
    tmp = *z;
    *z = *x;
    *x = tmp;
  }
  if(*z < *y){
    // troca y <-> z
    tmp = *z;
    *z = *y;
    *y = tmp;
  }
}

int main()
{
  int a=5, b=4, c=3;
  ordena(&a, &b, &c);
  printf("a=%d, b=%d, c=%d\n", a,b,c);
  return 0;
}
