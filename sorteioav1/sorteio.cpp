#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void){
  ifstream arq;
  string s;
  vector<string> alunos;
  
  arq.open("lista.txt");
  if(!arq.is_open()){
	cout << "nao abriu\n";
  }
  while(arq.good()){
	getline(arq,s);
	if(arq.good()){
	  alunos.push_back(s);
	}
  }
  srand(time(0));
  random_shuffle(alunos.begin(), alunos.end());
  cout << "dia 12 ---- \n";
  for(int i=0; i<alunos.size()/2; i++){
	cout << alunos[i] << endl;
  }
  cout << "\n";
  cout << "dia 14 ---- \n";
  for(int i=alunos.size()/2; i<alunos.size(); i++){
	cout << alunos[i] << endl;
  }
}
