#include <stdio.h>

int troca(int *a, int *b);

int main(){
  int x, y;
  // px eh um ponteiro para x
  int *px, *py;
  x = 3; y = 4;
  px = &x;
  py = &y;
  printf("o endereco de x = %p\n", px);
  printf("o endereco de y = %p\n", py);
  printf("o endereco de x = %p\n", &x);
  printf("o endereco de y = %p\n", &y);
  printf("\n");
  printf("o valor de x = %d\n\n", *px);

  printf("main: x = %d; y = %d\n", x, y);
  troca(&x, &y);
  printf("main: x = %d; y = %d\n", x, y);
  return 0;
}

int troca(int *a, int *b){
  int tmp;
  printf("troca: a = %d; b = %d\n", *a, *b);
  tmp = *a;
  *a = *b;
  *b = tmp;
  printf("troca: a = %d; b = %d\n", *a, *b);
}
