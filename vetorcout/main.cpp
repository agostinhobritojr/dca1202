#include <iostream>
#include "vetor.h"
#include <fstream>

using namespace std;

int main(){
  ofstream fout;
//  Screen tela(20,30);

//  cout << tela;

  Vetor v(3,4), v1(5,6);
  v.print();
  cout << v << "; v1 = " << v1 << endl;
//operator << (cout, v)
//----------
//   cout
  cout << "digite o vetor (x e y): ";
  cin >> v;
  cout << v << endl;
  fout.open("/home/ambj/vetorcout.txt");
  fout << v << "; v1 = " << v1 << endl;
  fout.close();
  return 0;
}
