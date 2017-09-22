#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
  string s1;
  string s2("alo, maria");
  string s3(s2);
  string s4(s2,3,5);

  cout << "s1 = " << s1 << endl;
  cout << "s2 = " << s2 << endl;
  cout << "s3 = " << s3 << endl;
  cout << "s4 = " << s4 << endl;

  s1 = "http://";
  s2 = "www.google";
  s3 = ".com.br";
  s4 = s1+s2+s3;

  cout << "s4 = " << s4 << endl;

  printf("s4 = %s\n", s4.c_str());

  int posicao;

  s3 = "google";

  posicao=s4.find("google");
  cout << "achou string na posicao " <<
          posicao << endl;

  posicao=s4.find(s3);
  cout << "achou string na posicao " <<
          posicao << endl;

  posicao=s4.find('.');
  cout << "achou . na posicao " <<
          posicao << endl;

  // procura o caractere a partir
  // de uma posicao dada
  posicao=s4.find('.', posicao+1);
  cout << "achou . na posicao " <<
          posicao << endl;

  cout << "s4 tem " << s4.size() << " caracteres\n";

  for(int i=0; i<5; i++){
    cout << s4[i] << endl;
  }

  string alo;
  alo = "oito";

  if( strcmp(alo.c_str(), "oito") == 0){
    cout << "iguais" << endl;
  }

  if( alo == "oito"){
    cout << "iguais" << endl;
  }
  return 0;


}









