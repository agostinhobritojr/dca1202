#ifndef ALO_H
#define ALO_H

#include <iostream>

template <typename T>
class Alo{
private:
    T x;
public:
    Alo(T _x);
    void print();
    Alo<T> meutipo();
};

template <typename T>
Alo<T>::Alo(T _x){
    x = _x;
}

template <typename T>
void Alo<T>::print(){
    std::cout << "x = " << x << std::endl;
}

template <typename T>
Alo<T> Alo<T>::meutipo(){
    Alo<T> ret;
    return ret;
}

#endif // ALO_H
