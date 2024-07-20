#include <iostream>
#include <queue>

int main(void) {
  std::queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  while (!q.empty()) {
    std::cout << q.front() << std::endl;
    q.pop();
  }
}
