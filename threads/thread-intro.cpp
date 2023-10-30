#include <thread>
#include <iostream>
#include <chrono>

void threadFunction1() {
  // Codigo da thread
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
  std::cout << "thread 1\n";
}
void threadFunction2(int a){
  // Codigo da thread
  std::cout << "thread 2: " << a << "\n";
}
int main() {
  std::thread threadObj1(threadFunction1); // Cria uma thread
  std::thread threadObj2(threadFunction2, 42); // Cria uma thread
  threadObj1.join(); // Espera a thread terminar
  std::cout<< "thread 1 terminou\n";
  threadObj2.join(); // Espera a thread terminar
  std::cout<< "thread 2 terminou\n";
  return 0;
}