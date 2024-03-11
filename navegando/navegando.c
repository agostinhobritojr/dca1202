#include <stdio.h>

void printBits(unsigned char c){
  unsigned char bit;
  for(bit = 128; bit; bit = bit >> 1){
    if(c & bit){
      printf("1");
    }else{
      printf("0");
    }
  }
}

int main(void){
  unsigned int x, bit;
  unsigned char *px;
  px = &x;
  x = 1110704128;
  printf("|");printBits(px[3]);
  printf("|");printBits(px[2]);
  printf("|");printBits(px[1]);
  printf("|");printBits(px[0]);
  printf("|\n");

//  printBits(*px);
//  printf("\n");
//  printBits(*(px + 1));
/*  printf("%d\n", *px);
  px = px + 1;
  printf("%d\n", *px);
  *px = 3;
  printf("x = %d\n", x);
  */
}