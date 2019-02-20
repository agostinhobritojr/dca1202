#include <stdio.h>
#include <string.h>

struct alo{
  char x;
  char w;
  int y;
  float z;
};

int main(void){
  unsigned char x;
  char nome[10];  long int y;
  struct alo teste;

  teste.x = 3;
  teste.y = 4;
  teste.z = 0.67;

  printf("A variavel teste "
         "ocupa %d bytes\n",
         sizeof(teste));

  if(-1){
    printf("alo");
  }

//  strcpy(nome, "mariamaria");
  /*

  fgets(nome, 10, stdin);
  puts(nome);
  nome[4]=0;
  puts(nome);

  printf("%d, %d %c\n",
         4,
         nome[4],
         nome[4]);

  x = 255;
  printf("tam = %d\n",
         sizeof(y));
  printf("tam = %d\n",
         sizeof(long long int));
*/
  return 0;
}
