#include <stdio.h>
#include <stdlib.h>

int alo(){
  malloc (300);
}

int main(){
  int *x;
  int z;
  alo();
  x = 0;
  *x = 3;
  printf("terminou\n");
  return 0;
}
