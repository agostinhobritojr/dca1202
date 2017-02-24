#include <stdio.h>

int main(void){
  long int x;
  unsigned int tmp;
  unsigned char *c, incr;
  x = 4;
  c = &x;


  printf("x = %li\n", x);
  for(incr=0; incr<8; incr++){
    printf("c = %i\n", *c);
    c++;
  }
  return 0;
}

