#include <stdio.h>

void troca(int *a, int *b){
  int troca;
  printf("a= %d; b=%d\n", *a, *b);
  troca = *a;
  *a = *b;
  *b = troca;
  printf("a= %d; b=%d\n", *a, *b);
}

int main()
{
  int x, y;
  x = 3;
  y = 4;
  printf("x= %d; y=%d\n", x, y);
  troca(&x, &y);
  printf("x= %d; y=%d\n", x, y);
  return 0;
}
