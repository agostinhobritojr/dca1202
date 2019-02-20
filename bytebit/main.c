#include <stdio.h>

int main(){
  unsigned char bit, result;
  unsigned char send[8], receive[8];
  int i;

  send[0] = 0; send[1] = 0; send[2] = 1;
  send[3] = 1; send[4] = 0; send[5] = 1;
  send[6] = 0; send[7] = 1;

  bit = 1;
  result = 0;
  for(i=0; i<8; i++){
    if(send[i] == 1){
      result = result | bit;
    }
    bit = bit*2;
  }
  printf("result = %d\n", result);
  bit = 1;
  for(i=0; i<8; i++){
    if(bit & result){
      send[i] = 1;
    }
    else{
      send[i] = 0;
    }
    bit = bit*2;
  }
  for(i=0; i<8; i++){
    printf("%d", send[i]);
  }
  printf("\n");
  return 0;
}
