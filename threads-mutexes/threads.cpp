#include <chrono>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

int global = 0;

std::mutex mtx;

void foo(std::string s) {
  int res = 0;
  while (1) {
    // para testar sem bloqueio comente a linha seguinte
    mtx.lock();  // bloqueia o mutex ateh o unlock
    global = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    // condicao de corrida
    if (global == 1) {
      std::cout << "foo: " << s << " global == 1" << std::endl;
    } else {
      std::cout << "foo: " << s << " global != 1" << std::endl;
    }
    global = 0;
    // para testar sem bloqueio comente a linha seguinte
    mtx.unlock();  // desbloqueia o mutex

    res = std::rand() % 10;
    if (res == 0) {
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      std::cout << "foo sleep: " << s << ":" << global << std::endl;
    }
    if (res == 1) {
      std::cout << "SAIU THREAD: " << s << std::endl;
      return;
    }
    std::cout << "foo: " << s << std::endl;
  }
}

int main(void) {
  std::thread t1(foo, std::string("jose"));
  std::thread t2(foo, std::string("maria"));
  std::thread t3(foo, std::string("pedro"));

  t1.join();  // espera ate a thread t1 terminar
  t2.join();  // espera ate a thread t2 terminar
  t3.join();  // espera ate a thread t3 terminar
}
