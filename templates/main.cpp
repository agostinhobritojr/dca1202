#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

template <typename T, typename U>
U media2(T a, T b){
    U ret;
    ret = a+b;
    return ret;
}

template <typename T, int N=10>
void teste(T value){
    float x[N];
    for(int i=0; i<N; i++){
        std::cout << "mostra " << value << "\n";
    }
}

int main(){
    int a=1, b=2, c=3;
    float x=4, y=5, z=6;

    teste<int, 2>(3);

    c = media<int>(a, b);
    std::cout << "c = " << c << "\n";
    c = media(a, b);
    std::cout << "c = " << c << "\n";
    z = media<float>(x, y);
    std::cout << "z = " << z << "\n";
    z = media(x, y);
    std::cout << "z = " << z << "\n";

    z = media2<int, float>(a,b);
    std::cout << "z = " << z << "\n";
    return 0;
}
