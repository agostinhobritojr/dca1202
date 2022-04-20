#include <stdio.h>
#include <stdlib.h>

struct cliente{
  int id;
  char nome[400];
  int fone;
};

int main()
{
  struct cliente *pc;
  int tam;
  printf("tam = %d\n", sizeof(struct cliente));
  pc = malloc(10*sizeof(struct cliente));
  pc[1].id = 14394;
  printf("id = %d\n", (pc+1)->id);
  free(pc);
  return 0;
}
