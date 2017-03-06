#include <stdio.h>
#include <stdlib.h> // malloc()/free()

int* realoca(int *x, int antigo, int novo){
  int *y;
  int i;
  // caso os tamanhos sejam iguais
  // nada ha para se fazer, alem de
  // retornar o proprio endereco
  if(antigo == novo){
    return;
  }
  // aloca o novo array
  y = (int*)malloc(novo*sizeof(int));
  if( y == NULL){
    exit(0);
  }
  // array novo eh maior que o antigo
  if(antigo < novo){
    // copia os elementos do array antigo
    memcpy(y, x, antigo*sizeof(int));

    /*
    for(i=0; i<antigo; i++){
      y[i] = x[i];
    }
    */
    // completa com zeros
    for(i=antigo; i<novo; i++){
      y[i] = 0;
    }
  }
  // array novo eh menor que o antigo
  else{
    // copia os elementos do array antigo
    // limitando-se ao tamanho do novo array
    memcpy(y, x, antigo*sizeof(int));

    for(i=0; i<novo; i++){
      y[i] = x[i];
    }
  }
  free(x);
  // devolve o endereco do novo array alocado
  return (x);
}


int main(void){
  int *x;
  int n, i;
  n = 5;
  x = (int*)malloc(n*sizeof(int));
  if( x == NULL){
    exit(0);
  }

  printf("tam x = %ld\n", sizeof(x));

  for(i=0; i<n; i++){
    x[i] = i+1;
  }

  x = realoca(x, 5, 10);

  for(i=0; i<10; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");

  free(x);

  return 0;
}

