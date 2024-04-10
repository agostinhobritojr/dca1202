#include <stdio.h>

struct alo{
  char a;
  char c;
  char d;
  char e;
  int b;
  char f;
};

int main(void){
  struct alo x;
  struct alo *px;
  x.a = 1; 
  x.b = 2;
  x.c = 3;
  px = &x;
  printf("%d %d %d\n", x.a, x.b, x.c); 
  printf("%d %d %d\n", px->a, px->b, px->c);
  printf("%d %d %d\n", (*px).a, (*px).b, (*px).c);
  printf("tam de x = %ld\n", sizeof(x));
}




