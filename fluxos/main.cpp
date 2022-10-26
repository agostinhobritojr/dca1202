#include <fstream>
#include <iostream>
#include <cstdlib>

int main(void){
  std::ofstream fout;
  fout.open("nome.pdf");
  if(!fout.is_open()){
    exit(1);
  }
  std::cout << "passou\n";
  fout << "Zeh \n";
  fout.close();
}
