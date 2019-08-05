#include <stdio.h>

void printbits(unsigned char c){
  // ex: printbits(100)
  // saida: 01100100
  for(unsigned char byte=128; byte>0; byte=byte/2){
    if(byte & c){
      printf("1");
    }
    else{
      printf("0");
    }
  }
}

int main(){
  int x=257;
  int b = 100;

  unsigned char *pc;
  pc = &x;
  // byte 4
  pc = pc+3;  printbits(*pc);
  // byte 3
  pc = pc-1;  printbits(*pc);
  // byte 2
  pc = pc-1;  printbits(*pc);
  // byte 1
  pc = pc-1;  printbits(*pc);

  printf("\n\n");

  printf("%p: %d\n", pc, *pc);
  pc = pc+1;
  *pc = 1;
  printf("%p: %d\n", pc, *pc);
  printf("x = %d\n", x);
  return 0;
}
