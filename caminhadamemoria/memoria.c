#include <stdio.h>

void printChar(unsigned char c){
  unsigned char bit=128, i;
  for(bit=128; bit > 0; bit >>= 1){
//    printf("%d\n", c&bit);
    if( (c&bit) != 0){
      printf("1");
    }
    else{
      printf("0");
    }
//    bit = bit >> 1;
  }
}


int main(void){
  int x=257, y=4, z=5;
  unsigned char *px;
 // printf("&x = %p\n", &x);
 // printf("&y = %p\n", &y);
 // printf("&z = %p\n", &z);
  px = &x;
  printf("*px = %d\n", *px);

  printChar(*(px+3)); printf("|");
  printChar(*(px+2)); printf("|");
  printChar(*(px+1)); printf("|");
  printChar(*(px+0)); printf("\n");
  printf("\n");
  printChar(px[3]); printf("|");
  printChar(px[2]); printf("|");
  printChar(px[1]); printf("|");
  printChar(px[0]); printf("\n");
}



