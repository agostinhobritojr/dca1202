#include <iostream>

using namespace std;

// "typename" e "class"
// sao intercambiaveis
template <typename T>
T media(T x, T y){
  return (x+y)/2;
}

template <class T, typename U>
U funcao(T x){
  return x;
}

template <typename T, int N=10>
T alo(T x){
  T y[N];

}



int main(){
  int a=2, b=3;
  float c=2, d=3;
  cout << "mediaint = " <<
          media<int>(a,b) << endl;
  cout << "mediafloat = " <<
          media<float>(c,d) << endl;
  cout << "mediaint = " <<
          media(a,b) << endl;
  cout << "mediafloat = " <<
          media(c,d) << endl;
  cout << "media = " <<
          media<int>(c,d) << endl;
  return 0;
}



