#include <stdio.h>

int soma(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

int main()
{
  int (*pf)(int a, int b);
  int x;
  pf = soma;
  printf("soma = %d\n", pf(3,4));
  pf = sub;
  printf("sub  = %d\n", pf(3,4));
  return 0;
}


