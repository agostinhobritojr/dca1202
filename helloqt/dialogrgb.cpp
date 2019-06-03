#include "dialogrgb.h"
#include "ui_dialogrgb.h"

DialogRgb::DialogRgb(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogRgb)
{
  ui->setupUi(this);
}

DialogRgb::~DialogRgb()
{
  delete ui;
}

int DialogRgb::getR()
{
  return ui->horizontalSliderR->value();
}

int DialogRgb::getG()
{
  return ui->horizontalSliderG->value();
}

int DialogRgb::getB()
{
  return ui->horizontalSliderB->value();
}






