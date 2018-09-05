#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCOLUNAS 32

unsigned char sentArray[8][NCOLUNAS] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
  {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0}};

unsigned char receivedBytes[NCOLUNAS];
unsigned char receivedArray[8][NCOLUNAS];

void transmitByte(unsigned char byte);

void encodeArray(unsigned char dados[8][32]){
  int i, j;
  unsigned char baite, aux;

  for(i=0; i<NCOLUNAS; i++){
    baite = 0;
    aux = 128;
    for(j=0; j<8; j++){
      // testa se o sentArray eh igual a 0 ou 1
      if(sentArray[j][i]==1){
        // atribui o bit 1 na posicao
        // correspondente do byte
        baite = baite | aux;
      }
      aux = aux >> 1;
    }
    receivedBytes[i] = baite;
  }
}

void decodeArray(unsigned char array[NCOLUNAS]){
  /* insira sua solucao aqui */
  int i, j;
  unsigned char baite, aux;
  for(i=0; i<NCOLUNAS; i++){
    baite = array[i];
    aux = 128;
    for(j=0; j<8; j++){
      if((baite & aux) > 0){
        receivedArray[j][i] = 1;
      }
      else{
        receivedArray[j][i] = 0;
      }
      aux = aux >> 1;
    }
  }
}

void transmitByte(unsigned char byte){
  static int index=0;
  receivedBytes[index]=byte;
  index++;
}

void printReceived(){
  int i, j;
  for(i=0; i<8; i++){
    for(j=0; j<NCOLUNAS; j++){
      printf("%d",receivedArray[i][j]);
    }
    printf("\n");
  }
}

int main(void){
  encodeArray(sentArray);
  decodeArray(receivedBytes);
  printReceived();
}
