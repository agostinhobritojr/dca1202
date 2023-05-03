#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(void){
  std::ifstream fin;
  std::string nome;
  fin.open("nome.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  getline(fin, nome);
  std::cout << nome << "\n";
}
