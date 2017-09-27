#include <iostream>

using namespace std;

template <class T>
T media(T a, T b){
  return((a+b)/2);
}

template <typename T, class U>
U alo(T a, T b){
  U ret;
  ret = a + b;
  return ret;
}

template <typename T, int N=5>
void teste(T a){
  T x[N];
  for(int i=0; i<N; i++){
    x[i] = a;
    cout << x[i] << " ";
  }
  cout << endl;
}

int main(){
  int a, b;
  float c, d;
  a = 4;  b = 5;
  c = 3.1; d = 8.7;

  cout << "media = " << media<int>(a, b) << endl;
  cout << "media = " << media<float>(a, b) << endl;
  cout << "media = " << media(a, b) << endl;
  cout << "media = " << media(c, d) << endl;
  cout << "media = " << media<int>(a, d) << endl;
  // T <- int ... U <- float
  cout << "alo = " << alo<int,float>(a,b) << endl;
  teste<int, 3>(5);
  teste<int, 4>(5);

  return 0;
}

