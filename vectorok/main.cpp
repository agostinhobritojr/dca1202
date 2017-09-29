#include <iostream>
#include <vector>
#include <cstdlib>

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

