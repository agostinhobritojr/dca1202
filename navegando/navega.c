#include <stdio.h>

void printbits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit > 0; bit = bit / 2) {
    if (c & bit) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  int x, i;
  unsigned char *px;

  px = &x;
  x = 257;
//  printbits(*px);

  for (i = 3; i >=0 ; i--) {
  //  printf("%d\n", *(px + i));
    printbits(*(px + i));
    printf("|");
  }
  printf("\n");
}
