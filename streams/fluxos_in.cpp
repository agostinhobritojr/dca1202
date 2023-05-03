#include <iostream>
#include <fstream>
#include <cstdlib>

int main(void){
  std::ifstream fin;
  int nl, nc, valor;

  fin.open("matriz.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  fin >> nl >> nc;
  std::cout << "nl = " << nl << "\n";
  std::cout << "nc = " << nc << "\n";
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fin >> valor;
      std::cout << valor << " ";
    }
    std::cout << "\n";
  }
  fin.close();
}
