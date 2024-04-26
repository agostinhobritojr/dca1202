#include <iostream>
#include <fstream>

int main(void){
  std::ofstream fout;

  fout.open("/home/ambj/nome.txt");
  if(fout.is_open() == false){
    std::cerr << "Erro ao abrir o arquivo" << std::endl;
    return 1;
  }
  fout << "Nome: ";
  fout << "Joseh" << std::endl;

  fout.close();
}