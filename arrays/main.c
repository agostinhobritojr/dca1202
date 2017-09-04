#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int x[10];
  int y[10];
  int i;

  int n;
  i = 3;
  x[0] = 4;
  x[i] = -1;

  i = x[6];

  srand(time(0));
  n=10;
  for(i=0; i<n; i++){
    x[i]=rand()%100;
  }
  n = 30;
  for(i=0; i<n; i++){
    y[i] = x[n-1-i];
  }
  for(i=0; i<n; i++){
    printf("x[%d] = %d; y[%d] = %d; \n",
           i, x[i], i, y[i]);
  }


  return 0;
}

