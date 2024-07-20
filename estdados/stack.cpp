#include <iostream>
#include <stack>

int main(void) {
  std::stack<int> pilha;

  pilha.push(1);
  pilha.push(2);
  pilha.push(3);
  pilha.push(4);

  std::cout << "Tamanho da pilha: " << pilha.size() << std::endl;
  while (!pilha.empty()) {
    std::cout << pilha.top() << std::endl;
    pilha.pop();
  }
}
