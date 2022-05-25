#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  char ch;
  std::string str;
  fin.open("alunos.csv");
  while (std::getline(fin, str, ',')) {
    std::cout << str << std::endl;
  }
  fin.close();
}