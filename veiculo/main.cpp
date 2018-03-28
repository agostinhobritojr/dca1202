#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){
  Veiculo v;
  v.setFabricante("Ford");
  v.setVelMax(100);
  cout << v.getFabricante() << endl;
  cout << v.getVelocidade() << endl;
  v.acelerar();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.acelerar();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.acelerar();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.acelerar();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  cout << "freando....";
  v.frear();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.frear();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.frear();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.frear();
  cout << "velocidade = " << v.getVelocidade()
       << endl;
  v.frear();
  cout << "velocidade = " << v.getVelocidade()
       << endl;

  return 0;
}
