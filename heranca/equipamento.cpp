#include "equipamento.h"
#include <cstring>
#include <iostream>
Equipamento::Equipamento(int preco){
    this->preco = preco;
    std::cout << "Construtor Equipamento\n";
}

Equipamento::~Equipamento()
{
    std::cout << "Destrutor Equipamento\n";
}

void Equipamento::setNome(const char *nome_){
    std::strcpy(nome,nome_);
}

void Equipamento::setFabricante(const char *fabricante_){
    std::strcpy(fabricante,fabricante_);
}

void Equipamento::setPreco(float preco_){
    preco=preco_;
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
