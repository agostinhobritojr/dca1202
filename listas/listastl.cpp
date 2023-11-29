#include <list>
#include <forward_list>
#include <iostream>

int main(void){
  std::forward_list<int> flist;

  flist.push_front(1);
  flist.push_front(2);
  flist.push_front(3);

  for(auto it = flist.begin(); it != flist.end(); ++it){
    std::cout << *it << std::endl;
  }
}