#include <stdio.h>

void troca(int *x, int *y){
  int z;
//  printf("troca: x=%i, y=%i\n", *x, *y);
  z = *x; // z recebe o valor 3
  *x = *y; // o conteudo de x recebe o conteudo de y
  *y = z;
//  printf("troca: x=%i, y=%i\n", *x, *y);
}

void ordena(int *x, int n){
  int i, j;
  // o loop externo procura colocar
  // na posicao "i" o valor que eh
  // o menor entre os restantes ">i"
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(*x[i] > x[j]){
        troca(&x[i], &x[j]);
      }
    }
  }
}

int main(void){
  int a, b;
  int i;

  // x eh um array com quatro inteiros
  int x[4];

  x[0] = 1;
  x[1] = 3;
  x[2] = 7;
  x[3] = -3;

  printf("\n\n");
  for(i=0; i<4; i++){
    printf("%i, ", x[i]);
  }
  printf("\n");
  ordena(x,4);
  for(i=0; i<4; i++){
    printf("%i, ", x[i]);
  }
  printf("\n\n");



  printf("tamanho de x = %i\n", sizeof(x));

  // px eh um ponteiro para inteiro
  int *px;

  px = x;

  printf("px=%p, x=%p\n",px, x);
  printf("px=%p, x[1]=%p\n",px, &x[1]);
  printf("x[0] = %i, *px = %i\n", *(x+1), *px);

  //px = px + 1;// px++;
  // --px; px--; ++px;

  printf("px=%p, *px=%i\n",px+1, *(px+1));


  /*
  // p eh um ponteiro para inteiro
  // e eh capaz de armazenar enderecos
  // que contenham numeros inteiros
  int *p;

  a = 3;
  b = 4;

  printf("end de a: %p\n", &a);
  printf("end de b: %p\n", &b);
  printf("end de p: %p\n", &p);

  // o ponteiro "p" guarda o endereço de "a"
  // o ponteiro "p" aponta para "a"

  p = &a;
  printf("valor de p = %p\n", p);

  printf("conteudo de p = %i\n", *p);

  printf("main : a=%i, b=%i\n", a, b);
  // passagem de parametros por valor
  troca(&a, &b);
  printf("main : a=%i, b=%i\n", a, b);
  */
  return 0;

}

