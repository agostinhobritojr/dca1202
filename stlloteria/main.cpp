#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // para iota
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  vector<int> jogo(6), numeros(60,0);
  std::srand ( unsigned ( std::time(0) ) );

  iota(numeros.begin(), numeros.end(), 1);
  random_shuffle(numeros.begin(),
                 numeros.end());

  for(int i=0; i<numeros.size(); i++){
    cout << numeros[i] << ",";
  }
  cout << endl;

  copy(numeros.begin(),
       numeros.begin()+6,
       jogo.begin());

  for(int i=0; i<jogo.size(); i++){
    cout << jogo[i] << ",";
  }

  return 0;

}
