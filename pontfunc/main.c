#include <stdio.h>

int soma(int a, int b){
  return (a+b);
}

int main(void){

  int (*pont)(int, int);

  int x, y;
  x = 3; y = 4;

  pont = soma;

  printf("end soma = %p\n", &soma);
  printf("end pont = %p\n", &pont);
  printf("pont     = %p\n", pont);

  printf("soma = %d\n", soma(x, y));
  printf("soma = %d\n", pont(x, y));
  return 0;
}












