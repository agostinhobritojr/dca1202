#include <iostream>
#include "vetor.h"

using namespace std;

// Cria um funcao gabarito
// que trabalha com dois tipos diferentes
// e um inteiro que pode ser inicializado
template <class Tipo, class Tipo2,
          int n=10>
Tipo2 media(Tipo a, Tipo b){
  Tipo x[n];
  Tipo2 ret;
  ret = (a+b)/2;
  return ret;
}

int main()
{
  Vetor v1(3,4), v2(8,-6), v3;
  float x, y;
  int z;
  x=3; y=4;

  v1.imprime();
  v2.imprime();

  v3 = media<Vetor, Vetor, 15>(v1,v2);

  v3.imprime();
  // funcao media com gabarito de float
  cout << "media = " << media<float, float>(x,y)
       << endl;
  cout << "media = " << media<int, float>(x,y)
       << endl;
  cout << "media = " << media<float, float>(x,z)
       << endl;
  return 0;
}
