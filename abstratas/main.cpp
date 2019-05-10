#include <iostream>
#include <vector>

#include "figurageometrica.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"

using namespace std;

int main(){
  FiguraGeometrica *pfg;
//  invahlida
//  FiguraGeometrica fg;
  PutSphere sph;

  PutBox *pbx, bx;
  vector<FiguraGeometrica*> figs;

  sph.draw();

  figs.push_back(new PutBox() );
  figs.push_back(new CutBox() );
  figs.push_back(new PutBox() );
  figs.push_back(new PutBox() );
  figs.push_back(new CutBox() );

  for(int i=0; i<figs.size(); i++){
    figs[i]->draw();
  }

  for(int i=0; i<figs.size(); i++){
    delete figs[i];
  }
  //  pfg = &bx;
  // polimorfismo
//  pfg->draw();

//  pbx = &fg; INVALIDO
//  fg.draw();
//  bx.draw();
  return 0;
}
