#include <fstream>
#include <string>
#include <iostream>

int main(void){
  std::ifstream fin;
  std::string s;
  int nl, nc, x;

  fin.open("matriz.txt");
  if(!fin.is_open()){
    exit(1);
  }
  fin >> nl >> nc;
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fin >> x;
      std::cout << x << ", ";
    }
    std::cout << std::endl;
  }
//  fin >> s;
//  std::getline(fin, s);
 // std::cout << "leu: " << s << "\n";
  fin.close();
}

