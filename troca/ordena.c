#include <stdio.h>

void troca(int *a, int *b){
  int tmp;
  tmp = *a; *a = *b; *b = tmp;
}

void ordena(int *a, int *b, int *c){
  int tmp;
  if(*a > *b){
    troca(a, b);
//    tmp = *a; *a = *b; *b = tmp;
  }
  if(*a > *c){
    tmp = *a; *a = *c; *c = tmp;
  }
  if(*b > *c){
    tmp = *b; *b = *c; *c = tmp;
  }
}

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  ordena(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);
  return 0;
}
