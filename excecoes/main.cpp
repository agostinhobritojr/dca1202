#include <iostream>
#include <cmath>

float media_harmonica(float a, float b){
    float erro;
    if(a+b == 0){
//        throw "a = -b (denominador nulo)";
        erro = 20.0;
//        throw erro;
        throw 20.0;
        std::cout << "passou aqui no if\n";
    }
    std::cout << "passou fora do if\n";
    return 2*a*b/(a+b);
}
int main(void){
    float a, b;
    std::cin >> a >> b;
    try{
        std::cout << media_harmonica(a,b) << std::endl;
    }
    catch(const char *e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(int e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(float e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(...){
        std::cout << "erro: sei lah...\n";
    }
}























/*
float media_harmonica(float a, float b, int *code){
//float media_harmonica(float a, float b, bool &code){
    if(a+b ==0){
        *code = 0;
        return 0;
    }
    *code = 1;
    return 2*a*b/(a+b);
}

int main(void){
    float a, b, c;
    int code;
    std::cin >> a >> b;
    c = media_harmonica(a, b, &code);
    if(code == 1){
        std::cout << c << std::endl;
    }
    else {
        std::cout << "erro!\n";
    }
    std::cout << "raiz = " << std::sqrt(a) << std::endl;
}
*/
