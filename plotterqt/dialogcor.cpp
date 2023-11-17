#include "dialogcor.h"
#include "ui_dialogcor.h"

DialogCor::DialogCor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCor)
{
    ui->setupUi(this);
}

DialogCor::~DialogCor()
{
    delete ui;
}

int DialogCor::getR(){
    return ui->horizontalSliderR->value();
}

int DialogCor::getG(){
    return ui->horizontalSliderG->value();
}

int DialogCor::getB(){
    return ui->horizontalSliderB->value();

}
