#include <stdio.h>
#include <stdlib.h>
/* funcao auxiliar criada pelo programador:
cria um array de 10 inteiros e retorna um ponteiro para este array
*/
int* criar_array(void){
  int x[10];
  int i;
  for(i=0; i<10; i++)
    x[i] = i;
  return x;
}
/* funçao principal */
int main(void){
  int *y, i;
  y = criar_array();
  for(i=0; i<10; i++)
    y[i]=10-i;
  for(i=0; i<10; i++)
    printf("%d\n", y[i]);
  free(y);
}
