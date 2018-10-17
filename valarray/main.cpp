#include <iostream>
#include <valarray>

using namespace std;

int main()
{
  valarray <int> v1(10,2), v2(10,5);
  valarray <int> v3;

  v3 = v1+v2;

  for(int i=0; i<10; i++){
    cout << v3[i] << ", ";
  }

  return 0;
}
