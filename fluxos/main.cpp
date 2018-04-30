#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  int x;

  fin.open("/home/ambj/numero.txt");
  if(!fin.is_open()){
    exit(0);
  }
  fin >> x;
  cout << "x = " << x << endl;

  fout.open("/home/ambj/nome.txt");
  if(!fout.is_open()){
    exit(0);
  }
  fout << "Agostinho Brito " << x << "\n" << flush;
  fout.close();
  return 0;
}
