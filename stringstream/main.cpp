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
  }


  return 0;
}




