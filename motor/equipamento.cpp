#include "equipamento.h"
#include <iostream>
#include <cstring>

using namespace std;

Equipamento::Equipamento(){
  cout << "chamando construtor equipamento\n";
}

Equipamento::Equipamento(int a){
  cout << "chamando construtor equipamento"
          " parametros\n";
  cout << "a = " << a << endl;
}

Equipamento::~Equipamento()
{
  cout << "chamando destrutor equipamento\n";
}

void Equipamento::setNome(const char *_nome){
  strcpy(nome,_nome);
}

void Equipamento::setFabricante(const char *_fabricante){
  strcpy(fabricante,_fabricante);
}

void Equipamento::setPreco(float _preco){
  preco=_preco;
}

char* Equipamento::getNome(void){
  return nome;
}

char* Equipamento::getFabricante(void){
  return fabricante;
}

float Equipamento::getPreco(void){
  return preco;
}

