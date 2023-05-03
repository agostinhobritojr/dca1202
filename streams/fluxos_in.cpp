#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(void){
  std::ifstream fin;
  std::string comment;
  int nl, nc, valor;

  fin.open("matriz.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  getline(fin, comment);
  std::cout << comment << "\n";
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
