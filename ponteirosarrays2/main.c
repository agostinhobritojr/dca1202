#include <stdio.h>

int main(){
  int x[10];
  int *px, *py;
  int i;
  for(i=0; i<10; i++){
    x[i] = i+1;
  }
  px = x;
  py = px;
  for(i=0; i<10; i++){
//    printf("%d, ", *(px+i));
    printf("%d, ", py[i]);
  }
  return 0;
}
