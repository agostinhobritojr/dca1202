#include <stdio.h>

// o processo de reoganizacao de memoria
// para facilitar a copia entre memoria
// RAM e CPU é chamado de "alinhamento de
// dados"

struct A{
  char a;
  char b;
  int c;

};

int main(){
  struct A a;
  printf("tamanho = %d\n", sizeof (a));
  return 0;
}
