#include <stdio.h>

float soma(float a, float b){
  return (a+b);
}

float subt(float a, float b){
  return (a-b);
}

float mult(float a, float b){
  return (a*b);
}

float divs(float a, float b){
  return (a/b);
}

void menu(void){
  printf("Operacoes disponiveis:\n"
         "1 - entrar valores\n"
         "2 - soma\n"
         "3 - subtracao\n"
         "4 - multiplicacao\n"
         "5 - divisao\n"
         "6 - sair\n");
}


int main(void){
  float x, y; // recebe valores
  float z; // guarda resultado
  int opcao;

  float (*func)(float, float);

  while(1){
    menu();
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
      printf("digite x e y: ");
      scanf("%f %f", &x, &y);
      break;
    case 2:
      func = soma;
      break;
    case 3:
      func = subt;
      break;
    case 4:
      func = mult;
      break;
    case 5:
      func = divs;
      break;
    case 6:
      exit(0);
    }
    if(opcao > 1 && opcao < 6){
      z = func(x,y);
      printf("endereco = %p\n", func);
      printf("resultado = %f\n", z);
    }
  }

  return 0;
}

