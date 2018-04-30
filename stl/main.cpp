#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v, v1(10,0);
  vector<int>::iterator vi;
  vector<int>::reverse_iterator ri;

  v1[0] = 3;
  v1[1] = -4;
  for(int i=0; i<10; i++){
    v.push_back(rand()%10);
  }

  for(vi = v.begin(); vi != v.end(); vi++){
    cout << *vi << ",";
  }
  cout << endl;
  // apagando e elemento de valor 7 do
  // array
  vi = find(v.begin(), v.end(), 7);
  cout << "*vi = " << *vi << endl;
  if(vi != v.end()){
    v.erase(vi);
  }
  for(ri = v.rbegin(); ri != v.rend(); ri++){
    cout << *ri << ",";
  }
  cout << endl;

  for(int i=0; i<v1.size(); i++){
    cout << v1[i] << ",";
  }
  cout << endl;
  for(int i=0; i<v.size(); i++){
    cout << v[i] << ",";
  }

  return 0;
}
