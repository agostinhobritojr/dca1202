#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  int nl, nc, x;
  fin.open("/home/ambj/entrada.txt");
  if(!fin.is_open()){
    exit(0);
  }
  // abrir o arquivo
  fout.open("/home/ambj/saida.txt");
  // verificar se estah aberto
  if(!fout.is_open()){
    exit(0);
  }

  fin >> nl >> nc;
  fout << nl << " " << nc << endl;
  for (int i=0; i<nl; i++) {
    for (int j=0; j<nc; j++) {
      fin >> x;
      fout << setw(3) << x << " ";
    }
    fout << endl;
  }

  fin.close();
  fout.close();

  return 0;
}




