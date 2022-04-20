#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, n=5, m=7, k=3, i;
  x = malloc(n * sizeof (int));
  for(i=0; i<n; i++){
    x[i] = i+1;
  }
  printf("%p: ", x);
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  // realocando
  x = realloc(x, m *sizeof(int) );
  printf("%p: ", x);
  for(i=0; i<m; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  // realocando
  x = realloc(x, k *sizeof(int) );
  printf("%p: ", x);
  for(i=0; i<k; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  return 0;
}
