#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
  vector<int> x;
  vector<int> mega(60,0);
  vector<int> aposta(6,0);
  vector<vector<int>> apostas;
  vector<int>::iterator it;
  vector<int>::reverse_iterator rit;

  iota(mega.begin(), mega.end(),1);

  for(int i=0; i<6; i++){
    random_shuffle(mega.begin(),
                   mega.end());
    sort(mega.begin(),
         mega.begin()+6);

    copy(mega.begin(),
         mega.begin()+6,
         aposta.begin());

    apostas.push_back(aposta);

    //  x.resize(10);
    /*for(it  = mega.begin();
        it != mega.begin()+6; // x.begin()+6
        it++){
      cout << *it << ", ";
    }
    cout << endl;*/
  }

  for(int i=0; i<apostas.size(); i++){
    for(int j=0; j<apostas[i].size(); j++){
      cout << apostas[i][j] << ", ";
    }
    cout << endl;
  }


 /*
  for(rit  = x.rbegin();
      rit != x.rend();
      rit++){
    cout << *rit << ", ";
  }
  cout << endl;
*/

  return 0;
}




