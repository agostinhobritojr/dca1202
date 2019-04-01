#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <ctime>

using namespace std;

int main(void){
  string aluno;
  ifstream arq;
  vector<string> alunos;
  
  arq.open("alunos.txt");
  while(arq.good()){
	getline(arq, aluno);
	alunos.push_back(aluno);
  }
  srand(time(0));
  random_shuffle(alunos.begin(), alunos.end());
  cout << "primeiro dia ---------\n";
  for(int i=0; i<alunos.size()/2; i++){
	cout << alunos[i] << endl;
  }
  cout << "\nsegundo dia ----------\n";
  for(int i=alunos.size()/2; i<alunos.size(); i++){
	cout << alunos[i] << endl;
  }
}
