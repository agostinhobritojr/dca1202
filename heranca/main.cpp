#include <iostream>
#include "motor.h"

int main(void){
    Motor m(100);
    m.setFabricante("ACME");
    m.setPreco(23.45);
    m.setNome("Speedatron");
    m.setPotencia(130);
    m.setVelocidade(280);
    std::cout << m.getFabricante() << "\n"
              << m.getPreco() << "\n"
              << m.getNome() << "\n"
              << m.getPotencia() << "\n"
              << m.getVelocidade() << "\n";
}

