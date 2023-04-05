#include <stdio.h>
#include <stdlib.h>     /* qsort */

int funcao(int a){
  return a+1;
}

float values[] = { 40, 10, 100, 90, 20.5, 20.4 };

int compare (const void * a, const void * b){
  if(*(float*)a < *(float*)b){
    return -1;
  } else if(*(float*)a > *(float*)b){
    return 1;
  }
  else return 0;
}

int main (){
  int n;
  qsort (values, 6, sizeof(float), compare);
  for (n=0; n<6; n++)
     printf ("%f ",values[n]);
  return 0;
}

/*int main(void){
  int (*pf)(int) = &funcao;
  printf("endereco de funcao = %p\n", &funcao);
  printf("valor = %d", pf(1));
}
*/
