#include <stdio.h>

int main(){
  int i;
  unsigned int x;
  unsigned char *px;

  x = 0;
  px = &x;
  px[0] = 3;
  px[1] = 1;
  printf("x = %d\n", x);

  for(i=0; i<4; i++){
    printf("px[%d] = %d\n", i, px[i]);
  }
  return 0;
}
