#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
}

Dialog::~Dialog()
{
  delete ui;
}

int Dialog::getR()
{
  return ui->horizontalSliderR->value();
}

int Dialog::getG()
{
  return ui->horizontalSliderG->value();
}

int Dialog::getB()
{
  return ui->horizontalSliderB->value();
}
