#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>

using namespace std;
#define NAPOSTAS 30
int main(){
  vector<int> aposta(6, 0);
  vector< vector<int> > apostas;
  vector< vector<int> > teste(5, vector<int>(4,0));
  vector<int> valores(60,0);
  for(int i=0; i<60; i++){
    valores[i] = i+1;
  }
  srand(time(0));
  for(int j=0; j<NAPOSTAS; j++){
    random_shuffle(valores.begin(), valores.end());
    for(int i=0; i<aposta.size(); i++){
      aposta[i] = valores[i];
      //aposta[i] = rand()%60+1;
    }
    // ordenar a sequencia
    sort(aposta.begin(), aposta.end());
    apostas.push_back(aposta);
    /*
    for(int i=0; i<aposta.size(); i++){
      cout << setw(2) << aposta[i] << ", ";
    }
    cout << endl;
    */
  }
  for(int i=0; i<apostas.size(); i++){
    for(int j=0; j<apostas[i].size(); j++){
      cout << setw(2) << apostas[i][j] << ", ";
    }
    cout << endl;
  }
  return 0;
}

