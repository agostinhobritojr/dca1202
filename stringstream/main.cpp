#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  string s;
  string linha;
  int x, y, larg, alt;

  linha = "retangulo 10 10 2 5";
  stringstream ss(linha);

  ss >> s;
  cout << "s = " << s << endl;

  if(s == "retangulo"){
    ss >> x >> y >> larg >> alt;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
   }

  stringstream ss1;
  ss1 << "alo " << 35 << " = " << 4.04;

  cout << "ss = " << ss1.str() << endl;

  return 0;
}

