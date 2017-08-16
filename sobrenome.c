#include <string.h>
#include <stdio.h>

char* sobrenome(char *nome){
  char* sobre=nome;
  while(*sobre != ' '){
	sobre++;
  }
  while(*sobre == ' '){
	sobre++;
  }
  return(sobre);
}

int main(void){
  char nome[10];
  char *p;
  puts("Digite seu nome e seu sobrenome: ");
  fgets(nome,10,stdin);
  puts(nome);
  p=sobrenome(nome);
  puts(p);
  return 0;
}
