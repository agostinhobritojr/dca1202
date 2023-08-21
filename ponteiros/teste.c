#include <stdio.h>

int main(void){
  int *px, *pk, x, y;
  char *pz;
  x = 2;
  printf("px = %p\n", px);
  px = &x; 
  printf("px = %p\n", px);
  printf("tam px = %ld\n", sizeof(px));
  printf("tam pz = %ld\n", sizeof(pz));
  y = *px;

  pk = &x;
  printf("pk = %p\n", pk);
  pk = px;
  printf("pk = %p\n", pk);


  printf("*pk = %d\n", *pk);
}
