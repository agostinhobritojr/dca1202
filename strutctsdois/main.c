#include <stdio.h>

struct teste{
  int a;
  int b;
  char c;
  char d;
  char e;
};

int main()
{
  printf("Tamanho = %d\n",
         sizeof(struct teste));
  return 0;
}
