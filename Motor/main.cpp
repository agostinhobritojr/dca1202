#include <iostream>
#include "motor.h"
#include "equipamento.h"

using namespace std;

int main(void){
  Motor m(20);
 // Equipamento e;

  cout << "tam motor = " << sizeof(m) << endl;
  m.setFabricante("ACME");
  m.setNome("Speedatron");
  m.setPotencia(130);
  m.setPreco(23.45);
  m.Equipamento::setPreco(20);
  m.setVelocidade(280);
  cout << m.getFabricante() << "\n"
       << m.getPreco() << "\n"
       << m.getNome() << "\n"
       << m.getPotencia() << "\n"
       << m.getVelocidade() << "\n";
  return 0;
}
