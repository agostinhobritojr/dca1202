/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include <time.h>  /* clock */

void troca(int *x, int *y){
  int z;
  z = *x; // z recebe o valor 3
  *x = *y; // o conteudo de x recebe o conteudo de y
  *y = z;
}

void ordena(int *x, int n){
  int i, j;
  // o loop externo procura colocar
  // na posicao "i" o valor que eh
  // o menor entre os restantes ">i"
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(x[i] > x[j]){
        troca(&x[i], x+j);
      }
    }
  }
}

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main (){
  int *values;
  clock_t t;
  long int n;
  long int nvalues;

  nvalues = 60000;

  values = (int*) malloc(nvalues*sizeof(int));

  for(n=0; n<nvalues; n++){
    values[n] = rand()%100;
  }

  t = clock();
  qsort (values, nvalues, sizeof(int), compare);
  t = clock() - t;

  printf ("levou %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);


  for(n=0; n<nvalues; n++){
    values[n] = rand()%100;
  }

  t = clock();
  ordena (values, nvalues);
  t = clock() - t;

  printf ("levou %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);

  /*  for (n=0; n<nvalues; n++)
      printf ("%d ",values[n]);
  */

  return 0;
}





