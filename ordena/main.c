#include <stdio.h>

void ordena(int *a, int *b, int *c){
  int tmp;
  // colocar o menor dos valores em *a
  if(*a > *b){
    tmp=*a; *a=*b; *b=tmp;
  }
  if(*a > *c){
    tmp=*a; *a=*c; *c=tmp;
  }
  if(*b > *c){
    tmp=*b; *b=*c; *c=tmp;
  }
}

int main(){
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  ordena(&a, &b, &c);
  printf("%d - %d - %d", a, b, c);
  return 0;
}
