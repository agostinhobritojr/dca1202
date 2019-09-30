#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int num;
  vector<int> aposta(60,0);

  srand(time(0));

  for (int i=0; i<60; i++) {
    aposta[i] = i+1;
  }

  for (int i=0; i<60; i++) {
    cout << aposta[i] << ", ";
  }
  cout << endl << endl;

  for (int j=0; j<10; j++) {
    random_shuffle(aposta.begin(),
                   aposta.end());
    for (int i=0; i<6; i++) {
      cout << aposta[i] << ", ";
    }
    cout << endl;
  }

  return 0;
}
