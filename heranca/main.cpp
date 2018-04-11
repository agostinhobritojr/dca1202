#include <iostream>
#include "motor.h"
#include "equipamento.h"

using namespace std;

int main(void){
  Motor m;
  Equipamento e;
  e = m;
  // proibido. Nao ha como determinar
  // os campos da classe motor que serao
  // copiados do objeto "e"
  //  m = e;
  m.setFabricante("ACME");
  // acessando o metodo setPreco da
  // classe Motor
  m.setPreco(23.45);
  // acessando o metodo setPreco da
  // classe Equipamento
  m.Equipamento::setPreco(20);
  m.setNome("Speedatron");
  m.setPotencia(130);
  m.setVelocidade(280);
  cout << m.getFabricante() << "\n"
       << m.getPreco() << "\n"
       << m.getNome() << "\n"
       << m.getPotencia() << "\n"
       << m.getVelocidade() << "\n";
}
