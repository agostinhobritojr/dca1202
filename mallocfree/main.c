#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int *x;
  int *y;
  // 1: alocar memoria para y
  // 2: copiar o conteudo de x para y
  x = (int*) malloc(10*sizeof(int));
  y = (int*) malloc(40);
  //x[0]= 4;
  *(x+0) = 4;
  x[1]= -3;
  printf("*x = %d\n", *x);
  //y = x; ERRO! COPIA APENAS O ENDERECO

  // copia 40 bytes de x para y
  memcpy(y,x,40);
  printf("y[0] = %d\n", y[0]);
  printf("y[1] = %d\n", y[1]);
  // x[10] = 8; ERRO!!!
  free(x);
  free(y);
  // double free or corruption
  //free(x);
  return 0;

}
