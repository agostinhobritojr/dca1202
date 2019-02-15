#include <stdio.h>

int main(void){
  unsigned char x;
  x = 255;
  printf("x = %d\n", x);
  x = x+1;
  printf("x = %d\n", x);
  x = x-1;
  printf("x = %d\n", x);
  return 0;
}
