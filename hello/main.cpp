#include <iostream>
#include "vetor2d.h"

//using std::cout;

int main(){
    Vetor2d v1(1,2), v2(3,4), v3(5);

    v1.print(); std::cout << std::endl;
    v2.print(); std::cout << std::endl;
    v3.print(); std::cout << std::endl;
    float escalar;
    escalar = v1.produto(v2);

    std::cout << "escalar = " << escalar << std::endl;

/*    v1.setX(3);
    v1.setY(4);
    v2.setX(5);
    v2.setY(-8);
    v3 = v1.produto(4);
    v3.print();
    std::cout << "\n";
    std::cout << "escalar = " << v1.produto(v2) << "\n";

 //   v2 = v1.unitario();
    // v1.x = 3;

    std::cout << v1.getX() << " " << v1.getY();
    std::cout << std::endl;
    std::cout << v2.getX() << " " << v2.getY();
    std::cout << std::endl;
    std::cout << "tamanho = " << sizeof(v1) << std::endl;
*/
    return 0;
}












