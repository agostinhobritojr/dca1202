#ifndef ALO_H
#define ALO_H
template <class T>
class Alo{
  T x;
public:
  void setX(T _x);
  T getX(void);
};

template <class T>
void Alo<T>::setX(T _x){
  x = _x;
}

template <class T>
T Alo<T>::getX(void){
  return x;
}
#endif // ALO_H
