#include <stdio.h>
#include <stdlib.h> // para malloc()/free()
#include <string.h> // para memcpy()

int main(){
  int **x, **y, **z;
  int nl=3, nc=4;
  int nlz, ncz;
  int i, j;

  // alocam a matriz e seu vetor auxiliar
  x = (int**) malloc(nl*sizeof (int*));

  if(x == NULL){
    exit(0);
  }


  x[0] = (int*) malloc(nl*nc*sizeof (int));

  // ajusta os enderecos no array auxiliar
  for(i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  // alocam a matriz e seu vetor auxiliar
  y = (int**) malloc(nl*sizeof (int*));
  y[0] = (int*) malloc(nl*nc*sizeof (int));

  // ajusta os enderecos no array auxiliar
  for(i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }

  nlz = nc;
  ncz = nl;
  // alocam a matriz e seu vetor auxiliar
  z = (int**) malloc(nlz*sizeof (int*));
  z[0] = (int*) malloc(nlz*ncz*sizeof (int));

  // ajusta os enderecos no array auxiliar
  for(i=1; i<nlz; i++){
    z[i] = z[i-1] + ncz;
  }

  x[0][0]=3; x[0][1]=4;
  x[0][2]=1; x[0][3]=2;

  x[1][0]=5;  x[1][1]=6;
  x[1][2]=-1; x[1][3]=9;

  x[2][0]=7; x[2][1]=8;
  x[2][2]=3; x[2][3]=3;

  // copia x->y
  memcpy(y[0], x[0], nl*nc*sizeof (int));

  // calcula z = x transposta
  for(i=0; i<nlz; i++){
    for(j=0; j<ncz; j++){
      z[i][j] = x[j][i];
    }
  }

  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
//      y[i][j] = x[i][j];
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  x[2][-2] = 8;
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%2d, ", x[i][j]);
    }
    printf("\n");
  }

  free(x[0]);  free(x);
  free(y[0]);  free(y);
  free(z[0]);  free(z);

  return 0;
}
