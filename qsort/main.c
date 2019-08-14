#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int values[] = { 40, 10, 100, 90, 20, 25 };

typedef struct aluno{
  char nome[100];
  int idade;
} ALUNO;

int compaluno(const void *a, const void* b){
 // aluno a;
  (*(ALUNO*)a).idade -
      (*(struct aluno*)b).idade;
}


int compare (const void *a, const void *b){
  return ( *(int*)a - *(int*)b );
}

int main (){
  int n;
  qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)
    printf ("%d ",values[n]);
  return 0;
}
