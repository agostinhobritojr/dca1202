#include <iostream>
#include <cmath>
#include "vetor.h"
using namespace std;


int main(){
  Vetor v1, v2, v3;
  // enviando a mensagem "setX"
  // com o parametro "4"
  v1.setX(3); v1.setY(4);
  v2.setX(1); v2.setY(2);
  v3 = v1.soma(v2);
  v3 = v1.subt(v2);
  cout << "v3 = (" << v3.getX() << ", " <<
          v3.getY() << ")" << endl;
//  cout << "o x de v1 = " << v1.getX() << endl;

//  int x;
//  cin >> x; // scanf("%d",&x);
//  cout << "Hello World!" << x << endl;
  return 0;
}

