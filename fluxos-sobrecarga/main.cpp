#include <iostream>
#include <fstream>
#include "vetor.h"

int main(){
  Vetor v1;
  std::ofstream fout;
  float z;
  fout.open("/tmp/vetor.txt");
  std::cout << "digite x e y do vetor e depois um z: ";
  std::cin >> v1 >> z;
  std::cout << "v1 = " << v1 << "\n";
  std::cout << "z = " << z << "\n";
  fout << "v1 = " << v1 << "\n";
  fout.close();
  return 0;
}
