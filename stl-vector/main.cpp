#include <iostream>
#include <vector>


int main(){
    std::vector <int> v(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v[2] = 8;
 //   v.resize(8);
    v[3] = 10;
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << "," ;
    }
    std::cout << std::endl;
    return 0;
}
