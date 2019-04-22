#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  char nome[20];
  string alo;
  int idade;
  // "c:/usuarios/jose\ antonio/alo.txt"
  fout.open("/home/ambj/alo.txt");
  if(fout.is_open()){
    cout << "arquivo foi aberto\n";
  }
  else{
    cout << "arquivo nao foi aberto\n";
    exit(1);
  }
  fout << "Agostinho Brito|" << 34 << endl;
  fout.close();
  // alo.txt precisa existir e
  // o usuario ter permissoes de acesso
  fin.open("/home/ambj/alo.txt");
  if(!fin.is_open()){
    exit(0);
  }

  getline(fin, alo);
  cout << alo << endl;
//  fin >> nome >> idade;
//  cout << nome << idade << endl;
  return 0;
}


