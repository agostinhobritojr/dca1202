#include <stdio.h>

int z;

void troca(int *a, int *b){
  int tmp;
  printf("troca: a = %d, b = %d\n", *a, *b);
  tmp=*a; *a=*b; *b=tmp;
  printf("troca: a = %d, b = %d\n", *a, *b);
}

int main()
{
  int x=3, y=4;
  printf("main : x = %d, y = %d\n", x, y);
  troca(&x, &y);
  printf("main : x = %d, y = %d\n", x, y);
  return 0;
}




