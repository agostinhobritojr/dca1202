#include <iostream>
#include <vector>

int main(){
  std::vector<std::vector<float> >
      m(10, std::vector<float>(10,1));

  for(int i=0; i<m.size(); i++){
    for(int j=0; j<m[i].size(); j++){
      std::cout << m[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
