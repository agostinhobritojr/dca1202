#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para memcpy()

int *myrealloc(int *p, int oldsize, int newsize){
  int *ret;
  if(oldsize == newsize){
    return p;
  }
  ret = (int *)malloc(newsize * sizeof(int));
  if(oldsize < newsize){
    memcpy(ret, p, oldsize * sizeof(int)); 
/*    for(int i = 0; i < oldsize; i++){
      ret[i] = p[i];
*/
  }
  else{
    memcpy(ret, p, newsize * sizeof(int));
  }
  free (p);
  return ret;
}



int main(void){
  int *x, n1, n2;
  n1 = 4; n2 = 6;
  x = (int *)malloc(n1 * sizeof(int));
  for (int i = 0; i < n1; i++) {
    x[i] = i;
  }
  for (int i = 0; i < n1; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");
  printf("x = %p\n", x);
//  x = realloc(x, n2 * sizeof(int));
  x = myrealloc(x, n1, n2);
  printf("x = %p\n", x);
  for (int i = 0; i < n2; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");

  free(x);
}