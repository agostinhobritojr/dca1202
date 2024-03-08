#include <stdio.h>

int main(void){
  unsigned int x;
  unsigned char *px;
  px = &x;
  x = 257;
  printf("%d\n", *px);
  px = px + 1;
  printf("%d\n", *px);
  *px = 3;
  printf("x = %d\n", x);
}