#include <stdio.h>

void printbits(unsigned char c){
  unsigned char bit;
  for(bit=128; bit !=0 ;bit>>=1){
    if(c & bit)  printf("1");
    else  printf("0");
  }
}

int main(){
  int x;
  x = 5020312;
  unsigned char c;
  unsigned char *pc;
  c = 37;
  pc = (unsigned char*) &x;
 // pc = pc+1;
 // printbits( *(pc+3) ); // byte 3
//  printbits( *(pc+2) ); // byte 2
//  printbits( *(pc+1) ); // byte 1
//  printbits(*pc); // byte 0
  printbits( pc[3] );
  printbits( pc[2] );
  printbits( pc[1] );
  printbits( pc[0] );
  printf("\n");
  return 0;
}
