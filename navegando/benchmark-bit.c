#include <stdio.h>
#include <time.h>

int main(void){
  clock_t t;
  int f, x = 128;
  printf ("Calculando...\n");
  t = clock();
  for(int i = 0; i < 1000000000; i++){
    f = 128/2; 
  }
  t = clock() - t;
  printf ("Levou %f seconds.\n", ((float)t)/CLOCKS_PER_SEC);
  printf("Result = %d\n", f);

  t = clock();
  for(int i = 0; i < 1000000000; i++){
    f = 128 >> 1; 
  }
  t = clock() - t;
  printf ("Levou %f seconds.\n", ((float)t)/CLOCKS_PER_SEC);
  printf("Result = %d\n", f);
  return 0;
}