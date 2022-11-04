#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip> // para std::fixed

int main(){
  // objeto para conectar o fluxo de saida
  // com um arquivo
  std::ofstream fout;
  // abre o fluxo de saida
  // EH NECESSAHRIO QUE
  // 1: o diretorio de saida exista
  // 2: o usuario tenha permissao de escrita
  //    no diretorio
  // 3: se o arquivo existir, ele sera apagado
  // 4: se o arquivo existir, MAS NAO PERTENCER
  //    AO USUARIO, fout nao sera ligado ao fluxo
  //    de saida
  fout.open("saida_do_arquivo.txt");
  if(!fout.is_open()){
    std::exit(0);
  }
  // lancar dados no fluxo
  fout << "jose das couves\n";
  float x=4;
  fout << std::fixed;
  fout << std::setprecision(2);
  fout << 1.0 << " " << x << std::endl;
  // fechar o fluxo de saida
  fout.close();
  std::cout << "terminou\n";
  return 0;
}



