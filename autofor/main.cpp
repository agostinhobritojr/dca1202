#include <iostream>
#include <vector>

using namespace std;

class Alo{
public:
  void maria(void){
    cout << "tah-dah!" << endl;
  }
};

int main()
{
  int x[] = {1,2,3,4,5,6,3,2,2,4};
  vector<float> v(10,10.0);
  vector<Alo> a(10);
  for (auto i:x){
    cout << i << ",";
  }
  cout << endl;
  for (auto y: v){
    cout << y << ", ";
  }
  cout << endl;
  for (auto y: a){
    y.maria();
  }
  return 0;
}
