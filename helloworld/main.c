#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
  struct aluno{
    char nome[40];
    int matricula;
  };

  struct abc{
    char a;
    int c;
    char b;
  };

  unsigned char x;

  struct aluno joao;
  struct abc alo;

  printf("sizeof alo = %d\n",
         sizeof (alo));

  strcpy(joao.nome, "Joao maria");
  joao.matricula=20193045;

  x = -1;
  printf("x = %d\n", x);
  x--;
  printf("x = %d\n", x);
  x++;
  printf("x = %d\n", x);

  //  char nome[10];
  //  gets(nome);
  unsigned long int y;
  y = 1-3+1;

  printf("mem = %u\n", y);
  /*  for(i=0; i<argc; i++){
    printf("%s\n", argv[i]);
  }*/

  return 0;
}







