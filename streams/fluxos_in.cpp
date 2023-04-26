#include <cstdlib>
#include <fstream> // std::ofstream
#include <iostream> // para std::cout

int main(void) {
  std::ofstream fout; // fluxo de saida
  fout.open("nome.txt");
  if (!fout.is_open()) {
    exit(1);
  }
  std::cout << "vai escrever no arquivo\n";
  fout << "Agostinho Brito \n";
  fout.close();
}