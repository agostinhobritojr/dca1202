#include <stdio.h>

int main()
{
  int x, *px = &x;
  *px = 3; // x recebe o valor 3
  printf("   x: %d\n", x);
  printf(" *px: %d\n", *px);
  *px = *px + 1; // px recebe o valor 4
  printf("\n");
  printf("   x: %d\n", x);
  printf(" *px: %d\n", *px);
  (*px)--; // x retorna ao valor 3
  printf("\n");
  printf("   x: %d\n", x);
  printf(" *px: %d\n", *px);
  return 0;
}
