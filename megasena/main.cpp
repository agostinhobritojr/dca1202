#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  vector<int> v(60);
  vector<int> sorteio(6);

  vector< vector<int>> sorteios;

  ostream_iterator<int> out_it (std::cout,", ");
  // inicia o gerador de numeros aleatorios
  // com uma semente diferente conforme a hora
  // da execucao
  srand(time(0));

  iota(v.begin(), v.end(), 1);

  // a chamada de copy() substitui
  //for(int i=0; i<v.size(); i++) {
  //  cout << v[i] << ", ";
  //}

  copy(v.begin(), v.end(), out_it);
  cout << "\n\n";

  copy(v.rbegin(), v.rend(), out_it);
  cout << "\n\n";


  for(int i=0; i<20; i++){
    random_shuffle(v.begin(), v.end());

    //  copy(v.begin(), v.end(), out_it);
    copy(v.begin(), v.begin()+6, sorteio.begin());

    // copia para o final do arrays de sorteios
    // o sorteio que foi realizado
    sorteios.push_back(sorteio);
  }
  for(int i=0; i<sorteios.size(); i++){
    cout << endl;
    cout << "sorteio = ";
    copy(sorteios[i].begin(),
         sorteios[i].end(),
         out_it);
  }
  return 0;
}

