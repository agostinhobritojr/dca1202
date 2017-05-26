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

int Dialog::getR(){
  return(ui->spinBoxR->value());
}

int Dialog::getG(){
  return(ui->spinBoxG->value());
}

int Dialog::getB(){
  return(ui->spinBoxB->value());
}
