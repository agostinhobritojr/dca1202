#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i;
  int *x, *y;
  n=10;
  // aloca um array de n inteiros
  // e devolve o endereco do primeiro
  // byte do bloco alocado
  x = (int*) malloc(n*sizeof(int));
  if(x == NULL){
    printf("nao foi possivel alocar\n");
    exit(0);
  }
  srand(time(NULL));
  for(i=0; i<n; i++){
    x[i] = 10 + rand()%21;
    printf("%d, ", x[i]);
  }
  printf("\n");
  y = (int*) malloc(n*sizeof(int));
  if(y == NULL){
    printf("nao foi possivel alocar\n");
    exit(0);
  }
  for(i=0; i<n; i++){
    y[i] = x[i];
  }
  // y = x; nao realiza a copia
  // apenas atribui mais um ponteiro
  // para um bloco de memoria previamente
  // alocado
  x[0] = 5;
  for(i=0; i<n; i++){
    printf("%d, ", y[i]);
  }
  // libera a memoria alocada por malloc
  free(x);
  free(y);
  return 0;
}
