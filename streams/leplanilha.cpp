#include <iostream>
#include <fstream>
#include <string>

int main(void){
  std::ifstream fin;
  std::string str;
  fin.open("planilha.csv");
  std::getline(fin, str, ','); std::cout << "leu " << str << std::endl;
  std::getline(fin, str, ','); std::cout << "leu " << str << std::endl;
  std::getline(fin, str, ','); std::cout << "leu " << str << std::endl;
  std::getline(fin, str, ','); std::cout << "leu " << str << std::endl;
  std::getline(fin, str, ','); std::cout << "leu " << str << std::endl;
}
