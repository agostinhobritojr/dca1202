#include <stdio.h>

void troca(int *a, int *b){
  int tmp;
  printf("valor de a   : %p\n",a);
  printf("endereco de a: %p\n",&a);
  printf("endereco de b: %p\n",&b);
  printf("endereco tmp : %p\n",&tmp);

  printf("troca: a = %d; b = %d\n", *a, *b);
  // tmp recebe conteudo de a
  tmp = *a;
  // conteudo de a recebe conteudo de b
  *a = *b;
  // conteudo de b recebe tmp
  *b = tmp;
  printf("troca: a = %d; b = %d\n", *a, *b);
}

int main(void){
  int a, b;
  a = 3; b = 4;
  printf("endereco de a: %p\n",&a);
  printf("endereco de b: %p\n",&b);
  printf("main: a = %d; b = %d\n", a, b);
  troca(&a, &b);
  printf("main: a = %d; b = %d\n", a, b);
  return 0;
}










