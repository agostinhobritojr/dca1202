#include <iostream>
#include "motor.h"

int main(void){
  Motor m;
  m.setFabricante("ACME");
  m.setPotencia(100);
  m.setPreco(23);
  m.Equipamento::setPreco(23);
  m.setNome("Speedatron");
  m.setVelocidade(280);
  std::cout << m.getFabricante() << "\n"
       << m.getPreco() << "\n"
       << m.getNome() << "\n"
       << m.getPotencia() << "\n"
       << m.getVelocidade() << "\n";
}
