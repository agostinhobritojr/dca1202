#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int **q, **p;
  int i, j;

  // ??????????
  // aloca-se o array auxiliar
  // para armazenar os enderecos
  // das linhas
  q = (int**) malloc(4*sizeof(int*));
  p = (int**) malloc(4*sizeof(int*));

  // aloca os arrays para as linhas
  for(i=0; i<4; i++){
    q[i] = malloc(4*sizeof (int));
  }

  // aloca os arrays para as linhas
  for(i=0; i<4; i++){
    p[i] = malloc(4*sizeof (int));
  }

  // plano A
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      p[i][j] = q[i][j];
    }
  }

  // plano B
  for(i=0; i<4; i++){
    memcpy(p[i], q[i], 4*sizeof(int));
  }


  // libera array com as linhas
  for(int i=0; i<4; i++){
    free (q[i]);
  }
  // libera array auxiliar
  free (q);

  // libera array com as linhas
  for(int i=0; i<4; i++){
    free (p[i]);
  }
  // libera array auxiliar
  free (p);

  return 0;
}


