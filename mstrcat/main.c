#include <stdio.h>
#include <string.h>

void mystrcpy(char *destino, char *origem);
void mystrcat(char *destino, char *origem);

int main(){
  char nome[100];

//  gets(nome);
  fgets(nome,100,stdin);
  scanf("%s", nome);
  puts(nome);

  mystrcpy(nome, "jose");
  mystrcpy(nome+1, "aca");
  mystrcat(nome, " mole");

  printf("nome = %s\n", nome);
  return 0;
}

void mystrcat(char *destino, char *origem){
  while(*destino != 0){
    destino++;
  }
  mystrcpy(destino, origem);
/*  while(*origem != 0){
    *destino = *origem;
    destino++;
    origem++;
  }
  *destino='\0';*/

}

void mystrcpy(char *destino, char *origem){
  while(*origem != 0){
    *destino = *origem;
    destino++;
    origem++;
  }
  *destino='\0';
}
