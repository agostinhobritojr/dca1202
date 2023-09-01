#include <stdio.h>
#include <stdlib.h>

int* meuponteiro(){
  int *p, q;
  p = &q;
  return p;
}


int* myrandom(int n){
  int *r, i;
  r = malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    r[i] = rand();
  }
  return r;
}

int main(void){
  int *x, i;
  x = myrandom(10);
  for(i=0; i<10; i++){
    printf("%d\n", x[i]);
  }
  free(x);
}









