#include <stdio.h>

void maisum(int a){
  a = a + 1;
}


int main()
{
  int x;
  int *px;
  // armazena em px o endereco de x
  printf("x = %d\n", x);
  px = x;
  printf("px = %ld\n", px);

  x = 1;
  // recupera o conteudo de px
  printf("x = %d\n\n", *px);
  printf("px = %p\n", px);
  printf("px = %ld\n", px);
  printf("px = %d\n", px);
  printf("tam = %ld\n", sizeof(px));

  maisum(x);
  printf("x = %d\n", x);
  return 0;
}

