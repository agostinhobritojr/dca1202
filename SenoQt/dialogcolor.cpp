#include "dialogcolor.h"
#include "ui_dialogcolor.h"

DialogColor::DialogColor(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogColor)
{
  ui->setupUi(this);
  connect(ui->horizontalSliderR,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(mudaR(int)));


  connect(ui->horizontalSliderG,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(mudaG(int)));


  connect(ui->horizontalSliderB,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(mudaB(int)));
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

void DialogColor::mudaR(int)
{
  ui->widgetColor->setRGB(
        ui->horizontalSliderR->value(),
        ui->horizontalSliderG->value(),
        ui->horizontalSliderB->value());
}

void DialogColor::mudaG(int)
{
  ui->widgetColor->setRGB(
        ui->horizontalSliderR->value(),
        ui->horizontalSliderG->value(),
        ui->horizontalSliderB->value());
}

void DialogColor::mudaB(int)
{
  ui->widgetColor->setRGB(
        ui->horizontalSliderR->value(),
        ui->horizontalSliderG->value(),
        ui->horizontalSliderB->value());
}

