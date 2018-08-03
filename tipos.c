#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(void){
  int x;
  unsigned char y;

  char nome[40];

  strcpy(nome,"Alo");
  printf("nome = %s\n", nome);
  printf("nome[0] = %c\n", nome[0]);
  printf("nome[0] = %d\n", nome[0]);
  y = 0;
  if(y > 1){
	y = y-1;
  }
  if(y < UCHAR_MAX){
	y = y+1;
  }
  //  printf("Digite y: ");
  // scanf("%d",&y);
  
  printf("y = %d\n", y); 
  printf("tam (x) = %ld\n",
		 sizeof(int));
  
}
