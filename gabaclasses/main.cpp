#include "vetor.h"

int main(){
  Vetor<int> v1, v1a;
  Vetor<float> v2, v2a;
  v1.print();
  v2.print();
  v1a = v1.mult(2);
  v2a = v2.mult(1.3);
  v1a.print();
  v2a.print();
  return 0;
}
