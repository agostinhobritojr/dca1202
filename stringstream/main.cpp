#include <iostream>
#include <fstream> // para ifstream
#include <sstream> // para stringstream
#include <string> // para string

using namespace std;

int main(){
  ifstream fin;
  string linha;
  string cmd;
  stringstream ss;
 // Screen tela;

  fin.open("/home/ambj/figura.txt");
  if(!fin.is_open()){
    cout << "nao abriu arquivo\n";
  }


  while(fin.good()){
    getline(fin,linha);
    if(!fin.good()){
      break;
    }
    cout << linha << endl;
    linha += " ";
    ss = stringstream(linha);
    ss >> cmd;
    cout << cmd << endl;

    if(cmd.compare("dim") == 0){
      int larg, alt;
      ss >> larg >> alt;
    //  tela = Screen(larg, alt);
      cout << "larg = " << larg << endl;
      cout << "alt  = " << alt << endl;

    }
    else if(cmd.compare("rectangle") == 0){
      int x0, y0, larg, alt, tipo;
      string brush;
      ss >> x0 >> y0 >> larg >> alt >> tipo;
      cout << "x0   = " << x0 << endl;
      cout << "y0   = " << y0 << endl;
      cout << "larg = " << larg << endl;
      cout << "alt  = " << alt << endl;
      cout << "tipo = " << tipo << endl;
      ss >> brush;
      if(ss.good()){
        cout << "brush = " << brush << endl;
      }
      else{
        brush = " ";
        cout << "brush = espaco\n";
      }
  //    armazenamento = new Rectangle(x0, y0, larg, alt, tipo, brush);
    }
    cout << endl;
  }



  fin.close();
  return 0;
}
