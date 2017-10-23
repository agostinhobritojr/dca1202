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
