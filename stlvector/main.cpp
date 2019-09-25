#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v, v1(10), v2(10,3);

  v.push_back(3);
  v.push_back(4);
  v.push_back(2);
  v.push_back(7);
  v.push_back(5);

  for (int i=0; i<v.size(); i++) {
    cout << v[i] << endl;
  }

//  v1[6] = 8;

  return 0;
}
