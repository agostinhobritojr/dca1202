#include <iostream>
#include <string>

using namespace std;

int main(){
  string str1, str2, str3;

//  str1 = "jose";
  cin >> str1;
  str2 = "maria";

  str3 = str1+str2+"antonio";
  cout << str1 << endl;
  cout << str2 << endl;
  cout << str3 << endl;
  cout << str1[1] << endl;
  str1[2] = 'X';
  cout << str1 << endl;
  cout << str1.size() << endl;
  return 0;
}
