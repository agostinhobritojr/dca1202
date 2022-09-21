#include <stdio.h>

struct Alo{
  int a;
  char b;
  char c;
  char d;
  char e;
};

int main(){
  printf("Tam Alo = %d\n",
         sizeof(struct Alo));
  return 0;
}
