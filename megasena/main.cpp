#include <iostream>
#include <vector>
#include <cstdlib> // srand
#include <ctime> // time
#include <numeric> // iota
#include <algorithm>  // random_shuffle


using namespace std;

int main(){
  vector<int> aposta(6,0);
  vector<int> dezenas(60);
  vector< vector<int> > apostas;
  int napostas;

  srand(time(0));

  iota(dezenas.begin(), dezenas.end(),1);

  /*  for(int i=0; i<dezenas.size(); i++){
    cout << dezenas[i] << ", ";
  }
  cout << endl;
  cout << endl;
*/
  napostas = 5;

  for(int j=0; j<napostas; j++){
    random_shuffle(dezenas.begin(), dezenas.end());
    copy(dezenas.begin(), dezenas.begin()+6,
         aposta.begin());
    apostas.push_back(aposta);

    for(int i=0; i<aposta.size(); i++){
      cout << aposta[i] << ", ";
    }
    cout << endl;
  }
  cout << "\n\n";
  for(int i=0; i<apostas.size(); i++){
    for(int j=0; j<apostas[0].size(); j++){
      cout << apostas[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}
