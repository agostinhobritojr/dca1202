#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::string str;
  char ch;
  fin.open("entrada.txt");
  while (fin.good()) {
    fin >> str;
    if(fin.good()){
      std::cout << "leu: " << str << std::endl;
    }
  }
  fin.close();
}


