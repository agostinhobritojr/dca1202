#include <stdio.h>

int main(void){
  int x;
  int ok;
  printf("digite x: ");
  ok = scanf("%d", &x);
  printf("ok = %d; x = %d\n", ok, x);
}
