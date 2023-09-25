#include <fstream>
#include <iostream>

int main(void){
  std::ofstream fout;
  fout.open("/home/ambj/saida.txt");
  if(fout.is_open()){
    fout << "alo, maria!\n";
  }
  else{
    std::cout << "nao abriu arquivo\n";
  }
  fout.close();
}