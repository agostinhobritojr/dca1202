#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector< vector<int> > m(5, vector<int>(5, 0));

  for(int i=0; i<m.size(); i++){
    for(int j=0; j<m[i].size(); j++){
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  vector<vector<int>> n;
  vector<vector<int>> o;

  int nl, nc;
  cout << "digite nl e nc: ";
  cin >> nl >> nc;

  // inicializando o objeto diretamente
  // de uma instanciancao de um outro objeto
  // via construtor
  n = vector<vector<int>>(nl, vector<int>(nc,0));

  o.resize(nl);
  for(int i=0; i<o.size(); i++){
    o[i].resize(nc);
  }
  for(int i=0; i<o.size(); i++){
    for(int j=0; j<o[i].size(); j++){
      cout << o[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  for(int i=0; i<n.size(); i++){
    for(int j=0; j<n[i].size(); j++){
      cout << n[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

