#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(void){
  std::ifstream fin;

  std::stringstream ss;
  std::string s;
  int x, y;

  ss << "(" << x << "," << y << ")";

  std::cout << ss.str() << std::endl;
  s = ss.str();
  std::cout << s << std::endl;

  fin.open("planilha.csv");
  if(fin.fail()){
    std::cout << "Arquivo nao encontrado" << std::endl;
    return 0;
  }  
  while(fin.good()){
    std::getline(fin, s);
    ss.clear();
    ss.str(s);
    while(ss.good()){
      std::getline(ss, s, ',');
      std::cout << s << std::endl;
    }
  }
}
