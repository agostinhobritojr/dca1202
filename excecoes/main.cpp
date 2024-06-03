#include <iostream>
#include <cmath>

float media_harmonica(float a, float b){
    char c=10;
    if(a+b == 0){
        throw "a = -b (denominador nulo)";
//        throw c;
    }
    std::cout << "passou aqui...\n";
    return 2*a*b/(a+b);
}
int main(void){
    float a, b;
    std::cin >> a >> b;
    try{
        std::cout << media_harmonica(a,b) << std::endl;
    }
    catch(double z){
        std::cout << "peguei = " << z << std::endl;
    }
    catch(int a){
        std::cout << "peguei = " << a << std::endl;
    }
    catch(const char* e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(...){
        std::cout << "quem liga....\n";
    }
}
