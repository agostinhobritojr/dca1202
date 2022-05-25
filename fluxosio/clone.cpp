#include <cstdlib>
#include <fstream>
#include <iostream>
int main(void) {
  std::ifstream fin;
  std::ofstream fout;
  char ch;
  fin.open("entrada.txt");
  fout.open("saida.txt");
  while (fin.get(ch)) {
    fout.put(ch);
  }
  fin.close();
  fout.close();
}