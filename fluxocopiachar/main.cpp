#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream fin;
  ofstream fout;
  char c;
  fin.open("/home/ambj/workspace/dca1202/fluxocopiachar/figura.txt");
  fout.open("/home/ambj/workspace/dca1202/fluxocopiachar/copia.txt");

  while(fin.good()){
    fin.get(c);
    if(fin.good()){
      fout.put(c);
    }
  }

  return 0;
}
