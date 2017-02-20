#include <stdio.h>

// variavel global
int x; // pecado!

void f(void){
  // variavel local
  int y;
  printf("estou em f\n");
}

int main(void){
  int a;
  int b;
  int x, y;
  int c[400];
  printf("%li\n", sizeof(short int));
  x = 0;
  y = 0;
  printf("result = %i\n",x||y);
  f();
  a = 1;
  switch(a){
  case 1:
	printf("foi um\n");
	break;
  case 2:
	printf("foi dois\n");
	break;
  case 3:
	printf("foi tres\n");
	break;
  default:
	printf("foi nada\n");
  }

  for(a = 0, b = 1; a<10, b<40; a++, b=b+2){
	printf("a = %d | b = %d\n", a, b);
  }

  
}
