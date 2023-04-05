#include <stdio.h>
#include <stdlib.h> // malloc(), srand()
#include <time.h> // time()
#include <string.h> // memcpy()

int* my_random(int n){
  int *r, i;
  r = malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    // resto da divisao por 100
    r[i] = rand()%26+50;
  }
  return r;
}

int *myrealloc(int *x, int oldsize, int newsize){
  int *ret;
  if(oldsize == newsize){
    return x;
  }
  ret = (int*) malloc(newsize * sizeof(int));
  if(newsize < oldsize){
    memcpy(ret, x, newsize*sizeof(int));
  }
  else{
    memcpy(ret, x, oldsize*sizeof(int));
  }
//  free(x);
  return ret;
}


int main(){
  int *x, i;
  // inicializa o gerador de numeros
  // PSEUDO aleatorios

  x = malloc(10 * sizeof(int));
  for(i=0; i<10; i++){
    x[i] = rand()%10;
  }
  for(i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  x = myrealloc(x, 10, 15);
  for(i=0; i<15; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  printf("\n");

  srand(time(0));
  x = my_random(5);
  for(i=0; i<5; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  return 0;
}




