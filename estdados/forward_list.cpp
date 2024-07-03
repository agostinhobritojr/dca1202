#include <forward_list>
#include <iostream>

int main(void) {
  std::forward_list<int> list;
  std::forward_list<int>::iterator iter;
  list.push_front(1);
  list.push_front(2);
  list.push_front(3);
  for (iter = list.begin(); iter != list.end(); iter++) {
    std::cout << *iter << std::endl;
  }
  list.pop_front();
  std::cout << std::endl;
  for (auto i : list) {
    std::cout << i << std::endl;
  }
}