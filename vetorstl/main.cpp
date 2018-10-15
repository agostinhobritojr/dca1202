#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> x;
  vector<int>::iterator it;
  x.push_back(3);
  x.push_back(4);
  x.push_back(5);
  x.push_back(-2);

  it = find(x.begin(), x.end(), 5);
  x.erase(it);
  for(int i=0; i<x.size(); i++){
    cout << x[i] << ",";
  }
  cout << endl;
  x.pop_back();

  for(it=x.begin(); it!=x.end(); it++){
    cout << *it << ",";
  }
  cout << endl;
  return 0;
}
