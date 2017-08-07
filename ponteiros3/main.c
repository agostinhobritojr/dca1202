#include <stdio.h>
#include <stdlib.h>

void printchar(unsigned char x){
  for(unsigned char count=0; count<8; count++){
    printf("%d", (x & 0x80) || 0);
    x = x << 1;
  }
}

void printint(int x){
  unsigned char *pu;

  pu = (unsigned char *) &x;
  for(int i=0; i<4; i++){
    printf("byte %d: %d  -- ", i, *pu);
    printchar(*pu);
    printf("\n");
    pu++;
  }
}

int main(void){
  int x;

  printf("tamanho do inteiro = %d\n", sizeof(int));
  //  x = rand();
  x = 3;
  printf("x = %d\n", x);
  printint(x);
  printf("\n");
  x = 256;
  printf("x = %d\n", x);
  printint(x);

  /*
  x1 = tempo();

  for(int i=0; i<10000000; i++){
    printchar(3);
  }

  x2 = tempo();
   */



  return 0;
}








