#include "veiculo.h"
#include <cstring>

Veiculo::Veiculo()
{
  velocidade = 0;
}

void Veiculo::setFabricante(char *_nome)
{
  if(strlen(_nome) < 41){
    strcpy(fabricante, _nome);
  }
}

void Veiculo::setVelMax(int _velmax)
{
  velocidadeMaxima = _velmax;
}

char* Veiculo::getFabricante()
{
  return fabricante;
}

int Veiculo::getVelocidade()
{
  return velocidade;
}

void Veiculo::acelerar()
{
  if(velocidade+5 <= velocidadeMaxima){
    velocidade = velocidade + 5;
  }
}

void Veiculo::frear()
{
  if(velocidade-5 >= 0){
    velocidade = velocidade-5;
  }
}


