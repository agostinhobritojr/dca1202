#include <iostream>
#include <cmath>

class Vetor2d{
private:
    float y;
    float x;
public:
    void setX(float x_){
        x = x_;
    }
    float getX(){
        return x;
    }
    void setY(float y_){
        y = y_;
    }
    float getY(){
        return y;
    }
    float norma(){
        return std::sqrt(x*x+y*y);
    }
    float angulo(){
        return std::atan2(y,x)*180/M_PI;
    }
    void print(){
        std::cout << "(" << x <<
            ", " << y << ")\n";
    }
};

int main(void){
    Vetor2d v;
//    v.x = 4;
    v.setX(3); v.setY(4);
    v.print();
    std::cout << "norma  = " << v.norma() << std::endl;
    std::cout << "angulo = " << v.angulo() << std::endl;
}
