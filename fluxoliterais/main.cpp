#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  ifstream fin;
  ofstream fout;
//  Screen tela;
  string s;
  fin.open("/home/ambj/workspace/dca1202/fluxoliterais/figura.txt");

  // le uma linha completa para o string s
  while(fin.good()){
    getline(fin, s);
    if(fin.good()){
      string cmd;
      stringstream sstream(s);
      sstream >> cmd;
      if(cmd.compare("dim")==0){
        int x, y;
        sstream >> x >> y;
        cout << "nl = " << x << endl;
        cout << "nc = " << y << endl;
//        tela.setSize(x, y);

      }
      cout << cmd << endl;
//      cout << s << endl;
    }
  }
  return 0;
}
