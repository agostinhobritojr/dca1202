#include <iostream>
#include <vector>

int main(){
    std::vector<int> v(5,30);
    std::vector<int>::iterator it;
    std::vector<int>::reverse_iterator rit;

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v[2] = 8;

    for(it = v.begin(); it !=v.end(); it=it+2){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    for(rit = v.rbegin(); rit!=v.rend(); rit++){
        std::cout << *rit << ", ";
    }
    std::cout << std::endl;
    /*
    for(auto i : v){
        std::cout << i << ", ";
    }

    v.pop_back();

    std::cout << std::endl;

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }

    std::cout << std::endl;
*/
    return 0;
}
