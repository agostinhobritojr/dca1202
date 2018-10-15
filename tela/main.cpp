#include <iostream>
#include <vector>
using namespace std;

int main(){
  int ncol, nlin;
  nlin = 10;
  ncol = 20;
  char brush;
  vector< vector<char> >
      tela (nlin, vector<char>(ncol, '#'));

  vector< vector<char> > tela2;

  tela2 = vector< vector<char> >
      (nlin, vector<char>(ncol, '#'));


  brush = '0';
  tela[5][10] = brush;
  for(int i=0; i<nlin; i++){
    for(int j=0; j<ncol; j++){
      cout << tela[i][j];
    }
    cout << "\n";
  }
  return 0;
}
