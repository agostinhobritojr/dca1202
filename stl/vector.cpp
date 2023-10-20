#include <vector>
#include <iostream>

int main(void){
  std::vector<int> v;

  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  
  std::cout << "size = " << v.size() << std::endl;

  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << std::endl;
  }

  v.pop_back();
  v.resize(10);
  v[30] = 3;
  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << std::endl;
  }

}