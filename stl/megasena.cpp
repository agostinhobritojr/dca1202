#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>    // std::random_shuffle

int main(void){
  std::vector<int> valores, aposta(6,0);

  // inicializa o gerador de numeros PSEUDO-aleatorios
  std::srand(std::time(0));

  // inicializa o vetor com os valores de 1 a 60
  for(int i = 1; i <= 60; i++){  valores.push_back(i); }
  std::random_shuffle ( valores.begin(), valores.end() );

  std::copy(valores.begin(), valores.begin()+6, aposta.begin());
  std::sort(aposta.begin(), aposta.end());

  for(int i = 0; i < aposta.size(); i++){
    std::cout << aposta[i] << " ";
  }
  std::cout << std::endl;

}