#ifndef FUNCOES_H
#define FUNCOES_H
#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

template <typename T, typename U>
U media2(T a, T b){
    U c;
    c = (a+b)/2;
    return c;
}

template <class T, int n = 10>
void alo(){
    T vetor[n];
    for(int i=0; i<n; i++){
        std::cout << vetor[i] << std::endl;
    }
}


#endif // FUNCOES_H
