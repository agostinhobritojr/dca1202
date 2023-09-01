#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// n antigo, m novo
// x = (int*) malloc(n*sizeof(int));
// x = myrealloccorajosa(x, n*sizeof(int), m*sizeof(int));

void *myrealloccorajosa(void* old, int oldsize, int newsize){
  unsigned char *aux, *novo;
  if(newsize == oldsize){
    return old;
  }
  aux = (unsigned char*) old;
  novo = (unsigned char*) malloc(newsize);
  if(newsize > oldsize){
    memcpy (novo, aux, oldsize);
  }
  else{
    memcpy (novo, aux, newsize);
  }
  free(old);
  return novo;  
}


int* myrealloc(int* old, int oldsize, 
               int newsize){
  int *novo;
  if(oldsize == newsize){
    return old;
  }
  novo = (int*) malloc(newsize * sizeof(int));
  if(newsize > oldsize){
    memcpy (novo, old, oldsize * sizeof(int));
  }
  else{
    memcpy (novo, old, newsize * sizeof(int));
  }
  free(old);
  return novo;
}

int main(void){
  int *x, n=5, m=10, i;
  x = (int *)malloc(n*sizeof(int));
  for(i = 0; i<n; i++){
    x [i] = i;
  }
  for(i = 0; i<n; i++){
    printf("%2d, ", x[i]);
  }
  printf("\n");

  x = myrealloc(x, n, m);
  for(i = 0; i<m; i++){
    printf("%2d, ", x[i]);
  }
  printf("\n");

  x = myrealloc(x, m, 3);
  for(i = 0; i<3; i++){
    printf("%2d, ", x[i]);
  }
  printf("\n");

 /* printf("x antes  = %p\n", x);
  x = (int*) realloc(x, m*sizeof(int));
  printf("x depois = %p\n", x);
  for(i = 0; i<m; i++){
    printf("%2d, ", x[i]);
  }
  printf("\n");
  */
  free(x);
}





