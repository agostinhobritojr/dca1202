#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main(){
    std::vector<int> v(4,50);
    std::vector<int>::iterator it;
    std::vector<int>::reverse_iterator itr;

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";
    v.push_back(45); v.push_back(-16);
    for(it=v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n";
    for(auto valor : v){
        std::cout << valor << ", " ;
    }
    std::cout << "\n";
    for(itr=v.rbegin(); itr!=v.rend(); itr++){
        std::cout << *itr << ", ";
    }
    std::cout << "\n";

    // algoritmo de busca
    it = std::find(v.begin(), v.end(), 45);
    std::cout << "*it = " << *it << "\n";
    *it = 12;
    for(auto valor : v){
        std::cout << valor << ", " ;
    }
    std::cout << "\n";
    it = std::find(v.begin(), v.end(), 12);
    v.erase(it);
    for(auto valor : v){
        std::cout << valor << ", " ;
    }
    return 0;
}









