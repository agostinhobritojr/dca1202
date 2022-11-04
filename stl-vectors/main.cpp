#include <iostream>
#include <vector>

int main(){
  std::vector<int> v(5, 10);
  std::vector<int>::iterator it;
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  v.erase (v.begin()+6);
  v.insert(v.begin()+6,4);

  for(it = v.begin(); it!=v.end(); it++){
    std::cout << *it << " ";
  }

  //  v.pop_back();
  //  v.resize(20);
  //  for(int i=0; i<v.size(); i++){
  //    std::cout << v[i] << " ";
  //  }
  std::cout << std::endl;

  return 0;
}
