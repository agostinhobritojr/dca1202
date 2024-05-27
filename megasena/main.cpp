#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <numeric>

int main(){
    std::vector<int> valores(60);
    std::srand(std::time(0));

    std::iota(valores.begin(), valores.end(), 1);
    for(int j=0; j<43; j++){
    std::random_shuffle(valores.begin(), valores.end());
    std::sort(valores.begin(), valores.begin()+6);

    for(int i=0; i<6; i++){
        std::cout << valores[i] << ", ";
    }
    std::cout << std::endl;
    }
    return 0;
}
