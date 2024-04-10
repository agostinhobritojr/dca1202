#include <iostream>
#include "funcao.h"

int main(){
    int x;
    std::cout << "digiti x: ";
    std::cin >> x;
    std::cout << "f(" << x << ") = " << f(x) << std::endl;
}
