#include <iostream>
#include <cstring>
#include "motor.h"

using namespace std;

int main(void){
  Motor m;
  m.setFabricante("ACME");
  m.setPreco(23.45);
  m.setNome("Speedatron");
  m.setPotencia(130);
  m.setVelocidade(280);
  cout << m.getFabricante() << "\n"
       << m.getPreco() << "\n"
       << m.getNome() << "\n"
       << m.getPotencia() << "\n"
       << m.getVelocidade() << "\n";
}
