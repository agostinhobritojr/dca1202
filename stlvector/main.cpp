#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v1, v2(8);
  vector<int>::iterator vi;
  for(int i=0; i<v2.size(); i++){
    v2[i] = i;
  }

  cout << "v2 ==> ";
  for(int i=0; i<v2.size(); i++){
    cout << v2[i] << ", ";
  }
  cout << endl;
  v1 = v2;

  cout << "v1 ==> ";
  for(int i=0; i<v1.size(); i++){
    cout << v1[i] << ", ";
  }
  cout << endl;

  v2.push_back(50);
  cout << "v2 ==> ";
  for(int i=0; i<v2.size(); i++){
    cout << v2[i] << ", " ;
  }
  cout << endl;
  v2.pop_back();
  //   vector<int>::iterator vi;
  cout << "v2 ==> ";
  for(vi=v2.begin(); vi!=v2.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;

  v2.erase(v2.begin()+3, v2.begin()+5);
  cout << "v2 ==> ";
  for(vi=v2.begin(); vi!=v2.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;

  vi = v2.begin()+3;
  v2.insert(vi,8);
  cout << "v2 ==> ";
  for(vi=v2.begin(); vi!=v2.end(); vi++){
    cout << *vi << ", ";
  }
  cout << endl;


  return 0;
}

