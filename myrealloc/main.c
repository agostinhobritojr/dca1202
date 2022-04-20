#include <stdio.h>
#include <stdlib.h>

int* myrealloc(int *x,
               int old_size,
               int new_size){
  int *y;
  if(old_size == new_size){
    return x;
  }
  else if(new_size > old_size){
    y = calloc(new_size, sizeof (int));
    memcpy(y, x, old_size*sizeof(int));
    free(x);
    return (y);
  }
  else{
    y = calloc(new_size, sizeof (int));
    memcpy(y, x, new_size*sizeof(int));
    free(x);
    return (y);
  }
}

int main()
{
  int *x, m=5, n=3, i;
  x = malloc(m * sizeof(int));
  for(i=0; i<m; i++){
    x[i] = i+1;
  }
  printf("%p: ", x);
  for(i=0; i<m; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  x = myrealloc(x, m, n);

  return 0;
}






