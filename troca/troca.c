#include <stdio.h>

int z=0;

void ordena(int *a, int *b, int *c){
  int tmp;
  if(*a > *b){
    tmp = *a; *a = *b; *b = tmp;
  }
  if(*a > *c){
    tmp = *a; *a = *c; *c = tmp;
  }
  if(*b > *c){
    tmp = *b; *b = *c; *c = tmp;
  }
}

int main(void){
  int x=5, y=4, z=3;
  printf("x = %d; y = %d; z = %d\n", x, y, z);
  ordena(&x, &y, &z);
//  troca(&x, &y);
  printf("x = %d; y = %d; z = %d\n", x, y, z);
  return 0;
}


void troca(int *a, int *b);


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
