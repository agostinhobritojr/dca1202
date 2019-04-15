#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor *v1;

  // new / delete
// invoca o construtor padrao
//  v1 = new Vetor;
  v1 = new Vetor(3,4);  v1->print();
  delete v1;
  v1 = new Vetor;  v1->print();
  delete v1;

  // new[] / delete[]
  v1 = new Vetor[5];
  v1[0].print();
  v1[1].print();
  (v1+0)->print();
  delete [] v1;


  return 0;
}




