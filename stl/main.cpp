#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::vector<int> v;
  std::vector<int>::iterator it;
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  for(it = v.begin(); it!=v.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

//  it = v.begin();
  v.insert(v.begin()+2, 5);

  std::sort(v.begin(), v.end());
//  v.erase(v.begin()+2);

  for(it = v.begin(); it!=v.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;


  return 0;
}
