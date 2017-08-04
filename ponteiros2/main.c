#include <stdio.h>

int main(void){
  // y eh um ARRAY de 8 inteiros
  int y[8];
  int x;
  int *px;
  x = 3;

  for(int i=0; i<8; i++){
    y[i] = i+1;
  }

  for(int i=0; i<8; i++){
    printf("%d,", y[i]);
  }
  printf("\n");

  px = y; //  px = &y[0];

  printf("y[0] = %d\n", y[0]);
  printf("y[0] = %d\n", *px);

  printf("px = %p\n", px);
//  px = px + 1;
//  printf("px = %p\n", px);
//  *(px+1) = 40;
  printf("*px = %d\n", *(px-1));
  for(int i=0; i<8; i++){
    printf("%d,", y[i]);
  }
  printf("\n");


  px = px - 1;
  printf("px = %p\n", px);
  printf("*px = %d\n", *px);

  long *pz;

  pz = y;
  printf("pz = %p\n", pz);
  printf("*pz = %d\n", *pz);
  pz = pz+1;
  printf("pz = %p\n", pz);
  printf("*pz = %d\n", *pz);

  // px aponta para x
  px = &x;

  //  printf("x = %d\n", *px);
  return 0;
}

