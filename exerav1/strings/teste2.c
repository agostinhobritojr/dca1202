#include <stdio.h>

int main(void){
  int i, j;
  j = 4;
  i = ++j + ++j;
  printf("i = %d\n", i);
}