#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int i;
  printf("o programa teve %d argumentos\n", argc);
  for(i=0; i<argc; i++){
	printf("%d: %s\n", i, argv[i]);
  }
  system("/usr/bin/firefox");
  printf("tah-dah!\n");
  return 0;
}
