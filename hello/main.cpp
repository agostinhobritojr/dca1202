#include <iostream>

class Vetor2d {
private:
    // propriedades
    float y;
    float x;
public:
    // metodos
    void setX(float x_){
        if(x_ >=0){
            x = x_;
        }
        return;
    }
    float getX(void){
        return x;
    }
};

int main(){
    Vetor2d v1;
    v1.setX(-3);
    // v1.x = 3;
    std::cout << v1.getX();
    std::cout << std::endl;
    return 0;
}












