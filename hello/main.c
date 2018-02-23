#include <stdio.h>

#define DESTRUCTION_CODE 34529

int main(){
  int x;
  int i, j;

  // a funcao seguinte imprime um lixo qualquer
  printf("Hello World %d!\n", x);
  scanf("%i", &x);
  printf("x = %d\n", x);

  // se a temperatura estiver entre
  // 5 e 7 graus, avise ao usuario
  if(x > 5 && x < 7){
    printf("maior\n");
  }
  else{
    printf("menor igual\n");
  }
  for(i=0, j=3; i<3; i++, j--){
    printf("alo %d\n", i);
  }
  //
  while(x < 5){

  }

  do{

  }while(x > 5);

  if(x == DESTRUCTION_CODE){
    exec("/usr/bin/explode_world");
  }

  switch (x) {
  case 5:
    printf("alo, 5\n");
    break;
  case 6:
    printf("alo, 6\n");
    break;
  default:
    break;
  }

  return 0;
}
