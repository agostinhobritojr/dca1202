#ifndef VETOR_HPP
#define VETOR_HPP

template <class T>
class Vetor{
  T x, y;
public:
  Vetor(T _mx, T _my);
  T getX();
  T getY();
};

template<class T>
Vetor<T>::Vetor(T _mx, T _my){
  x = _mx; y=_my;
}

template<class T>
T Vetor<T>::getX(){ return x;}

template<class T>
T Vetor<T>::getY(){ return y;}



#endif // VETOR_HPP
