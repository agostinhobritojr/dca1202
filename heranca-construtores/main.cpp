#include <iostream>

using namespace std;

class A{
    int x;
public:
    A(){
        std::cout << "A construtor padrao\n";
    }
    A(int _x){
        x = _x;
    }
    ~A(){
        std::cout << "A destrutor\n";
    }
    void print(){
        std::cout << "A = " << x << std::endl;
    }
};

class B : public A {
    int y, z;
public:
    B(int _y);
    ~B(){
        std::cout << "B destrutor\n";
    }
    void print(){
        std::cout << "B = " << y << std::endl;
        std::cout << "B.z = " << z << std::endl;
    }
};

B::B(int _y) : A(_y), z(_y+1){
    std::cout << "B construtor argumentos\n";
    y = _y;
}

int main(){
//   A a(20);
    B b(30);
//   a.print();
    b.print();
    b.A::print();
    return 0;
}
