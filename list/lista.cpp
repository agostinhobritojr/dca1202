#include <iostream>
#include <list>

using namespace std;

int main(void){
  list <int> lista;
  list <int>::iterator li;

  //  list <FiguraGeometrica*> figuras;
  // figuras.push_back(new Reta(0,0,10,12));
  
  lista.push_back(3);
  lista.push_back(4);
  lista.push_back(-1);
  for(li = lista.begin(); li!=lista.end(); li++){
	cout << "item = " << *li << endl;
  }
}
