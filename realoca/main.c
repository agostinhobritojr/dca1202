#include <stdio.h>

int* realoca(int *x, int atual, int novo){
  int *y, i;
  if(atual == novo){
    return x;
  }
  // aloca novo bloco
  y = (int*) malloc(novo * sizeof(int));
  if(novo < atual){
    // copia o array
    for(i=0; i<novo; i++){
      y[i] = x[i];
    }
  }
  if(novo > atual){
    for(i=0; i<atual; i++){
      y[i] = x[i];
    }
    for(i=atual; i<novo; i++){
      y[i] = 0;
    }
  }
  // libera a memoria previamente alocada
  free(x);
  // retorna o novo endereco de memoria
  return(y);
}

int main(void){
  int *x, i;
  int n=5, m=3;

  x = (int*) malloc(n * sizeof(int));
  for(i=0; i<n; i++){
    x[i] = i+1;
  }
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  x = realoca(x, n, m);
  for(i=0; i<m; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  return 0;
}

