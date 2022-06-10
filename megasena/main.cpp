#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
  std::vector<int> v(60);

  std::srand(std::time(0));

  std::iota(v.begin(), v.end(), 1);
  for(int j=0; j<39; j++){
    std::random_shuffle(v.begin(),v.end());

    for(int i=0; i<6; i++){
      std::cout<< v[i] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
