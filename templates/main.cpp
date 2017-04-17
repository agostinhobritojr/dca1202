#include <iostream>
#include "funcoes.h"
using namespace std;

float media(float a, float b){
  return ((a+b)/2);
}

int main(){
  int x, y;
  float z;
  x = 3;
  y = 4;
  z = 6;
//  cout << "media = " << media(x,z) << endl;
  cout << "media = " << media<int>(x,y) << endl;
  cout << "media = " << media<float>(x,y) << endl;
  cout << "media = " << media(x,z) << endl;
  funcao<float, int>(45);
  alo<float, 5>(8);
  cout << endl;
  alo<float>(8);
  return 0;
}

