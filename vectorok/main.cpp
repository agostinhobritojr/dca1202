#include <iostream>
#include <vector>
#include <cstdlib>

// para a funcao find
#include <algorithm>

// para a funcao distance
#include <iterator>

using namespace std;

int main(){
  vector<int> v;
  vector<int> v2(10,4);
  vector<int>::iterator vi;

  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  for(int i=0; i<10; i++){
    v.push_back(rand()%100);
  }
  for(int i=0; i<v.size(); i++){
    cout << v[i] << ", ";
  }
  cout << endl;

  // usa iteradores para varrer o container
  for(vi = v.begin(); vi != v.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;
  v.erase(v.begin()+3);
  for(vi = v.begin(); vi != v.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;

  // usando find para encontrar um elemento
  vi = find(v.begin(), v.end(), 77);
  cout << "vi = " << *vi << endl;
  cout << *vi << "eh o " <<
          distance(v.begin(), vi) <<
          "esimo elemento\n";
//  v.erase(vi);
  for(vi = v.begin(); vi != v.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;

  //  vector<int> v2(10,4);
  v2[3] = 8;
  for(int i=0; i<v2.size(); i++){
    cout << v2[i] << ", ";
  }
  cout << endl;
  v2.resize(5);
  for(int i=0; i<v2.size(); i++){
    cout << v2[i] << ", ";
  }
  cout << endl;

  return 0;
}

