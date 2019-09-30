#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
  vector< vector<int> >
      m(4, vector<int>(3, 0));

  vector< vector<int> > n;

  n = vector< vector<int> >(4,
        vector<int>(3, 0));

  vector<int> v(5,1);

  for (int i=0; i<m.size(); i++) {
    for (int j=0; j<m[0].size(); j++) {
      m[i][j] = rand()%10;
    }
  }

  m.push_back(v);

  for (int i=0; i<m.size(); i++) {
    for (int j=0; j<m[i].size(); j++) {
      cout << m[i][j] << ",";
    }
    cout << endl;
  }

  return 0;
}
