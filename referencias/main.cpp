#include <iostream>

using namespace std;

void f(int &x){
  cout << "endx = " << &x << endl;
  x = x + 1;
}

int main(){
  int a = 3;
  f(a);
  cout << "endx = " << &a << endl;
  cout << "x = " << a << endl;
  return 0;
}
