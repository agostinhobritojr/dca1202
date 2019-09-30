#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v, v1(10), v2(10,3);
  vector<int>::iterator it;

  v.push_back(3);
  v.push_back(4);
  v.push_back(2);
  v.push_back(7);
  v.push_back(5);

  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }
  // procura o elemento "2" e devolve
  // sua posicao na sequencia na forma
  // de um iterador
  it = find(v.begin(), v.end(), 2);

  cout << "achei: " << *it << endl;

  // remove o elemento apontado pelo iterador
  v.erase(it);

  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }

  v.insert(v.begin()+2, 2);
  cout << endl;

  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }

/*  for (int i=0; i<v.size(); i++) {
    cout << v[i] << endl;
  }
*/
//  v1[6] = 8;

  return 0;
}
