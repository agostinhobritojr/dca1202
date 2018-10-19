#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

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
  //  fout << "foo";
  fout.close();
  // fout.open("/home/ambj/sal.txt");
  // macaco.open("/tmp/banana.txt");

  ifstream eq;
  // char tipo[10];
  string tipo, nome;
  float x, y, z;

  eq.open("/home/ambj/equacao.txt");

  if(!eq.is_open()){
    cout << "nao abriu equacao.txt\n";
    exit(0);
  }

  eq >> tipo;

  cout << "tipo = " << tipo << endl;

  if(tipo.compare("EQU")==0){
    eq >> x >> y >> z;
    getline(eq, nome);
    getline(eq, nome);
    if(eq.good()){
      cout << "x = " << x << endl;
      cout << "y = " << y << endl;
      cout << "z = " << z << endl;
      cout << "nome: " << nome << endl;
    }
  }
  eq.close();

  eq.open("/home/ambj/dados.txt");

  if(!eq.is_open()){
    exit(0);
  }

  float temp, pres;

  while(eq.good()){
    eq >> temp >> pres;
    if(eq.good()){
      cout << temp << " x " << pres << endl;
    }
  }



  return 0;
}
