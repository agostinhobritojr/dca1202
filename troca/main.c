#include <stdio.h>

void troca(int *a, int *b){
  int x;
  char *c;
  double *d;
/*  printf("endereco de a = %p\n", &a);
  printf("conteudo de a = %lx\n", a);
  printf("endereco de b = %p\n", &b);
  printf("conteudo de b = %lx\n", b);
*/

  printf("tam de a = %ld\n", sizeof(a));
  printf("tam de c = %ld\n", sizeof(c));
  printf("tam de d = %ld\n", sizeof(d));

 // printf("troca: a = %d, b = %d\n", *a, *b);
  x=*a;
  *a=*b;
  *b=x;

 // printf("troca: a = %d, b = %d\n", *a, *b);
}

int main(){
  int a, b;
  a=3; b=4;
 // printf("main : a = %d, b = %d\n", a, b);
  troca(&a, &b);
 // printf("main : a = %d, b = %d\n", a, b);

  return 0;
}





