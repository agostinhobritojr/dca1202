#include <stdio.h>
#include <math.h>
#include <string.h>
struct ponto{
  float x;
  float y;
};


float distancia(struct ponto p1, struct ponto p2){
  float ret;
  ret = sqrt((p1.x-p2.x)*(p1.x-p2.x)+
             (p1.y-p2.y)*(p1.y-p2.y));
  return ret;
}

struct teste{
  char c;
  char d;
  int i;
  float x[10][10];
  char nome[100];
  struct ponto p;
};

int main(){
  char c;
  unsigned int x;
  struct ponto ponto1, josefina;
  struct ponto p1, p2;
  struct teste tst;

  tst.p.x = 45;
  tst.x[1][2] = 4;
  strcpy(tst.nome, "agostinho brito");

  printf("tam de struct teste = %d\n\n",
         sizeof(struct teste));


  p1.x = 3;  p1.y = 4;
  p2.x = 10; p2.y = 9;

  printf("tam de struct ponto = %d\n",
         sizeof(struct ponto));

  printf("c=%d, x=%d, int=%d, float=%d \n",
         sizeof(c),
         sizeof(x),
         sizeof(int),
         sizeof(float));

  printf("distancia = %f\n",
         distancia(p1,p2));

  ponto1.x = 3;
  ponto1.y = 4;
  josefina.x = -1;
  josefina.y = 0;

  printf("ponto1 - x: %f\n", ponto1.x);

  c = -128;
  printf("c = %d\n", c);
  c = c-1;
  printf("c = %d\n", c);

  x = 0;
  x = x-1;
  printf("x = %u\n", x);
  return 0;
}
