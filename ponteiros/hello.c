#include <stdio.h>

int main(void){
  short int *py, *px, x, y;
  x = 2;
  // &x recupera o endereco de x
  // px APONTA PARA x
  px = &x; 

  // *px recupera o valor da variavel APONTADA por px
  // *px eh o conteudo de px
  y = *px; 

  printf("&x   = %p\n", &x);
  printf("&y   = %p\n", &y);
  printf("&px  = %p\n", &px);
  printf("&py  = %p\n", &py);

  printf("\n");

  printf("px  = %p\n", px);
  printf("*px = %d\n", *px);

}






