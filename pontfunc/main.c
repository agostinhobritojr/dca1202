#include <stdio.h>

int soma(int a, int b){
  return a+b;
}

int subt(int a, int b){
  return a-b;
}

int main()
{
  int (*pf)(int, int);
  pf = soma;
  printf("soma = %d\n", pf(3,4));
  pf = subt;
  printf("subt = %d\n", pf(3,4));
  return 0;
}
