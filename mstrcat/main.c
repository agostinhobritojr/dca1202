#include <stdio.h>
#include <string.h>

char* mstrcat(char* destination, char* source){
  char* ret;
  ret = destination;
  while(*destination != 0){
    destination++;
  }
  while(*source != 0){
  *destination = *source;
  destination++;
  source++;
  }
  *destination='\0';
  return ret;
}

int main()
{
  char nome[50] = "JOSE";
  char sobrenome[50] = "MARIA";

  mstrcat(nome,sobrenome);
  puts(nome);
  return 0;
}
