#include <stdio.h>

int main()
{
  int x=257;
  int *px;
  unsigned char *pc;

  /*
  px = &x;
  printf("x = %d\n", x);
  printf("x = %d\n", *px);
  printf("end x  = %p\n", &x);
  printf("end px = %p\n", &px);

  printf("px = %p\n", px);
  px = px+1;
  printf("px = %p\n", px);
  px = px-1;
  printf("px = %p\n", px);
*/

  pc = &x;
  printf("*pc = %d\n", *pc);
  pc++;
  printf("*pc = %d\n", *pc);
  return 0;
}


