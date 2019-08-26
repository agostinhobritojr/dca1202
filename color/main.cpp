#include <iostream>
#include "color.h"

using namespace std;

int main(){
  Color c1(1,0,0), c2(1,1,0), c3;
  c3 = c1.combina(c2);
  c3.print();
  c3 = c1;
  if(c3.compara(c1)== true){
    cout << "iguais\n";
  }
  else {
    cout << "diferentes\n";
  }
  return 0;
}

