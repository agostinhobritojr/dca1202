#include <stdio.h>

int main()
{
  int x, *px;
  px = &x;
  printf("valor de px  : %ld\n", px);
  printf("valor de px  : %p\n", px);
  printf("endereco de x: %p\n", &x);
  return 0;
}
