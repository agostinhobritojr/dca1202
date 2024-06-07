#include <iostream>

class PonteiroSabido {
  int *p;
 public:
  explicit PonteiroSabido(int *p_ = nullptr) { p = p_; }
  ~PonteiroSabido(){
    delete p;
  }
  int& operator*() { return *p; } 
};

int main(void){
  PonteiroSabido pont(new int);
//  int *pont;
//  pont = new int;
  *pont = 32;
  std::cout << "*pont = " << *pont << "\n";
//  delete pont;
}



