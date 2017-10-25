#include "meudialogo.h"
#include "ui_meudialogo.h"

MeuDialogo::MeuDialogo(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::MeuDialogo)
{
  ui->setupUi(this);
}

MeuDialogo::~MeuDialogo()
{
  delete ui;
}

int MeuDialogo::getR()
{
  return ui->spinBoxR->value();
}

int MeuDialogo::getG()
{
  return ui->spinBoxG->value();
}

int MeuDialogo::getB()
{
  return ui->spinBoxG->value();
}
