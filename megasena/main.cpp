#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <iomanip>

int main(){
    std::vector<int> aposta(6);
    std::vector<int> numeros(60);

    std::vector< std::vector<int> > apostas;

    std::srand(std::time(0));

    std::iota(numeros.begin(), numeros.end(), 1);
    for(int i=0; i<5; i++){
        std::random_shuffle(numeros.begin(), numeros.end());
        std::copy(numeros.begin(), numeros.begin()+6,
                  aposta.begin());
        apostas.push_back(aposta);
    }

    for(int i=0; i<apostas.size(); i++){
        std::cout << (int) &apostas[i] << "\n";
    }

    for(int i=0; i<apostas.size(); i++){
        for(int j=0; j<apostas[i].size(); j++){
            std::cout << std::setw(2) << apostas[i][j] << ",";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    apostas[3].push_back(20);
    for(int i=0; i<apostas.size(); i++){
        for(int j=0; j<apostas[i].size(); j++){
            std::cout << std::setw(2) << apostas[i][j] << ",";
        }
        std::cout << "\n";
    }
    return 0;
}
