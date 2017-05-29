#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
  list <int> lista;
  list <int>::iterator li;
  list <int>::reverse_iterator ri;
  lista.push_back(4);
  lista.push_back(5);
  lista.push_front(3);
  for(li = lista.begin(); li!= lista.end(); li++){
    cout << *li << " ";
  }
  cout << endl;
  for(ri = lista.rbegin(); ri != lista.rend(); ri++){
    cout << *ri << " ";
  }
  cout << endl;
//  li = lista.begin();
//  advance(li,1);
  li = find(lista.begin(), lista.end(), 4);
  lista.erase(li);
  for(li = lista.begin(); li!= lista.end(); li++){
    cout << *li << " ";
  }
  cout << endl;

  return 0;
}

