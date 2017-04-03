#include "equipamento.h"
#include <cstring>
#include <iostream>

using namespace std;

Equipamento::Equipamento(){
  cout << "construtor de equipamento\n";
}

Equipamento::Equipamento(int _x){
  cout << "construtor de inteiro\n";
}

Equipamento::~Equipamento(){
  cout << "destrutor de equipamento\n";
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
