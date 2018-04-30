#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<vector<int>> m, n;
  vector<vector<int>> k(20, vector<int>(10,0));

  vector<int> a(6,1);
  int nl, nc;
  nl = 40;
  nc = 20;

  n = vector< vector<int> >(nl,
        vector<int> (nc, 0));

  for(int i=0; i<n.size(); i++){
    for(int j=0; j<n[i].size(); j++){
      cout << n[i][j] << ", ";
    }
    cout << endl;
  }
  cout << endl;
  m.push_back(a);
  m.push_back(a);
  m.push_back(a);

  for(int i=0; i<m.size(); i++){
    for(int j=0; j<m[i].size(); j++){
      cout << m[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}
