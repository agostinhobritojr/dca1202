#include <iostream>

int main(){
    int *x, n=5;
    // aloca um elemento
    x = new int;
    *x = 3;
    std::cout << "*x = " << *x << std::endl;
    std::cout << "*x = " << *(x+0) << std::endl;
    std::cout << "*x = " << x[0] << std::endl;
    //free(x); NO!!!
    delete x;

    n = 1;
    x = new int [n];
    for(int i=0; i<n; i++){
        x[i] = i;
    }
    for(int i=0; i<n; i++){
        std::cout << "x[" << i << "] = " << x[i] << std::endl;
    }
    delete [] x;
    return 0;
}
