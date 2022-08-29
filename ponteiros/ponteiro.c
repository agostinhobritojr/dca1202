#include <stdio.h>

int main(void){
  int *px, x, y;
  x = 2;
  px = &x;
  y = *px;
  printf("y = %d\n", y);
  printf("px = %p\n", &px);
  printf("&x = %p\n", &x);
  printf("&y = %p\n", &y);
}