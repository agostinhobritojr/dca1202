#include <stdio.h>

int z=0;

void ordena(int *a, int *b, int *c){
  
}

void troca(int *a, int *b){
  static int tmp=0;
  printf("tmp -> %p\n", &tmp);
  printf("z   -> %p\n", &z);
  printf("a   -> %p\n", &a);
  printf("b   -> %p\n", &b);
  printf("\n");
  printf("*a = %d; *b = %d\n", *a, *b);
  tmp = *a; 
  *a = *b; 
  *b = tmp;
  printf("*a = %d; *b = %d\n", *a, *b);
}
int main(void){
  int x=3, y=4;
  printf("x = %d; y = %d\n", x, y);
  troca(&x, &y);
  printf("x = %d; y = %d\n", x, y);
  return 0;
}
