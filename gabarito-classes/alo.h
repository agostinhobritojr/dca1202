#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo{
  T x;
public:
  Alo(T param);
  T getX();
};

template <typename T>
Alo<T>::Alo(T param){
  x = param;
}

template <typename T>
T Alo<T>::getX(){
  return x;
}
#endif // ALO_H
