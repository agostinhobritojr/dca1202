#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::string s;
  int idade;
  fin.open("nome.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  fin >> s >> idade;
  std::cout << "leu: " << s << " e " << idade << "\n";
  fin.close();
}






