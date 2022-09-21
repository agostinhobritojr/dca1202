#include <stdio.h>

int main(void){
  unsigned int maisum = +1;
  int menosum = -1;
  printf("menosum = %u\n", menosum);
  if(maisum < menosum){
    printf("+1 < -1\n");
  }
  else{
    printf("duh!\n");
  }
  return 0;
}