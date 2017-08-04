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

void ordena(int *a, int *b, int *c){
  int tmp;
  if(*a > *b){
    troca(a, b);
  }
  if(*a > *c){
    troca(a, c);
  }
  if(*b > *c){
    troca(b, c);
  }
}

int main(void){
  int a, b, c;
  a = 4; b = 3; c = 2;

  ordena(&a, &b, &c);
  printf("\n\na, b, c = %d, %d, %d\n\n", a,b,c);


  printf("endereco de a: %p\n",&a);
  printf("endereco de b: %p\n",&b);
  printf("main: a = %d; b = %d\n", a, b);
  troca(&a, &b);
  printf("main: a = %d; b = %d\n", a, b);
  return 0;
}










