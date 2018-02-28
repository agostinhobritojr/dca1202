#include <stdio.h>

int main(){
  unsigned char x;
  unsigned char i;
  unsigned char bits;
  unsigned int result;
  unsigned char y[8];

  x = 45;

  bits = 1;
  for(i=1; i<=8; i++){
    if( (x & bits) > 0){
      printf("bit [%d] = 1\n", i);
      y[i-1] = 1;
    }
    else{
      printf("bit [%d] = 0\n", i);
      y[i-1] = 0;
    }
    bits = bits << 1;
  }

  return 0;
}
