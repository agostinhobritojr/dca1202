#include <stdio.h>

int main(){
  int z[5] = {257,2,9,-3,8};
  int x;
  int i;
  int *px;
  char y;
  char *py;
  px = &y; // px aponta para x
  py = &y; // py aponta para y
  x = 13;

  {/*
  printf("tamanho da var ponteiro = %d\n",
         sizeof(px));
  printf("valor de    px = %ld\n", px);
  px = px + 1;
  printf("valor de    px = %ld\n\n", px);

  printf("valor de    py = %ld\n", py);
  py = py + 1;
  printf("valor de    py = %ld\n", py);
  */
  }

  for(i=0; i<5; i++){
    printf("%d, ", z[i]);
  }
  printf("\n");

  px = z;
  for(i=0; i<5; i++){
    printf("%d, ", *(px + i));
  }
  printf("\n");

  for(i=0; i<5; i++){
    printf("%d, ", *px);
    px = px+1;
  }
  printf("\n\n");
  printf("*px = %d", *px);

  printf("\n\n");
  py = z;
  for(i=0; i<5; i++){
    printf("%d, ", *(py + i));
  }
  printf("\n");

  return 0;
}
