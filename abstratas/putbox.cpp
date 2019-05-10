#include "putbox.h"
#include <iostream>

PutBox::PutBox(){

}

PutBox::~PutBox(){
  std::cout << "destrutor PutBox\n";
}

void PutBox::draw(){
  std::cout << "draw PutBox\n";
}
