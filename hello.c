#include <stdio.h>
#include <stdlib.h>

int j;

int main(int argc, char* argv[]){
  /* alo */
  // jose
  int i;
  printf("Alo, mundo!\n");
  printf("argc = %d\n", argc);
  // for(inicio; condicao de termino; antes da reentrada)
  for(i=0, j=3; i<argc; i++, j--){
	printf("argv[%d] = %s\n",i, argv[i]);
  }
  
  if(i > 0){	
  }
  
  if(i > 0){
  }
  else{	
  }

  if(i > 0){
  }
  else if(i < -3){
  }
  else{
  }

  do{
  }while(i<0);

  while(i<0){
  }

  switch(i){
  case 3:
	printf("alo 3");
	break;
  case 4:
	printf("alo 4");
  default:
	printf("alo qualquer");
  }
  system("/usr/bin/xeyes");
  return 0;
}


