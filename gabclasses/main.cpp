#include <iostream>
#include "alo.h"

using namespace std;

int main(){
  Alo<int> x;
  Alo<double> y;
  Vetor<int> x;

  cout << "tam x = " << sizeof(x) << endl;
  cout << "tam y = " << sizeof(y) << endl;

  return 0;
}
