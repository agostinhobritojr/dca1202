#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  string s, comando;
  ifstream fin;
  fin.open("/home/ambj/arquivo.txt");

  stringstream ss;
  ss << "x = " << 33 << "; y = " << 4 ;

  cout << "(" << ss.str() << ")\n";

  while (1) {
    getline(fin, s);
    if(fin.good()){
      stringstream ss(s);
      ss >> comando;
      cout << comando << endl;
      if(comando.compare("dim") == 0){
        int nx, ny, nz;
        ss >> nx >> ny >> nz;
        cout << nx << "x" << ny << "x"
             << nz << endl;
      }
      else if (comando.compare("putvoxel")==0) {
        int pos[3];
        float color[4];
        ss >> pos[0] >> pos[1] >> pos[2];
        ss >> color[0] >> color[1];
        ss >> color[2] >> color[3];
       }
    }
    else{
      break;
    }
  }
  return 0;
}
