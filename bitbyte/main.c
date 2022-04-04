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
  printf("\n");
}

int main(){
  int i;
  unsigned int x;
  unsigned char *px;

  unsigned char c;
  printbyte(12);




  x = 0;
  px = &x;
  px[0] = 3;
  px[1] = 1;
  printf("x = %d\n", x);

  for(i=0; i<4; i++){
    printf("px[%d] = %d\n", i, px[i]);
  }
  return 0;
}
