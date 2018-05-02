#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
  ifstream fin;

  vector<vector<int>> matriz;
  int nl, nc;
  fin.open("/home/ambj/workspace/dca1202/fluxos/matriz.txt");
  if(!fin.is_open()){
    cout << "nao abriu" << endl;
    exit(0);
  }
  fin >> nl >> nc;
  // inicia a matriz com o tamanho especificado no arquivo
  matriz = vector<vector<int>>(nl, vector<int>(nc, 0));
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fin >> matriz[i][j];
    }
  }

  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      cout << matriz[i][j] << ", ";
    }
    cout << endl;
  }
  fin.close();
  ofstream fout;
  fout.open("/home/ambj/workspace/dca1202/fluxos/pontos.txt");
  for(int i=0; i<30; i++){
    fout << (float)(rand()%100)/10 << " "
         << (float)(rand()%100)/10 << endl;
  }
  fout.close();

  fin.open("/home/ambj/workspace/dca1202/fluxos/pontos.txt");
  float x, y;
  while(fin.good()){
    fin >> x >> y;
    if(fin.good()){
      cout << "(" << x << ","
           << y << ")" << endl;
    }
  }
  return 0;
}















