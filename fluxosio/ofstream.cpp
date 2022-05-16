#include <cstdlib>
#include <fstream>
#include <iostream>

int main(void) {
  std::ofstream fout;
  fout.open("/home/nome_do_usuario.txt");
  if (!fout.is_open()) {
    exit(1);
  }
  fout << "Agostinho Brito \n";
  fout.close();
  std::cout << "deucerto!\n";
}