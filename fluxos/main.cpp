#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream fout;

  // "c:/usuarios/jose\ antonio/alo.txt"
  fout.open("/home/ambj/alo.txt");
  if(fout.is_open()){
    cout << "arquivo foi aberto\n";
  }
  else{
    cout << "arquivo nao foi aberto\n";
    exit(1);
  }
  fout << "Agostinho" << 34 << endl;

  fout.close();

  return 0;
}
