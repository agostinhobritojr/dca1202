#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, n, i, *y;
  printf("digite o tamanho: ");
  scanf("%d", &n);
  x = (int*) malloc(n*sizeof(int));
  if(x == NULL){
    exit(0);
  }



  y = (int*) malloc(n*sizeof(int));
  for(i=0; i<n; i++){
    x[i] = i;
  }

  memcpy(y, x, n*sizeof(int));

  for(i=0; i<n; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  free(x);
  /* atribuir o ponteiro nulo para uma
   * variável ajuda a saber se há algum
   * bloco de memória referenciado ou nao
   * por ela
   */
  x = NULL;
  free(y);
  return 0;
}






