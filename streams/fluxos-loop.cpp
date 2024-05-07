#include <fstream>
#include <string>
#include <iostream>

int main(void){
  std::ifstream fin;
  std::string s;
  int nl, nc, x;

  fin.open("figura.txt");
  if(!fin.is_open()){
    exit(1);
  }
  while (fin.good()){
    fin >> s;
    //std::getline(fin, s);
    if(fin.good()){
      if(s.compare("dim") == 0){
        int nx, ny, nz;
        fin >> nx >> ny >> nz;
        std::cout << "nx = " << nx << std::endl;
        std::cout << "ny = " << ny << std::endl;
        std::cout << "nz = " << nz << std::endl;
      }
      else if(s.compare("putbox") == 0){
        int x0, x1, y0, y1, z0, z1;
        float r, g, b, a;
        fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
        fin >> r >> g >> b >> a;
      }
      else if(s.compare("cutbox") == 0){
        int x0, x1, y0, y1, z0, z1;
        fin >> x0 >> x1 >> y0;
        fin >> y1 >> z0 >> z1;
      }
    }
  }
  
  fin.close();
}
