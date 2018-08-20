#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(int * a, int n){
  int i;
  for(i=0; i<n; i++){
    a[i] = a[i]*a[i];
  }
}

int* myrealloc(int *old, int tamNovo,
               int tamAnt){
  int *novo;
  if(tamAnt == tamNovo){
    return old;
  }
  novo = (int*) malloc(tamNovo*
                       sizeof(int));
  // tamNovo > tamAnt
  if(tamNovo > tamAnt){
    memcpy(novo, old, tamAnt*
           sizeof(int));
    return novo;
  }
  else{
    memcpy(novo, old, tamNovo*
           sizeof(int));
    return novo;
  }
}

int main(){
  int *x;
  int n = 5;
  int i;

  x = (int*) malloc(n*sizeof(int));
  printf("end x = %p\n", x);
  for(i=0; i<n; i++){
    x[i] = i+1;
  }

  x = myrealloc(x, 10, 5);

  /*n = 10;
  x = realloc (x, n*sizeof(int));
  printf("end x = %p\n", x);
  */


  funcao(x, 10);

  for(i=0; i<10; i++){
    printf("%d, ",x[i]);
  }
  free(x);
  return 0;
}
