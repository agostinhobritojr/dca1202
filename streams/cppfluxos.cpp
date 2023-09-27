#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main(void){
  // output file stream
  std::ofstream fout;
  // input file stream
  std::ifstream fin;
  // string para guardar o nome
  std::string s;

  // abre o arquivo
  fout.open("/home/ambj/saida.txt");
  // verifica se a abertura foi ok
  if(fout.is_open()){
    // grava no fluxo
    fout << "Agostinho\n";
  }
  else{
    std::cout << "nao abriu arquivo\n";
    std::exit(0);
  }
  // fecha o arquivo
  fout.close();
  fin.open("/home/ambj/saida.txt");
  if(fin.is_open()){
    // le o dado
    fin >> s;
    std::cout << s << std::endl;
  }else{
    std::cout << "nao abriu arquivo";
    std::exit(0);
  }
  fin.close();
}