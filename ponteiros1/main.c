#include <stdio.h>

int main(){
  int x[] = {23,44,33,12,-1};
  int *px;
  // usando um ponteiro para acessar um
  // array
  // os passos de incremento sao dados
  // conforme o TIPO para o qual o ponteiro
  // aponta
  px = x;
  for(int i=0; i<5; i++){
    printf("valor de px    = %p\n", px);
    printf("conteudo de px = %d\n", *px);
    px++;
  }
  printf("passou.....\n");
  printf("valor de px    = %p\n", px);
  printf("conteudo de px = %d\n", *px);
  return 0;
}
