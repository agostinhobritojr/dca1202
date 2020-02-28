#include <stdio.h>

int main()
{
  int x = 3;
  int *px;

  printf("x = %d\n", x);
  px = &x;
  printf("&x  = %p\n", &x);
  printf("&px = %p\n", &px);

  printf("x = %d\n", *px);
  *px = 4;
  printf("x = %d\n", *px);

//  printf("tam  x = %d\n", sizeof (x));
//  printf("tam px = %d\n", sizeof (px));
  return 0;
}
