#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(){
  ifstream fin;
  string s;
  stringstream ss;
  int nx, ny, nz;

  fin.open("/home/ambj/tmp/alo.sculptor");
  if(!fin.is_open()){
    exit(0);
  }

  while(fin.good()){
    getline(fin, s);
    ss.str(s);
    ss >> s;

    cout << s << endl;
    if(s.compare("dim") == 0){
      cout << "li um dim\n";
      ss >> nx >> ny >> nz;
      cout << nx << "x" << ny << "x" <<
              nz << endl;
    }
    else if(s.compare("putbox")==0){
      int x0, x1, y0, y1, z0, z1;
      float r, g, b, a;
      ss >> x0 >> x1 >> y0 >> y1
          >> z0 >> z1;
      ss >> r >> g >> b >> a;
    }
  }

  // desenhar as figuras no sculptor criado


  return 0;
}




