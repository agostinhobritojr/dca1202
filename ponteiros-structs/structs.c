#include <stdio.h>

struct teste{
  char nome;
  char nome2;
  int a;
  int b;
  int c;
};

int main(void){
  struct teste c, *pc;
  c.a = 4;  c.b = 5;  c.c = 6;
  pc = &c;
  pc->a = 7;
  printf("%d %d %d\n", c.a, c.b, c.c);
  printf("tamanho = %ld\n", sizeof(c));
  return 0;
}

