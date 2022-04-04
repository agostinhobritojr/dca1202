#include <stdio.h>

void printbyte(unsigned char c){
  unsigned char i;
  unsigned char and;
  for(i=128; i>0; i=i>>1){
    and = i & c;
    if(and){
      printf("1");
    }
    else{
      printf("0");
    }
  }
}

int main(){
  int i;
  unsigned int x;
  unsigned char *px;

  unsigned char c;
  printbyte(12);


  x = 256;
  px = &x;
  printf("x = %d\n", x);

  for(i=3; i>=0; i--){
    printbyte(px[i]);
    printf("|");
  }
  printf("\n");
  return 0;
}
