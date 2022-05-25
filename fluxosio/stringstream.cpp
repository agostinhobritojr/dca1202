#include <string>
#include <sstream> // para stringstream
#include <iostream> // para cin/cout
#include <fstream> // para ifsteeam
#include <iomanip> // para setprecision

int main(void){
  std::ifstream fin;
  std::string str, figura;
  float r, g, b, a;
  fin.open("escultura.txt");
  while (std::getline(fin, str)) {
    std::stringstream ss;
    ss.str(str);
    ss >> figura;
    std::cout << figura << std::endl;
    if(figura.compare("putsphere") == 0){
      int xc, yc, zc, raio;
      ss >> xc >> yc >> zc >> raio >> r >> g >> b >> a;
      std::cout << "esfera: " << xc << " " << yc << " " <<
      zc << " " << raio << std::endl;
      std::cout << std::fixed;
      std::cout << std::setprecision(2) << r << " " << g << " " << b << std::endl;
    }
    if(figura.compare("putvoxel") == 0){
      int xc, yc, zc;
      ss >> xc >> yc >> zc >> r >> g >> b >> a;
      std::cout << "voxel: " << xc << " " << yc << " " <<
      zc << std::endl;
      std::cout << r << " " << g << " " << b << std::endl;
    }
  }
  fin.close();

  std::stringstream ss;
  ss << "x = " << 34 << "e y = " << 32;
  std::cout << ss.str() << std::endl;

}



