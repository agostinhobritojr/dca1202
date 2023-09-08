#include <stdio.h>
#include <stdlib.h> // malloc()
#include <string.h> // memcpy()

int main(void){
  int **x;
  int i, j, nl=100000, nc=100000;

  printf("valor = %ld\n", nl*nc*sizeof(int)); 

//  int x[10000][10000]

  // Aloca array auxiliar
  x = (int**) malloc(nl * sizeof(int*));
  // aloca a matriz e guarda endereco em x[0]
  x[0] = (int*) malloc(nl*nc*sizeof(int));
  if(x == NULL){
    printf("Erro de alocacao de memoria 1\n");
    exit(1);
  }
  if(x[0] == NULL){
    printf("Erro de alocacao de memoria 2\n");
    exit(1);
  }

  // fixa os ponteiros das linhas na matriz auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  printf("passou primeiro\n");
  
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j]=0;
    }
  }

  printf("passou segundo\n");
  
  // libera a matriz de dados
  free(x[0]);
  // libera a matrix auxiliar
  free(x);
  x = NULL;
}