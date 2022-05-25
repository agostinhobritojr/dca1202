#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::string s;
  fin.open("nome.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  fin >> s;
  std::cout << "leu: " << s << "\n";
  fin.close();
}