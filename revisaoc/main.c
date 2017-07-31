#include <stdio.h>

#define LIMIARCRITICO 38
#define CTE_AGOSTINHO 234.6789434

#define ENTRADA 0
#define IMPRESSAO 1
#define quad(X) X*X

struct alo{
  char x;
  int y;
  float z;
};


int main(int argc, char* argv[]){
  int x, y, z;
  /*

  {
    printf("Hello World!\n");
    printf("valor= %d e alo = [%5.2f]\n", 3, 4444.34);


    if(a == LIMIARCRITICO){
      exec("explode");
    }
    else{
      exec("queima");
    }


    x = CTE_AGOSTINHO;

    x = 3.1415;
    //  a = sin(x*ln(x/3.14));

   // scanf("%d %d", &x, &y);
    // a linha de baixo eh um printf
   // printf("x = %d; y = %d\n", x, y);
  }
 */

  struct alo teste;
  teste.x = 4;
  teste.y = 5;
  teste.z = 8.7;

  printf("sizeof teste = %d\n", sizeof(teste));


  x = 0;
  if(x == 0){
    printf("x = 0\n");
  }
  else if(x == 1){
    printf("x == 0\n");
  }
  else{
    printf("x eh diferente\n");
  }

  printf("quad(3+4) = %d\n", quad(3+4));

  x = 16;
  printf("x = %d\n", x);

  x = x<<1;
  printf("x = %d\n", x);

  x = x>>2;
  printf("x = %d\n", x);

  printf("digite x: ");
//  scanf("%d", &x);

  printf("\n\n");
  x = 8;
  y = 16;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  z = x | y;
  printf("z = %d\n", z);

  switch(x){
  case ENTRADA:
    printf("digitou 1\n");
    break;
  case IMPRESSAO:
    printf("digitou 2\n");
    break;
  }

  return 0;
}

















