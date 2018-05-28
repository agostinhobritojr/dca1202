#include "dialogcolor.h"
#include "ui_dialogcolor.h"

DialogColor::DialogColor(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogColor)
{
  ui->setupUi(this);
}

DialogColor::~DialogColor()
{
  delete ui;
}

int DialogColor::getR(){
  return ui->horizontalSliderR->value();
}

int DialogColor::getG(){
  return ui->horizontalSliderG->value();
}

int DialogColor::getB(){
  return ui->horizontalSliderB->value();
}



