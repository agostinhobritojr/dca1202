#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> x(4,100);
  int z[10];

  for(auto i:z){
    std::cout << i << "\n";
  }

  for(auto i:x){
    std::cout << i << "\n";
  }

  for(int i=0; i<x.size(); i++){

  }
  return 0;
}
