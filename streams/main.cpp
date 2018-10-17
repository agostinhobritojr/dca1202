#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
  ofstream fout, macaco;
  // caminho completo para o arquivo
  fout.open("/home/ambj/acucar.pdf");
  // caminho relativo
  // fout.open("acucar.txt");
  if(!fout.is_open()){
    cout << "arquivo nao foi aberto";
    exit(0);
  }
  fout << "foo";
  fout.close();
 // fout.open("/home/ambj/sal.txt");
 // macaco.open("/tmp/banana.txt");
  return 0;
}
