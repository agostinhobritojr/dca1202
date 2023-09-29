#include <iostream>
#include <fstream>

int main(void){
  std::ifstream fin;
  fin.open("planilha.txt");
  if(fin.fail()){
    std::cout << "Arquivo não encontrado" << std::endl;
    return 0;
  }
  int valor;
  while(fin.good()){
    fin >> valor;
    if(fin.good()){
      std::cout << valor << std::endl;
    }
  }
}



