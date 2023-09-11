#include <iostream>
#include <cmath>

class Vetor2d {
private:
    // propriedades
    float y;
    float x;
public:
    // metodos
    void setX(float x_){
        x = x_;
    }
    float getX(void){
        return x;
    }
    void setY(float x_){
        y = y_;
    }
    float getY(void){
        return y;
    }
    float norma(){
        return std::sqrt(x*x + y*y);
    }
    float angulo(){
        return std::atan2f(y, x)*180/3.1415;
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












