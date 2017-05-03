#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ofstream saida; // arquivo de SAIDA
  ifstream entrada; // arquivo de ENTRADA
  string str, str2, str3, str4;
  float x;

  entrada.open("/home/ambj/entrada.txt");
  if(entrada.is_open()){
    entrada >> str;
    cout << "str = " << str << endl;
    entrada.close();
  }

  char c;
  entrada.open("/home/ambj/entrada.txt");
  saida.open("/home/ambj/clone.txt");
  if(entrada.is_open()){
    while(entrada.get(c)){
      cout << "leu: " << c << endl;
      if(entrada.good()){
        saida.put(c);
      }
    }
    entrada.close();
    saida.close();
  }

  entrada.open("/home/ambj/nome.txt");
  char nome[40];


  if(entrada.is_open()){
//    entrada.getline(nome,40);
    getline(entrada,str);
    cout << str << endl;
  }

  str="alo";
  cout << str << endl;
  str = str+" voce";
  str2 = str;
  str3 = str2+str;
  cout << str3 << endl;
  cout << str.c_str() << endl;

  cout << "str tem "<<str.size() << " caracteres\n";
  str.clear();
  cout << "novo string = |" << str << "| "<< endl;

  saida.open("/home/ambj/saida.txt");
  if(saida.is_open()){
    saida << "Agostinho Brito\n";
    saida << x << endl;
    saida.close();
  }


  return 0;
}

