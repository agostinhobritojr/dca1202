#include <stdio.h>

int main(void){
  int *px, x, y;
  x = 2;
//  px = &x; // px aponta para x
  px = x;
  y = *px;  // y recebe conteudo de px
  printf("x   = %d\n", x);
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  printf("px  = %p\n", px);
  printf("&px = %p\n", &px);
  printf("y   = %d\n", y);
}