#include <stdio.h>

// variavel global
int x; // pecado!

void f(void){
  // variavel local
  int y;
  printf("estou em f");
}

int main(void){
  int a;
  int b;
  int c[400];
  printf("%d", sizeof(int));
  f();
}
