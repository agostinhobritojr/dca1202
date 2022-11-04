#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
  vector<int> aposta(60);
  std::srand(std::time(0));

  std::iota(aposta.begin(),
            aposta.end(),1);

  for(int j=0; j<10; j++){
    std::random_shuffle(aposta.begin(),
                        aposta.end());

    for(int i=0; i<6; i++){
      std::cout << aposta[i] << ",";
    }
    std::cout << std::endl;
  }
  return 0;
}





