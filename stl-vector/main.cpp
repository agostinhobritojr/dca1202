#include <iostream>
#include <vector>

int main(){
    std::vector<int> v(4,50);

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";
    v.push_back(45);
    v.push_back(-16);
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";
    return 0;
}
