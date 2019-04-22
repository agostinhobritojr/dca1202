#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  char nome[20];
  string alo, parte1, parte2;
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
  // #include <string>
  // string alo;
  {
  getline(fin, alo);
  int pos;
  pos = alo.find("|");
  cout << alo << endl;
  cout << "pos = " << pos << endl;
  parte1 = alo.substr(0, pos);
  cout << "parte1 = " << parte1 << endl;
  parte2 = alo.substr(pos+1,
                      alo.size()-(pos+1));

  cout << "parte2 = " << parte2 << endl;
//  fin >> nome >> idade;
//  cout << nome << idade << endl;
  }

  fin.close();

  fin.open("/home/ambj/lerolero.txt");
  if(!fin.is_open()){
    exit(0);
  }

  char c;
  long contador[26];
  for(int i=0; i<26; i++){
    contador[i] = 0;
  }
  while(fin.good()){
    fin.get(c);
    c = c-'a';
    if(c >=0 && c <26){
      contador[c]++;
    }
  }
  int max;
  max=303990;
  for(int i=0; i<26; i++){
    c = 'a' + i;
    cout << c << "= ";
    for(int j=0; j<25*contador[i]/max; j++){
      cout << "*";
    }
    cout << endl;
  }
           ;
  return 0;
}










