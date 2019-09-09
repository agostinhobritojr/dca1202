#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream fin;
  ofstream fout, fout1;
  fin.open("/home/ambj/entrada.txt");
  fout.open("/home/ambj/saida.txt");
  fout1.open("/home/ambj/saida1.txt");

  char c;
  int c1;

  while (fin.good()) {
    fin >> c1;
    if(fin.good()){
      cout << "amostra = " << c1 << "\n";
    }
  }


/*
  while (c1 = fin.get()){          // loop getting single characters
    if(fin.good()){
      fout.put(c1);
    }
    else{
      break;
    }
  }*/

  return 0;
}
