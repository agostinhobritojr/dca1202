#include <stdio.h>

int main()
{
  int x[10], *px;
  px = x;
  x[0] = 3;
  x[1] = 5;
  printf("*px = %d\n", *px);
  printf("px = %p\n", px);
  printf("px = %p\n", px);
  printf("x[1] = %d\n", x[1]);
  *(px+1) = 4;
  printf("x[1] = %d\n", x[1]);

  return 0;
}
