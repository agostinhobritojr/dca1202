#include <iostream>
#include <cmath>
#include <exception>

class Excecao : public std::exception {
    virtual const char* what() const throw() {
        return "Lancou excecao";
    }
};

float media_harmonica(float a, float b){
    Excecao ex;
    if(a+b == 0){
//        throw "a = -b (denominador nulo)";
//        throw 20.0;
        throw ex;
    }
    std::cout << "passou aqui na media\n";
    return 2*a*b/(a+b);
}
int main(void){
    float a, b;
    std::cin >> a >> b;
    try{
        std::cout << media_harmonica(a,b) << std::endl;
        std::cout << "passou aqui na main\n";
    }
    catch(const char* e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(int e){
        std::cout << "erro: " << e << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    catch(...){
        std::cout << "excecao default\n";
    }
}


/*
float media_harmonica(float a, float b, int *erro){
    if(a == -b){
        *erro = 1;
        return 0;
    }
    *erro=0;
    return 2*a*b/(a+b);
}
int main(void){
    float a, b, media;
    int erro;
    std::cin >> a >> b;
    media = media_harmonica(a,b, &erro);
    if(erro == 0){
        std::cout << media << std::endl;
    }
    std::cout << "sqrt(-1) = " << std::sqrt(-1) << std::endl;
}
*/
