#ifndef VETOR_H
#define VETOR_H
#include <iostream>

using namespace std;

template <class T>
class Vetor{
  T x, y;
public:
  Vetor();
  void print(){
    cout << "(" << x << ", "
         << y << ")" << endl;
  }
  Vetor<T> mult(T a);
};

template <class T>
Vetor<T>::Vetor(){
  x = 1;
  y = 1;
}

template <class T>
Vetor<T> Vetor<T>::mult(T a){
  Vetor<T> ret;
  ret.x = x*a;
  ret.y = y*a;
  return  ret;
}

#endif // VETOR_H
