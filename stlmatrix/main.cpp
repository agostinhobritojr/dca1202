#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<vector<int>> m(4, vector<int>(5,0));
  vector<vector<int>> n;

  n = vector<vector<int>>(8,
                          vector<int>(9,0));

  int i, j;
  m[3][2] = -8; // m(3,2) = -8
  for(i=0; i<m.size(); i++){
    for(j=0; j<m[i].size(); j++){
      cout << m[i][j] << ", ";
    }
    cout << endl;
  }
  return 0;
}
