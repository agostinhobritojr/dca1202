#include <stdio.h>

int main()
{
  int x=4;
  int y=6;
  int z;
  int *px;
  char *pcx;

  z = x & y; // AND bit-a-bit

  printf("z = %d\n", z);
  x = 258;
  px = &x;
  pcx = &x;
  printf("x = %d\n", *px);
  printf("x = %d\n", *pcx);
  return 0;
}
