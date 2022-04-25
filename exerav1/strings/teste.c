#include <stdio.h>


void func(int *px, int *py) {  
  px = py; 
  *py = (*py) * (*px); 
  *px = *px + 2; 
  } 

int main(void) { 
  int x, y; 
  scanf("%d",&x);  /*3*/ 
  scanf("%d",&y);  /*4*/ 
  func(&x,&y); 

  printf("x = %d, y = %d", x, y); } 